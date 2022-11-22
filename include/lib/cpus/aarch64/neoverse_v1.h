/*
 * Copyright (c) 2019-2021, ARM Limited. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef NEOVERSE_V1_H
#define NEOVERSE_V1_H

#define NEOVERSE_V1_MIDR					U(0x410FD400)

/*******************************************************************************
 * CPU Extended Control register specific definitions.
 ******************************************************************************/
#define NEOVERSE_V1_CPUECTLR_EL1				S3_0_C15_C1_4
#define NEOVERSE_V1_CPUECTLR_EL1_BIT_8				(ULL(1) << 8)
#define NEOVERSE_V1_CPUECTLR_EL1_BIT_53				(ULL(1) << 53)
#define NEOVERSE_V1_CPUECTLR_EL1_PF_MODE_CNSRV			ULL(3)
#define CPUECTLR_EL1_PF_MODE_LSB				U(6)
#define CPUECTLR_EL1_PF_MODE_WIDTH				U(2)

/*******************************************************************************
 * CPU Power Control register specific definitions
 ******************************************************************************/
#define NEOVERSE_V1_CPUPWRCTLR_EL1				S3_0_C15_C2_7
#define NEOVERSE_V1_CPUPWRCTLR_EL1_CORE_PWRDN_BIT		U(1)

/*******************************************************************************
 * CPU Auxiliary Control register specific definitions.
 ******************************************************************************/
#define NEOVERSE_V1_ACTLR2_EL1					S3_0_C15_C1_1
#define NEOVERSE_V1_ACTLR2_EL1_BIT_2				(ULL(1) << 2)
#define NEOVERSE_V1_ACTLR2_EL1_BIT_28				(ULL(1) << 28)

#endif /* NEOVERSE_V1_H */
