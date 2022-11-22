/*
 * Copyright (c) 2020, Nuvoton Technology Corp. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef __SSPCC_H__
#define __SSPCC_H__

#define PDMA0_TZS	0	16	0
#define PDMA0_TZNS	0	16	1
#define PDMA1_TZS	0	18	0
#define PDMA1_TZNS	0	18	1
#define PDMA2_TZNS	0	20	1
#define PDMA2_SUBM	0	20	3
#define PDMA3_TZNS	0	22	1
#define PDMA3_SUBM	0	22	3

#define EBI_TZNS	4	0	1
#define EBI_SUBM	4	0	3
#define SDH0_TZS	4	16	0
#define SDH0_TZNS	4	16	1
#define SDH1_TZS	4	18	0
#define SDH1_TZNS	4	18	1
#define NAND_TZS	4	20	0
#define NAND_TZNS	4	20	1

#define HSUSBD_TZS	8	0	0
#define HSUSBD_TZNS	8	0	1
#define MCAN0_TZNS	8	24	1
#define MCAN0_SUBM	8	24	3
#define MCAN1_TZNS	8	28	1
#define MCAN1_SUBM	8	28	3

#define CRYPTO_TZS	12	0	0
#define CRYPTO_TZNS	12	0	1
#define MCAN2_TZNS	12	24	1
#define MCAN2_SUBM	12	24	3
#define MCAN3_TZNS	12	28	1
#define MCAN3_SUBM	12	28	3

#define ADC0_TZNS	16	4	1
#define ADC0_SUBM	16	4	3
#define EADC_TZNS	16	6	1
#define EADC_SUBM	16	6	3
#define WDTWWDT1_TZS	16	8	0
#define WDTWWDT1_TZNS	16	8	1
#define I2S0_TZNS	16	16	1
#define I2S0_SUBM	16	16	3
#define I2S1_TZNS	16	18	1
#define I2S1_SUBM	16	18	3
#define KPI_TZNS	16	20	1
#define KPI_SUBM	16	20	3
#define DDRPHY_TZS	16	24	0
#define DDRPHY_TZNS	16	24	1
#define MCTL_TZS	16	26	0
#define MCTL_TZNS	16	26	1

#define TIMER01_TZS	20	0	0
#define TIMER01_TZNS	20	0	1
#define TIMER23_TZNS	20	2	1
#define TIMER23_SUBM	20	2	3
#define TIMER45_TZNS	20	4	1
#define TIMER45_SUBM	20	4	3
#define TIMER67_TZNS	20	6	1
#define TIMER67_SUBM	20	6	3
#define TIMER89_TZNS	20	8	1
#define TIMER89_SUBM	20	8	3
#define TIMER1011_TZNS	20	10	1
#define TIMER1011_SUBM	20	10	3
#define EPWM0_TZNS	20	16	1
#define EPWM0_SUBM	20	16	3
#define EPWM1_TZNS	20	18	1
#define EPWM1_SUBM	20	18	3
#define EPWM2_TZNS	20	20	1
#define EPWM3_SUBM	20	20	3

#define SPI0_TZNS	24	0	1
#define SPI0_SUBM	24	0	3
#define SPI1_TZNS	24	2	1
#define SPI1_SUBM	24	2	3
#define SPI2_TZNS	24	4	1
#define SPI2_SUBM	24	4	3
#define SPI3_TZNS	24	6	1
#define SPI3_SUBM	24	6	3
#define QSPI0_TZS	24	16	0
#define QSPI0_TZNS	24	16	1
#define QSPI1_TZNS	24	18	1
#define QSPI1_SUBM	24	18	3

#define UART0_TZS	28	0	0
#define UART0_TZNS	28	0	1
#define UART1_TZNS	28	2	1
#define UART1_SUBM	28	2	3
#define UART2_TZNS	28	4	1
#define UART2_SUBM	28	4	3
#define UART3_TZNS	28	6	1
#define UART3_SUBM	28	6	3
#define UART4_TZNS	28	8	1
#define UART4_SUBM	28	8	3
#define UART5_TZNS	28	10	1
#define UART5_SUBM	28	10	3
#define UART6_TZNS	28	12	1
#define UART6_SUBM	28	12	3
#define UART7_TZNS	28	14	1
#define UART7_SUBM	28	14	3
#define UART8_TZNS	28	16	1
#define UART8_SUBM	28	16	3
#define UART9_TZNS	28	18	1
#define UART9_SUBM	28	18	3
#define UART10_TZNS	28	20	1
#define UART10_SUBM	28	20	3
#define UART11_TZNS	28	22	1
#define UART11_SUBM	28	22	3
#define UART12_TZNS	28	24	1
#define UART12_SUBM	28	24	3
#define UART13_TZNS	28	26	1
#define UART13_SUBM	28	26	3
#define UART14_TZNS	28	28	1
#define UART14_SUBM	28	28	3
#define UART15_TZNS	28	30	1
#define UART15_SUBM	28	30	3

#define I2C0_TZS	32	0	0
#define I2C0_TZNS	32	0	1
#define I2C1_TZNS	32	2	1
#define I2C1_SUBM	32	2	3
#define I2C2_TZNS	32	4	1
#define I2C2_SUBM	32	4	3
#define I2C3_TZNS	32	6	1
#define I2C3_SUBM	32	6	3
#define I2C4_TZNS	32	8	1
#define I2C4_SUBM	32	8	3
#define I2C5_TZNS	32	10	1
#define I2C5_SUBM	32	10	3
#define UART16_TZNS	32	16	1
#define UART16_SUBM	32	16	3

#define SC0_TZNS	36	0	1
#define SC0_SUBM	36	0	3
#define SC1_TZNS	36	2	1
#define SC1_SUBM	36	2	3

#define QEI0_TZNS	44	0	1
#define QEI0_SUBM	44	0	3
#define QEI1_TZNS	44	2	1
#define QEI1_SUBM	44	2	3
#define QEI2_TZNS	44	4	1
#define QEI2_SUBM	44	4	3
#define ECAP0_TZNS	44	8	1
#define ECAP0_SUBM	44	8	3
#define ECAP1_TZNS	44	10	1
#define ECAP1_SUBM	44	10	3
#define ECAP2_TZNS	44	12	1
#define ECAP2_SUBM	44	12	3
#define TRNG_TZS	44	18	0
#define TRNG_TZNS	44	18	1

#define EBI0_NS		80	0	1
#define EBI0_SUBM	80	0	3
#define EBI1_NS		80	2	1
#define EBI1_SUBM	80	2	3
#define EBI2_NS		80	4	1
#define EBI2_SUBM	80	4	3

#define PA0_S		96	0	0
#define PA0_NS		96	0	1
#define PA0_SUBM	96	0	3
#define PA1_S		96	2	0
#define PA1_NS		96	2	1
#define PA1_SUBM	96	2	3
#define PA2_S		96	4	0
#define PA2_NS		96	4	1
#define PA2_SUBM	96	4	3
#define PA3_S		96	6	0
#define PA3_NS		96	6	1
#define PA3_SUBM	96	6	3
#define PA4_S		96	8	0
#define PA4_NS		96	8	1
#define PA4_SUBM	96	8	3
#define PA5_S		96	10	0
#define PA5_NS		96	10	1
#define PA5_SUBM	96	10	3
#define PA6_S		96	12	0
#define PA6_NS		96	12	1
#define PA6_SUBM	96	12	3
#define PA7_S		96	14	0
#define PA7_NS		96	14	1
#define PA7_SUBM	96	14	3
#define PA8_S		96	16	0
#define PA8_NS		96	16	1
#define PA8_SUBM	96	16	3
#define PA9_S		96	18	0
#define PA9_NS		96	18	1
#define PA9_SUBM	96	18	3
#define PA10_S		96	20	0
#define PA10_NS		96	20	1
#define PA10_SUBM	96	20	3
#define PA11_S		96	22	0
#define PA11_NS		96	22	1
#define PA11_SUBM	96	22	3
#define PA12_S		96	24	0
#define PA12_NS		96	24	1
#define PA12_SUBM	96	24	3
#define PA13_S		96	26	0
#define PA13_NS		96	26	1
#define PA13_SUBM	96	26	3
#define PA14_S		96	28	0
#define PA14_NS		96	28	1
#define PA14_SUBM	96	28	3
#define PA15_S		96	30	0
#define PA15_NS		96	30	1
#define PA15_SUBM	96	30	3

#define PB0_S		100	0	0
#define PB0_NS		100	0	1
#define PB0_SUBM	100	0	3
#define PB1_S		100	2	0
#define PB1_NS		100	2	1
#define PB1_SUBM	100	2	3
#define PB2_S		100	4	0
#define PB2_NS		100	4	1
#define PB2_SUBM	100	4	3
#define PB3_S		100	6	0
#define PB3_NS		100	6	1
#define PB3_SUBM	100	6	3
#define PB4_S		100	8	0
#define PB4_NS		100	8	1
#define PB4_SUBM	100	8	3
#define PB5_S		100	10	0
#define PB5_NS		100	10	1
#define PB5_SUBM	100	10	3
#define PB6_S		100	12	0
#define PB6_NS		100	12	1
#define PB6_SUBM	100	12	3
#define PB7_S		100	14	0
#define PB7_NS		100	14	1
#define PB7_SUBM	100	14	3
#define PB8_S		100	16	0
#define PB8_NS		100	16	1
#define PB8_SUBM	100	16	3
#define PB9_S		100	18	0
#define PB9_NS		100	18	1
#define PB9_SUBM	100	18	3
#define PB10_S		100	20	0
#define PB10_NS		100	20	1
#define PB10_SUBM	100	20	3
#define PB11_S		100	22	0
#define PB11_NS		100	22	1
#define PB11_SUBM	100	22	3
#define PB12_S		100	24	0
#define PB12_NS		100	24	1
#define PB12_SUBM	100	24	3
#define PB13_S		100	26	0
#define PB13_NS		100	26	1
#define PB13_SUBM	100	26	3
#define PB14_S		100	28	0
#define PB14_NS		100	28	1
#define PB14_SUBM	100	28	3
#define PB15_S		100	30	0
#define PB15_NS		100	30	1
#define PB15_SUBM	100	30	3

#define PC0_S		104	0	0
#define PC0_NS		104	0	1
#define PC0_SUBM	104	0	3
#define PC1_S		104	2	0
#define PC1_NS		104	2	1
#define PC1_SUBM	104	2	3
#define PC2_S		104	4	0
#define PC2_NS		104	4	1
#define PC2_SUBM	104	4	3
#define PC3_S		104	6	0
#define PC3_NS		104	6	1
#define PC3_SUBM	104	6	3
#define PC4_S		104	8	0
#define PC4_NS		104	8	1
#define PC4_SUBM	104	8	3
#define PC5_S		104	10	0
#define PC5_NS		104	10	1
#define PC5_SUBM	104	10	3
#define PC6_S		104	12	0
#define PC6_NS		104	12	1
#define PC6_SUBM	104	12	3
#define PC7_S		104	14	0
#define PC7_NS		104	14	1
#define PC7_SUBM	104	14	3
#define PC8_S		104	16	0
#define PC8_NS		104	16	1
#define PC8_SUBM	104	16	3
#define PC9_S		104	18	0
#define PC9_NS		104	18	1
#define PC9_SUBM	104	18	3
#define PC10_S		104	20	0
#define PC10_NS		104	20	1
#define PC10_SUBM	104	20	3
#define PC11_S		104	22	0
#define PC11_NS		104	22	1
#define PC11_SUBM	104	22	3
#define PC12_S		104	24	0
#define PC12_NS		104	24	1
#define PC12_SUBM	104	24	3
#define PC13_S		104	26	0
#define PC13_NS		104	26	1
#define PC13_SUBM	104	26	3
#define PC14_S		104	28	0
#define PC14_NS		104	28	1
#define PC14_SUBM	104	28	3
#define PC15_S		104	30	0
#define PC15_NS		104	30	1
#define PC15_SUBM	104	30	3

#define PD0_S		108	0	0
#define PD0_NS		108	0	1
#define PD0_SUBM	108	0	3
#define PD1_S		108	2	0
#define PD1_NS		108	2	1
#define PD1_SUBM	108	2	3
#define PD2_S		108	4	0
#define PD2_NS		108	4	1
#define PD2_SUBM	108	4	3
#define PD3_S		108	6	0
#define PD3_NS		108	6	1
#define PD3_SUBM	108	6	3
#define PD4_S		108	8	0
#define PD4_NS		108	8	1
#define PD4_SUBM	108	8	3
#define PD5_S		108	10	0
#define PD5_NS		108	10	1
#define PD5_SUBM	108	10	3
#define PD6_S		108	12	0
#define PD6_NS		108	12	1
#define PD6_SUBM	108	12	3
#define PD7_S		108	14	0
#define PD7_NS		108	14	1
#define PD7_SUBM	108	14	3
#define PD8_S		108	16	0
#define PD8_NS		108	16	1
#define PD8_SUBM	108	16	3
#define PD9_S		108	18	0
#define PD9_NS		108	18	1
#define PD9_SUBM	108	18	3
#define PD10_S		108	20	0
#define PD10_NS		108	20	1
#define PD10_SUBM	108	20	3
#define PD11_S		108	22	0
#define PD11_NS		108	22	1
#define PD11_SUBM	108	22	3
#define PD12_S		108	24	0
#define PD12_NS		108	24	1
#define PD12_SUBM	108	24	3
#define PD13_S		108	26	0
#define PD13_NS		108	26	1
#define PD13_SUBM	108	26	3
#define PD14_S		108	28	0
#define PD14_NS		108	28	1
#define PD14_SUBM	108	28	3
#define PD15_S		108	30	0
#define PD15_NS		108	30	1
#define PD15_SUBM	108	30	3

#define PE0_S		112	0	0
#define PE0_NS		112	0	1
#define PE0_SUBM	112	0	3
#define PE1_S		112	2	0
#define PE1_NS		112	2	1
#define PE1_SUBM	112	2	3
#define PE2_S		112	4	0
#define PE2_NS		112	4	1
#define PE2_SUBM	112	4	3
#define PE3_S		112	6	0
#define PE3_NS		112	6	1
#define PE3_SUBM	112	6	3
#define PE4_S		112	8	0
#define PE4_NS		112	8	1
#define PE4_SUBM	112	8	3
#define PE5_S		112	10	0
#define PE5_NS		112	10	1
#define PE5_SUBM	112	10	3
#define PE6_S		112	12	0
#define PE6_NS		112	12	1
#define PE6_SUBM	112	12	3
#define PE7_S		112	14	0
#define PE7_NS		112	14	1
#define PE7_SUBM	112	14	3
#define PE8_S		112	16	0
#define PE8_NS		112	16	1
#define PE8_SUBM	112	16	3
#define PE9_S		112	18	0
#define PE9_NS		112	18	1
#define PE9_SUBM	112	18	3
#define PE10_S		112	20	0
#define PE10_NS		112	20	1
#define PE10_SUBM	112	20	3
#define PE11_S		112	22	0
#define PE11_NS		112	22	1
#define PE11_SUBM	112	22	3
#define PE12_S		112	24	0
#define PE12_NS		112	24	1
#define PE12_SUBM	112	24	3
#define PE13_S		112	26	0
#define PE13_NS		112	26	1
#define PE13_SUBM	112	26	3
#define PE14_S		112	28	0
#define PE14_NS		112	28	1
#define PE14_SUBM	112	28	3
#define PE15_S		112	30	0
#define PE15_NS		112	30	1
#define PE15_SUBM	112	30	3

#define PF0_S		116	0	0
#define PF0_NS		116	0	1
#define PF0_SUBM	116	0	3
#define PF1_S		116	2	0
#define PF1_NS		116	2	1
#define PF1_SUBM	116	2	3
#define PF2_S		116	4	0
#define PF2_NS		116	4	1
#define PF2_SUBM	116	4	3
#define PF3_S		116	6	0
#define PF3_NS		116	6	1
#define PF3_SUBM	116	6	3
#define PF4_S		116	8	0
#define PF4_NS		116	8	1
#define PF4_SUBM	116	8	3
#define PF5_S		116	10	0
#define PF5_NS		116	10	1
#define PF5_SUBM	116	10	3
#define PF6_S		116	12	0
#define PF6_NS		116	12	1
#define PF6_SUBM	116	12	3
#define PF7_S		116	14	0
#define PF7_NS		116	14	1
#define PF7_SUBM	116	14	3
#define PF8_S		116	16	0
#define PF8_NS		116	16	1
#define PF8_SUBM	116	16	3
#define PF9_S		116	18	0
#define PF9_NS		116	18	1
#define PF9_SUBM	116	18	3
#define PF10_S		116	20	0
#define PF10_NS		116	20	1
#define PF10_SUBM	116	20	3
#define PF11_S		116	22	0
#define PF11_NS		116	22	1
#define PF11_SUBM	116	22	3
#define PF12_S		116	24	0
#define PF12_NS		116	24	1
#define PF12_SUBM	116	24	3
#define PF13_S		116	26	0
#define PF13_NS		116	26	1
#define PF13_SUBM	116	26	3
#define PF14_S		116	28	0
#define PF14_NS		116	28	1
#define PF14_SUBM	116	28	3
#define PF15_S		116	30	0
#define PF15_NS		116	30	1
#define PF15_SUBM	116	30	3

#define PG0_S		120	0	0
#define PG0_NS		120	0	1
#define PG0_SUBM	120	0	3
#define PG1_S		120	2	0
#define PG1_NS		120	2	1
#define PG1_SUBM	120	2	3
#define PG2_S		120	4	0
#define PG2_NS		120	4	1
#define PG2_SUBM	120	4	3
#define PG3_S		120	6	0
#define PG3_NS		120	6	1
#define PG3_SUBM	120	6	3
#define PG4_S		120	8	0
#define PG4_NS		120	8	1
#define PG4_SUBM	120	8	3
#define PG5_S		120	10	0
#define PG5_NS		120	10	1
#define PG5_SUBM	120	10	3
#define PG6_S		120	12	0
#define PG6_NS		120	12	1
#define PG6_SUBM	120	12	3
#define PG7_S		120	14	0
#define PG7_NS		120	14	1
#define PG7_SUBM	120	14	3
#define PG8_S		120	16	0
#define PG8_NS		120	16	1
#define PG8_SUBM	120	16	3
#define PG9_S		120	18	0
#define PG9_NS		120	18	1
#define PG9_SUBM	120	18	3
#define PG10_S		120	20	0
#define PG10_NS		120	20	1
#define PG10_SUBM	120	20	3
#define PG11_S		120	22	0
#define PG11_NS		120	22	1
#define PG11_SUBM	120	22	3
#define PG12_S		120	24	0
#define PG12_NS		120	24	1
#define PG12_SUBM	120	24	3
#define PG13_S		120	26	0
#define PG13_NS		120	26	1
#define PG13_SUBM	120	26	3
#define PG14_S		120	28	0
#define PG14_NS		120	28	1
#define PG14_SUBM	120	28	3
#define PG15_S		120	30	0
#define PG15_NS		120	30	1
#define PG15_SUBM	120	30	3

#define PH0_S		124	0	0
#define PH0_NS		124	0	1
#define PH0_SUBM	124	0	3
#define PH1_S		124	2	0
#define PH1_NS		124	2	1
#define PH1_SUBM	124	2	3
#define PH2_S		124	4	0
#define PH2_NS		124	4	1
#define PH2_SUBM	124	4	3
#define PH3_S		124	6	0
#define PH3_NS		124	6	1
#define PH3_SUBM	124	6	3
#define PH4_S		124	8	0
#define PH4_NS		124	8	1
#define PH4_SUBM	124	8	3
#define PH5_S		124	10	0
#define PH5_NS		124	10	1
#define PH5_SUBM	124	10	3
#define PH6_S		124	12	0
#define PH6_NS		124	12	1
#define PH6_SUBM	124	12	3
#define PH7_S		124	14	0
#define PH7_NS		124	14	1
#define PH7_SUBM	124	14	3
#define PH8_S		124	16	0
#define PH8_NS		124	16	1
#define PH8_SUBM	124	16	3
#define PH9_S		124	18	0
#define PH9_NS		124	18	1
#define PH9_SUBM	124	18	3
#define PH10_S		124	20	0
#define PH10_NS		124	20	1
#define PH10_SUBM	124	20	3
#define PH11_S		124	22	0
#define PH11_NS		124	22	1
#define PH11_SUBM	124	22	3
#define PH12_S		124	24	0
#define PH12_NS		124	24	1
#define PH12_SUBM	124	24	3
#define PH13_S		124	26	0
#define PH13_NS		124	26	1
#define PH13_SUBM	124	26	3
#define PH14_S		124	28	0
#define PH14_NS		124	28	1
#define PH14_SUBM	124	28	3
#define PH15_S		124	30	0
#define PH15_NS		124	30	1
#define PH15_SUBM	124	30	3

#define PI0_S		128	0	0
#define PI0_NS		128	0	1
#define PI0_SUBM	128	0	3
#define PI1_S		128	2	0
#define PI1_NS		128	2	1
#define PI1_SUBM	128	2	3
#define PI2_S		128	4	0
#define PI2_NS		128	4	1
#define PI2_SUBM	128	4	3
#define PI3_S		128	6	0
#define PI3_NS		128	6	1
#define PI3_SUBM	128	6	3
#define PI4_S		128	8	0
#define PI4_NS		128	8	1
#define PI4_SUBM	128	8	3
#define PI5_S		128	10	0
#define PI5_NS		128	10	1
#define PI5_SUBM	128	10	3
#define PI6_S		128	12	0
#define PI6_NS		128	12	1
#define PI6_SUBM	128	12	3
#define PI7_S		128	14	0
#define PI7_NS		128	14	1
#define PI7_SUBM	128	14	3
#define PI8_S		128	16	0
#define PI8_NS		128	16	1
#define PI8_SUBM	128	16	3
#define PI9_S		128	18	0
#define PI9_NS		128	18	1
#define PI9_SUBM	128	18	3
#define PI10_S		128	20	0
#define PI10_NS		128	20	1
#define PI10_SUBM	128	20	3
#define PI11_S		128	22	0
#define PI11_NS		128	22	1
#define PI11_SUBM	128	22	3
#define PI12_S		128	24	0
#define PI12_NS		128	24	1
#define PI12_SUBM	128	24	3
#define PI13_S		128	26	0
#define PI13_NS		128	26	1
#define PI13_SUBM	128	26	3
#define PI14_S		128	28	0
#define PI14_NS		128	28	1
#define PI14_SUBM	128	28	3
#define PI15_S		128	30	0
#define PI15_NS		128	30	1
#define PI15_SUBM	128	30	3

#define PJ0_S		132	0	0
#define PJ0_NS		132	0	1
#define PJ0_SUBM	132	0	3
#define PJ1_S		132	2	0
#define PJ1_NS		132	2	1
#define PJ1_SUBM	132	2	3
#define PJ2_S		132	4	0
#define PJ2_NS		132	4	1
#define PJ2_SUBM	132	4	3
#define PJ3_S		132	6	0
#define PJ3_NS		132	6	1
#define PJ3_SUBM	132	6	3
#define PJ4_S		132	8	0
#define PJ4_NS		132	8	1
#define PJ4_SUBM	132	8	3
#define PJ5_S		132	10	0
#define PJ5_NS		132	10	1
#define PJ5_SUBM	132	10	3
#define PJ6_S		132	12	0
#define PJ6_NS		132	12	1
#define PJ6_SUBM	132	12	3
#define PJ7_S		132	14	0
#define PJ7_NS		132	14	1
#define PJ7_SUBM	132	14	3
#define PJ8_S		132	16	0
#define PJ8_NS		132	16	1
#define PJ8_SUBM	132	16	3
#define PJ9_S		132	18	0
#define PJ9_NS		132	18	1
#define PJ9_SUBM	132	18	3
#define PJ10_S		132	20	0
#define PJ10_NS		132	20	1
#define PJ10_SUBM	132	20	3
#define PJ11_S		132	22	0
#define PJ11_NS		132	22	1
#define PJ11_SUBM	132	22	3
#define PJ12_S		132	24	0
#define PJ12_NS		132	24	1
#define PJ12_SUBM	132	24	3
#define PJ13_S		132	26	0
#define PJ13_NS		132	26	1
#define PJ13_SUBM	132	26	3
#define PJ14_S		132	28	0
#define PJ14_NS		132	28	1
#define PJ14_SUBM	132	28	3
#define PJ15_S		132	30	0
#define PJ15_NS		132	30	1
#define PJ15_SUBM	132	30	3

#define PK0_S		136	0	0
#define PK0_NS		136	0	1
#define PK0_SUBM	136	0	3
#define PK1_S		136	2	0
#define PK1_NS		136	2	1
#define PK1_SUBM	136	2	3
#define PK2_S		136	4	0
#define PK2_NS		136	4	1
#define PK2_SUBM	136	4	3
#define PK3_S		136	6	0
#define PK3_NS		136	6	1
#define PK3_SUBM	136	6	3
#define PK4_S		136	8	0
#define PK4_NS		136	8	1
#define PK4_SUBM	136	8	3
#define PK5_S		136	10	0
#define PK5_NS		136	10	1
#define PK5_SUBM	136	10	3
#define PK6_S		136	12	0
#define PK6_NS		136	12	1
#define PK6_SUBM	136	12	3
#define PK7_S		136	14	0
#define PK7_NS		136	14	1
#define PK7_SUBM	136	14	3
#define PK8_S		136	16	0
#define PK8_NS		136	16	1
#define PK8_SUBM	136	16	3
#define PK9_S		136	18	0
#define PK9_NS		136	18	1
#define PK9_SUBM	136	18	3
#define PK10_S		136	20	0
#define PK10_NS		136	20	1
#define PK10_SUBM	136	20	3
#define PK11_S		136	22	0
#define PK11_NS		136	22	1
#define PK11_SUBM	136	22	3
#define PK12_S		136	24	0
#define PK12_NS		136	24	1
#define PK12_SUBM	136	24	3
#define PK13_S		136	26	0
#define PK13_NS		136	26	1
#define PK13_SUBM	136	26	3
#define PK14_S		136	28	0
#define PK14_NS		136	28	1
#define PK14_SUBM	136	28	3
#define PK15_S		136	30	0
#define PK15_NS		136	30	1
#define PK15_SUBM	136	30	3

#define PL0_S		140	0	0
#define PL0_NS		140	0	1
#define PL0_SUBM	140	0	3
#define PL1_S		140	2	0
#define PL1_NS		140	2	1
#define PL1_SUBM	140	2	3
#define PL2_S		140	4	0
#define PL2_NS		140	4	1
#define PL2_SUBM	140	4	3
#define PL3_S		140	6	0
#define PL3_NS		140	6	1
#define PL3_SUBM	140	6	3
#define PL4_S		140	8	0
#define PL4_NS		140	8	1
#define PL4_SUBM	140	8	3
#define PL5_S		140	10	0
#define PL5_NS		140	10	1
#define PL5_SUBM	140	10	3
#define PL6_S		140	12	0
#define PL6_NS		140	12	1
#define PL6_SUBM	140	12	3
#define PL7_S		140	14	0
#define PL7_NS		140	14	1
#define PL7_SUBM	140	14	3
#define PL8_S		140	16	0
#define PL8_NS		140	16	1
#define PL8_SUBM	140	16	3
#define PL9_S		140	18	0
#define PL9_NS		140	18	1
#define PL9_SUBM	140	18	3
#define PL10_S		140	20	0
#define PL10_NS		140	20	1
#define PL10_SUBM	140	20	3
#define PL11_S		140	22	0
#define PL11_NS		140	22	1
#define PL11_SUBM	140	22	3
#define PL12_S		140	24	0
#define PL12_NS		140	24	1
#define PL12_SUBM	140	24	3
#define PL13_S		140	26	0
#define PL13_NS		140	26	1
#define PL13_SUBM	140	26	3
#define PL14_S		140	28	0
#define PL14_NS		140	28	1
#define PL14_SUBM	140	28	3
#define PL15_S		140	30	0
#define PL15_NS		140	30	1
#define PL15_SUBM	140	30	3

#define PM0_S		144	0	0
#define PM0_NS		144	0	1
#define PM0_SUBM	144	0	3
#define PM1_S		144	2	0
#define PM1_NS		144	2	1
#define PM1_SUBM	144	2	3
#define PM2_S		144	4	0
#define PM2_NS		144	4	1
#define PM2_SUBM	144	4	3
#define PM3_S		144	6	0
#define PM3_NS		144	6	1
#define PM3_SUBM	144	6	3
#define PM4_S		144	8	0
#define PM4_NS		144	8	1
#define PM4_SUBM	144	8	3
#define PM5_S		144	10	0
#define PM5_NS		144	10	1
#define PM5_SUBM	144	10	3
#define PM6_S		144	12	0
#define PM6_NS		144	12	1
#define PM6_SUBM	144	12	3
#define PM7_S		144	14	0
#define PM7_NS		144	14	1
#define PM7_SUBM	144	14	3
#define PM8_S		144	16	0
#define PM8_NS		144	16	1
#define PM8_SUBM	144	16	3
#define PM9_S		144	18	0
#define PM9_NS		144	18	1
#define PM9_SUBM	144	18	3
#define PM10_S		144	20	0
#define PM10_NS		144	20	1
#define PM10_SUBM	144	20	3
#define PM11_S		144	22	0
#define PM11_NS		144	22	1
#define PM11_SUBM	144	22	3
#define PM12_S		144	24	0
#define PM12_NS		144	24	1
#define PM12_SUBM	144	24	3
#define PM13_S		144	26	0
#define PM13_NS		144	26	1
#define PM13_SUBM	144	26	3
#define PM14_S		144	28	0
#define PM14_NS		144	28	1
#define PM14_SUBM	144	28	3
#define PM15_S		144	30	0
#define PM15_NS		144	30	1
#define PM15_SUBM	144	30	3

#define PN0_S		148	0	0
#define PN0_NS		148	0	1
#define PN0_SUBM	148	0	3
#define PN1_S		148	2	0
#define PN1_NS		148	2	1
#define PN1_SUBM	148	2	3
#define PN2_S		148	4	0
#define PN2_NS		148	4	1
#define PN2_SUBM	148	4	3
#define PN3_S		148	6	0
#define PN3_NS		148	6	1
#define PN3_SUBM	148	6	3
#define PN4_S		148	8	0
#define PN4_NS		148	8	1
#define PN4_SUBM	148	8	3
#define PN5_S		148	10	0
#define PN5_NS		148	10	1
#define PN5_SUBM	148	10	3
#define PN6_S		148	12	0
#define PN6_NS		148	12	1
#define PN6_SUBM	148	12	3
#define PN7_S		148	14	0
#define PN7_NS		148	14	1
#define PN7_SUBM	148	14	3
#define PN8_S		148	16	0
#define PN8_NS		148	16	1
#define PN8_SUBM	148	16	3
#define PN9_S		148	18	0
#define PN9_NS		148	18	1
#define PN9_SUBM	148	18	3
#define PN10_S		148	20	0
#define PN10_NS		148	20	1
#define PN10_SUBM	148	20	3
#define PN11_S		148	22	0
#define PN11_NS		148	22	1
#define PN11_SUBM	148	22	3
#define PN12_S		148	24	0
#define PN12_NS		148	24	1
#define PN12_SUBM	148	24	3
#define PN13_S		148	26	0
#define PN13_NS		148	26	1
#define PN13_SUBM	148	26	3
#define PN14_S		148	28	0
#define PN14_NS		148	28	1
#define PN14_SUBM	148	28	3
#define PN15_S		148	30	0
#define PN15_NS		148	30	1
#define PN15_SUBM	148	30	3

#endif // __SSPCC_H__
