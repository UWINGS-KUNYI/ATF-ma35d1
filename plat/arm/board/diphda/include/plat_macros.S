/*
 * Copyright (c) 2021, ARM Limited and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */
#ifndef PLAT_MACROS_S
#define PLAT_MACROS_S

#include <css_macros.S>

/* ---------------------------------------------
 * The below required platform porting macro
 * prints out relevant platform registers
 * whenever an unhandled exception is taken in
 * BL31.
 * ---------------------------------------------
 */
	.macro plat_crash_print_regs
	css_print_gic_regs
	.endm

#endif /* PLAT_MACROS_S */
