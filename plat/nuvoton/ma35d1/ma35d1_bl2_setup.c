/*
 * Copyright (C) 2020 Nuvoton Technology Corp. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <assert.h>

#include <drivers/arm/sp804_delay_timer.h>
#include <common/desc_image_load.h>
#include <drivers/generic_delay_timer.h>
#include <lib/mmio.h>
#include <plat/arm/common/plat_arm.h>
#include <plat/common/platform.h>
#include <platform_def.h>
#include <common/debug.h>
#include <lib/optee_utils.h>

#include "ma35d1_private.h"

void bl2_early_platform_setup2(u_register_t arg0, u_register_t arg1, u_register_t arg2, u_register_t arg3)
{
	arm_bl2_early_platform_setup((uintptr_t)arg0, (meminfo_t *)arg1);

	/* Initialize the platform config for future decision making */
	ma35d1_config_setup();
}

/*
 * bl2_platform_setup()
 * MMU on - enabled by bl2_el3_plat_arch_setup()
 */
void bl2_platform_setup(void)
{
}


void bl2_el3_plat_arch_setup(void)
{
	/* Setup the MMU here */
	mmap_add_region(BL_CODE_BASE, BL_CODE_BASE,
			BL_CODE_END - BL_CODE_BASE,
			MT_CODE | MT_SECURE);

	/* Prevent corruption of preloaded Device Tree */
	mmap_add_region(DTB_BASE, DTB_BASE,
			DTB_LIMIT - DTB_BASE,
			MT_RO_DATA | MT_SECURE);

	/* config MMC */
	configure_mmu();

	generic_delay_timer_init();

	/* TODO: system config initial, power? */

	ma35d1_arch_security_setup();

	ma35d1_io_setup();
}

/*******************************************************************************
 * Transfer SCP_BL2 from Trusted RAM using the SCP Download protocol.
 * Return 0 on success, -1 otherwise.
 ******************************************************************************/
int plat_ma35d1_bl2_handle_scp_bl2(image_info_t *scp_bl2_image_info)
{
	if (scp_bl2_image_info->image_size > 0x80000) {	/* 512KB */
		WARN("code size is large than 512KB\n");
		return -1;
	}

	/* unlock */
	outp32((void *)SYS_RLKTZS, 0x59);
	outp32((void *)SYS_RLKTZS, 0x16);
	outp32((void *)SYS_RLKTZS, 0x88);

	/* Stop MCU - Enable M4 Core reset */
	outp32((void *)(SYS_BA+0x20), inp32((void *)(SYS_BA+0x20)) | 0x8);

	/* Load MCU binary into SRAM and DDR, depend on image size */
	if (scp_bl2_image_info->image_size <= 0x20000) {	/* 128KB */
		memcpy((void *)0x24000000, (void *)scp_bl2_image_info->image_base, scp_bl2_image_info->image_size);
	}
	else {
		memcpy((void *)0x24000000, (void *)scp_bl2_image_info->image_base, 0x20000);
		memcpy((void *)0x80020000, (void *)scp_bl2_image_info->image_base+0x20000, scp_bl2_image_info->image_size-0x20000);
	}
	flush_dcache_range(0x24000000,scp_bl2_image_info->image_size);

	/* Enable RTP clock */
	outp32((void *)CLK_SYSCLK0, inp32((void *)CLK_SYSCLK0) | 0x2);

	/* lock */
	outp32((void *)SYS_RLKTZS, 0);

	INFO("Load RTP M4\n");

	return 0;
}

/*******************************************************************************
 * Gets SPSR for BL32 entry
 ******************************************************************************/
static uint32_t ma35d1_get_spsr_for_bl32_entry(void)
{
	return 0;
}

/*******************************************************************************
 * Gets SPSR for BL33 entry
 ******************************************************************************/
static uint32_t ma35d1_get_spsr_for_bl33_entry(void)
{
	unsigned int mode;
	uint32_t spsr;

	/* Figure out what mode we enter the non-secure world in */
	mode = el_implemented(2) ? MODE_EL2 : MODE_EL1;

	/*
	 * TODO: Consider the possibility of specifying the SPSR in
	 * the FIP ToC and allowing the platform to have a say as
	 * well.
	 */
	spsr = SPSR_64(mode, MODE_SP_ELX, DISABLE_ALL_EXCEPTIONS);
	return spsr;
}

/*******************************************************************************
 * This function can be used by the platforms to update/use image
 * information for given `image_id`.
 ******************************************************************************/
int bl2_plat_handle_post_image_load(unsigned int image_id)
{
	int err = 0;
	bl_mem_params_node_t *bl_mem_params = get_bl_mem_params_node(image_id);

	bl_mem_params_node_t *pager_mem_params;
	bl_mem_params_node_t *paged_mem_params = NULL;

	assert(bl_mem_params != NULL);

	switch (image_id) {
	case BL32_IMAGE_ID:
		pager_mem_params = get_bl_mem_params_node(BL32_EXTRA1_IMAGE_ID);
		assert(pager_mem_params);

		paged_mem_params = get_bl_mem_params_node(BL32_EXTRA2_IMAGE_ID);
		assert(paged_mem_params);

		err = parse_optee_header(&bl_mem_params->ep_info,
				&pager_mem_params->image_info,
				&paged_mem_params->image_info);
		if (err != 0) {
			WARN("OPTEE header parse error.\n");
		}

		/*
		 * When ATF loads the DTB the address of the DTB is passed in
		 * arg2, if an hw config image is present use the base address
		 * as DTB address an pass it as arg2
		 */
		bl_mem_params->ep_info.args.arg0 = bl_mem_params->ep_info.args.arg1;
		bl_mem_params->ep_info.args.arg1 = 0;
		bl_mem_params->ep_info.args.arg2 = 0;
		bl_mem_params->ep_info.args.arg3 = 0;

		bl_mem_params->ep_info.spsr = ma35d1_get_spsr_for_bl32_entry();

		break;

	case BL33_IMAGE_ID:
		/* BL33 expects to receive the primary CPU MPID (through r0) */
		bl_mem_params->ep_info.args.arg0 = 0xffff & read_mpidr();
		bl_mem_params->ep_info.spsr = ma35d1_get_spsr_for_bl33_entry();
		break;

	case SCP_BL2_IMAGE_ID:
		/* The subsequent handling of SCP_BL2 is platform specific */
		err = plat_ma35d1_bl2_handle_scp_bl2(&bl_mem_params->image_info);
		if (err) {
			WARN("Failure in platform-specific handling of SCP_BL2 image.\n");
		}
		break;

	default:
		/* Do nothing in default case */
		break;
	}

	return err;
}


