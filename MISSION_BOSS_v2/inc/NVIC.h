/**************************************************************************************************
 *  Universidad Nacional Autónoma de México (UNAM)
 *  Facultad de Ingeniería | Departamento de Electrónica
 * 
 *  Autor:          M.I. Christo Aldair Lara Tenorio
 * 
 *  Descripción:    Sistema que simula al MISSION BOSS para pruebas funcionales de integración del
 *                  GuaraniSat-2. 
 * 
 *  Archivo:        Archivo de cabecera del módulo NVIC
 * 
 *  Tarjeta de desarrollo:  EK-TM4C1294XL Evaluation board
 ***********************************************/


#ifndef NVIC_H                                                                                      /*  Verificar si NVIC_H no ha sido definido previamente */
#define NVIC_H                                                                                      /*  Definir NVIC_H para evitar inclusiones múltiples del mismo archivo */


/**************************************************************************************************
 *  Archivos de cabecera
 */

#include <stdint.h>                                                                                 /*  Tipos enteros con tamaños fijos */


/**************************************************************************************************
 *  Definiciones y macros
 *  Nested Vectored Interrupt Controller (NVIC) registers                                               pp.146      Register map
 */

    /** Interrupt Set Enable (EN) */
#define NVIC_EN0_R                  (*((volatile uint32_t *)0xE000E100))                            /*  pp.154      Interrupt 0-31 Set Enable */
#define NVIC_EN1_R                  (*((volatile uint32_t *)0xE000E104))                            /*  pp.154      Interrupt 32-63 Set Enable */
#define NVIC_EN2_R                  (*((volatile uint32_t *)0xE000E108))                            /*  pp.154      Interrupt 64-95 Set Enable */
#define NVIC_EN3_R                  (*((volatile uint32_t *)0xE000E10C))                            /*  pp.154      Interrupt 96-113 Set Enable */

    /** Interrupt Clear Enable (DIS) */
#define NVIC_DIS0_R                 (*((volatile uint32_t *)0xE000E180))                            /*  pp.155      Interrupt 0-31 Clear Enable */
#define NVIC_DIS1_R                 (*((volatile uint32_t *)0xE000E184))                            /*  pp.155      Interrupt 32-63 Clear Enable */
#define NVIC_DIS2_R                 (*((volatile uint32_t *)0xE000E188))                            /*  pp.155      Interrupt 64-95 Clear Enable */
#define NVIC_DIS3_R                 (*((volatile uint32_t *)0xE000E18C))                            /*  pp.155      Interrupt 96-113 Clear Enable */

    /** Interrupt Set Pending (PEN) */
#define NVIC_PEND0_R                (*((volatile uint32_t *)0xE000E200))                            /*  pp.156      Interrupt 0-31 Set Pending */
#define NVIC_PEND1_R                (*((volatile uint32_t *)0xE000E204))                            /*  pp.156      Interrupt 32-63 Set Pending */
#define NVIC_PEND2_R                (*((volatile uint32_t *)0xE000E208))                            /*  pp.156      Interrupt 64-95 Set Pending */
#define NVIC_PEND3_R                (*((volatile uint32_t *)0xE000E20C))                            /*  pp.156      Interrupt 96-113 Set Pending */

    /** Interrupt Set Clear Pending (UNPEND) */
#define NVIC_UNPEND0_R              (*((volatile uint32_t *)0xE000E280))                            /*  pp.157      Interrupt 0-31 Clear Pending */
#define NVIC_UNPEND1_R              (*((volatile uint32_t *)0xE000E284))                            /*  pp.157      Interrupt 32-63 Clear Pending */
#define NVIC_UNPEND2_R              (*((volatile uint32_t *)0xE000E288))                            /*  pp.157      Interrupt 64-95 Clear Pending */
#define NVIC_UNPEND3_R              (*((volatile uint32_t *)0xE000E28C))                            /*  pp.157      Interrupt 96-113 Clear Pending */

    /** Interrupt Active Bit (ACTIVE) */
#define NVIC_ACTIVE0_R              (*((volatile uint32_t *)0xE000E300))                            /*  pp.158      Interrupt 0-31 Active Bit */
#define NVIC_ACTIVE1_R              (*((volatile uint32_t *)0xE000E304))                            /*  pp.158      Interrupt 32-63 Active Bit */
#define NVIC_ACTIVE2_R              (*((volatile uint32_t *)0xE000E308))                            /*  pp.158      Interrupt 64-95 Active Bit */
#define NVIC_ACTIVE3_R              (*((volatile uint32_t *)0xE000E30C))                            /*  pp.158      Interrupt 96-127 Active Bit */

    /** Interrupt Priority (PRI) */
#define NVIC_PRI0_R                 (*((volatile uint32_t *)0xE000E400))                            /*  pp.159      Interrupt 0-3 Priority */
#define NVIC_PRI1_R                 (*((volatile uint32_t *)0xE000E404))                            /*  pp.159      Interrupt 4-7 Priority */
#define NVIC_PRI2_R                 (*((volatile uint32_t *)0xE000E408))                            /*  pp.159      Interrupt 8-11 Priority */
#define NVIC_PRI3_R                 (*((volatile uint32_t *)0xE000E40C))                            /*  pp.159      Interrupt 12-15 Priority */
#define NVIC_PRI4_R                 (*((volatile uint32_t *)0xE000E410))                            /*  pp.159      Interrupt 16-19 Priority */
#define NVIC_PRI5_R                 (*((volatile uint32_t *)0xE000E414))                            /*  pp.159      Interrupt 20-23 Priority */
#define NVIC_PRI6_R                 (*((volatile uint32_t *)0xE000E418))                            /*  pp.159      Interrupt 24-27 Priority */
#define NVIC_PRI7_R                 (*((volatile uint32_t *)0xE000E41C))                            /*  pp.159      Interrupt 28-31 Priority */
#define NVIC_PRI8_R                 (*((volatile uint32_t *)0xE000E420))                            /*  pp.159      Interrupt 32-35 Priority */
#define NVIC_PRI9_R                 (*((volatile uint32_t *)0xE000E424))                            /*  pp.159      Interrupt 36-39 Priority */
#define NVIC_PRI10_R                (*((volatile uint32_t *)0xE000E428))                            /*  pp.159      Interrupt 40-43 Priority */
#define NVIC_PRI11_R                (*((volatile uint32_t *)0xE000E42C))                            /*  pp.159      Interrupt 44-47 Priority */
#define NVIC_PRI12_R                (*((volatile uint32_t *)0xE000E430))                            /*  pp.159      Interrupt 48-51 Priority */
#define NVIC_PRI13_R                (*((volatile uint32_t *)0xE000E434))                            /*  pp.159      Interrupt 52-55 Priority */
#define NVIC_PRI14_R                (*((volatile uint32_t *)0xE000E438))                            /*  pp.159      Interrupt 56-59 Priority */
#define NVIC_PRI15_R                (*((volatile uint32_t *)0xE000E43C))                            /*  pp.159      Interrupt 60-63 Priority */
#define NVIC_PRI16_R                (*((volatile uint32_t *)0xE000E440))                            /*  pp.161      Interrupt 64-67 Priority */
#define NVIC_PRI17_R                (*((volatile uint32_t *)0xE000E444))                            /*  pp.161      Interrupt 68-71 Priority */
#define NVIC_PRI18_R                (*((volatile uint32_t *)0xE000E448))                            /*  pp.161      Interrupt 72-75 Priority */
#define NVIC_PRI19_R                (*((volatile uint32_t *)0xE000E44C))                            /*  pp.161      Interrupt 76-79 Priority */
#define NVIC_PRI20_R                (*((volatile uint32_t *)0xE000E450))                            /*  pp.161      Interrupt 80-83 Priority */
#define NVIC_PRI21_R                (*((volatile uint32_t *)0xE000E454))                            /*  pp.161      Interrupt 84-87 Priority */
#define NVIC_PRI22_R                (*((volatile uint32_t *)0xE000E458))                            /*  pp.161      Interrupt 88-91 Priority */
#define NVIC_PRI23_R                (*((volatile uint32_t *)0xE000E45C))                            /*  pp.161      Interrupt 92-95 Priority */
#define NVIC_PRI24_R                (*((volatile uint32_t *)0xE000E460))                            /*  pp.161      Interrupt 96-99 Priority */
#define NVIC_PRI25_R                (*((volatile uint32_t *)0xE000E464))                            /*  pp.161      Interrupt 100-103 Priority */
#define NVIC_PRI26_R                (*((volatile uint32_t *)0xE000E468))                            /*  pp.161      Interrupt 104-107 Priority */
#define NVIC_PRI27_R                (*((volatile uint32_t *)0xE000E46C))                            /*  pp.161      Interrupt 108-111 Priority */
#define NVIC_PRI28_R                (*((volatile uint32_t *)0xE000E470))                            /*  pp.161      Interrupt 112-113 Priority */

    /** Software Trigger Interrupt (SWTRIG) */
#define NVIC_SW_TRIG_R              (*((volatile uint32_t *)0xE000EF00))                            /*  pp.163      Software Trigger Interrupt */


/**************************************************************************************************
 *  Macros de campos de configuración                                                                   pp.146      Register map
 */

    /** Bit fields in the NVIC_EN0 register                                                             pp.154 */
#define NVIC_EN0_INT_M              0xFFFFFFFF                                                      /*  Interrupt Enable mask */

    /** Bit fields in the NVIC_EN1 register                                                             pp.154 */
#define NVIC_EN1_INT_M              0xFFFFFFFF                                                      /*  Interrupt Enable mask */

    /** Bit fields in the NVIC_EN2 register                                                             pp.154 */
#define NVIC_EN2_INT_M              0xFFFFFFFF                                                      /*  Interrupt Enable mask */

    /** Bit fields in the NVIC_EN3 register                                                             pp.154 */
#define NVIC_EN3_INT_M              0xFFFFFFFF                                                      /*  Interrupt Enable mask */

    /** Bit fields in the NVIC_DIS0 register                                                            pp.155 */
#define NVIC_DIS0_INT_M             0xFFFFFFFF                                                      /*  Interrupt Disable mask */

    /** Bit fields in the NVIC_DIS1 register                                                            pp.155 */
#define NVIC_DIS1_INT_M             0xFFFFFFFF                                                      /*  Interrupt Disable mask */

    /** Bit fields in the NVIC_DIS2 register                                                            pp.155 */
#define NVIC_DIS2_INT_M             0xFFFFFFFF                                                      /*  Interrupt Disable mask */

    /** Bit fields in the NVIC_DIS3 register                                                            pp.155 */
#define NVIC_DIS3_INT_M             0xFFFFFFFF                                                      /*  Interrupt Disable mask */

    /** Bit fields in the NVIC_PEND0 register                                                           pp.156 */
#define NVIC_PEND0_INT_M            0xFFFFFFFF                                                      /*  Interrupt Set Pending mask */

    /** Bit fields in the NVIC_PEND1 register                                                           pp.156 */
#define NVIC_PEND1_INT_M            0xFFFFFFFF                                                      /*  Interrupt Set Pending mask */

    /** Bit fields in the NVIC_PEND2 register                                                           pp.156 */
#define NVIC_PEND2_INT_M            0xFFFFFFFF                                                      /*  Interrupt Set Pending mask */

    /** Bit fields in the NVIC_PEND3 register                                                           pp.156 */
#define NVIC_PEND3_INT_M            0xFFFFFFFF                                                      /*  Interrupt Set Pending mask */

    /** Bit fields in the NVIC_UNPEND0 register                                                         pp.157 */
#define NVIC_UNPEND0_INT_M          0xFFFFFFFF                                                      /*  Interrupt Clear Pending mask */

    /** Bit fields in the NVIC_UNPEND1 register                                                         pp.157 */
#define NVIC_UNPEND1_INT_M          0xFFFFFFFF                                                      /*  Interrupt Clear Pending mask */

    /** Bit fields in the NVIC_UNPEND2 register                                                         pp.157 */
#define NVIC_UNPEND2_INT_M          0xFFFFFFFF                                                      /*  Interrupt Clear Pending mask */

    /** Bit fields in the NVIC_UNPEND3 register                                                         pp.157 */
#define NVIC_UNPEND3_INT_M          0xFFFFFFFF                                                      /*  Interrupt Clear Pending mask */

    /** Bit fields in the NVIC_ACTIVE0 register                                                         pp.158 */
#define NVIC_ACTIVE0_INT_M          0xFFFFFFFF                                                      /*  Interrupt Active mask */

    /** Bit fields in the NVIC_ACTIVE1 register                                                         pp.158 */
#define NVIC_ACTIVE1_INT_M          0xFFFFFFFF                                                      /*  Interrupt Active mask */

    /** Bit fields in the NVIC_ACTIVE2 register                                                         pp.158 */
#define NVIC_ACTIVE2_INT_M          0xFFFFFFFF                                                      /*  Interrupt Active mask */

    /** Bit fields in the NVIC_ACTIVE3 register                                                         pp.158 */
#define NVIC_ACTIVE3_INT_M          0xFFFFFFFF                                                      /*  Interrupt Active mask */

    /** Bit fields in the NVIC_PRI0 register                                                            pp.159 */
#define NVIC_PRI0_INT3_M            0xE0000000                                                      /*  Interrupt 3 Priority mask */
#define NVIC_PRI0_INT2_M            0x00E00000                                                      /*  Interrupt 2 Priority mask */
#define NVIC_PRI0_INT1_M            0x0000E000                                                      /*  Interrupt 1 Priority mask */
#define NVIC_PRI0_INT0_M            0x000000E0                                                      /*  Interrupt 0 Priority mask */
#define NVIC_PRI0_INT3_S            29                                                              /*  Interrupt 3 Priority shift */
#define NVIC_PRI0_INT2_S            21                                                              /*  Interrupt 2 Priority shift */
#define NVIC_PRI0_INT1_S            13                                                              /*  Interrupt 1 Priority shift */
#define NVIC_PRI0_INT0_S            5                                                               /*  Interrupt 0 Priority shift */

    /** Bit fields in the NVIC_PRI1 register                                                            pp.159 */
#define NVIC_PRI1_INT7_M            0xE0000000                                                      /*  Interrupt 7 Priority mask */
#define NVIC_PRI1_INT6_M            0x00E00000                                                      /*  Interrupt 6 Priority mask */
#define NVIC_PRI1_INT5_M            0x0000E000                                                      /*  Interrupt 5 Priority mask */
#define NVIC_PRI1_INT4_M            0x000000E0                                                      /*  Interrupt 4 Priority mask */
#define NVIC_PRI1_INT7_S            29                                                              /*  Interrupt 7 Priority shift */
#define NVIC_PRI1_INT6_S            21                                                              /*  Interrupt 6 Priority shift */
#define NVIC_PRI1_INT5_S            13                                                              /*  Interrupt 5 Priority shift */
#define NVIC_PRI1_INT4_S            5                                                               /*  Interrupt 4 Priority shift */

    /** Bit fields in the NVIC_PRI2 register                                                            pp.159 */
#define NVIC_PRI2_INT11_M           0xE0000000                                                      /*  Interrupt 11 Priority mask */
#define NVIC_PRI2_INT10_M           0x00E00000                                                      /*  Interrupt 10 Priority mask */
#define NVIC_PRI2_INT9_M            0x0000E000                                                      /*  Interrupt 9 Priority mask */
#define NVIC_PRI2_INT8_M            0x000000E0                                                      /*  Interrupt 8 Priority mask */
#define NVIC_PRI2_INT11_S           29                                                              /*  Interrupt 11 Priority shift */
#define NVIC_PRI2_INT10_S           21                                                              /*  Interrupt 10 Priority shift */
#define NVIC_PRI2_INT9_S            13                                                              /*  Interrupt 9 Priority shift */
#define NVIC_PRI2_INT8_S            5                                                               /*  Interrupt 8 Priority shift */

    /** Bit fields in the NVIC_PRI3 register                                                            pp.159 */
#define NVIC_PRI3_INT15_M           0xE0000000                                                      /*  Interrupt 15 Priority mask */
#define NVIC_PRI3_INT14_M           0x00E00000                                                      /*  Interrupt 14 Priority mask */
#define NVIC_PRI3_INT13_M           0x0000E000                                                      /*  Interrupt 13 Priority mask */
#define NVIC_PRI3_INT12_M           0x000000E0                                                      /*  Interrupt 12 Priority mask */
#define NVIC_PRI3_INT15_S           29                                                              /*  Interrupt 15 Priority shift */
#define NVIC_PRI3_INT14_S           21                                                              /*  Interrupt 14 Priority shift */
#define NVIC_PRI3_INT13_S           13                                                              /*  Interrupt 13 Priority shift */
#define NVIC_PRI3_INT12_S           5                                                               /*  Interrupt 12 Priority shift */

    /** Bit fields in the NVIC_PRI4 register                                                            pp.159 */
#define NVIC_PRI4_INT19_M           0xE0000000                                                      /*  Interrupt 19 Priority mask */
#define NVIC_PRI4_INT18_M           0x00E00000                                                      /*  Interrupt 18 Priority mask */
#define NVIC_PRI4_INT17_M           0x0000E000                                                      /*  Interrupt 17 Priority mask */
#define NVIC_PRI4_INT16_M           0x000000E0                                                      /*  Interrupt 16 Priority mask */
#define NVIC_PRI4_INT19_S           29                                                              /*  Interrupt 19 Priority shift */
#define NVIC_PRI4_INT18_S           21                                                              /*  Interrupt 18 Priority shift */
#define NVIC_PRI4_INT17_S           13                                                              /*  Interrupt 17 Priority shift */
#define NVIC_PRI4_INT16_S           5                                                               /*  Interrupt 16 Priority shift */

    /** Bit fields in the NVIC_PRI5 register                                                            pp.159 */
#define NVIC_PRI5_INT23_M           0xE0000000                                                      /*  Interrupt 23 Priority mask */
#define NVIC_PRI5_INT22_M           0x00E00000                                                      /*  Interrupt 22 Priority mask */
#define NVIC_PRI5_INT21_M           0x0000E000                                                      /*  Interrupt 21 Priority mask */
#define NVIC_PRI5_INT20_M           0x000000E0                                                      /*  Interrupt 20 Priority mask */
#define NVIC_PRI5_INT23_S           29                                                              /*  Interrupt 23 Priority shift */
#define NVIC_PRI5_INT22_S           21                                                              /*  Interrupt 22 Priority shift */
#define NVIC_PRI5_INT21_S           13                                                              /*  Interrupt 21 Priority shift */
#define NVIC_PRI5_INT20_S           5                                                               /*  Interrupt 20 Priority shift */

    /** Bit fields in the NVIC_PRI6 register                                                            pp.159 */
#define NVIC_PRI6_INT27_M           0xE0000000                                                      /*  Interrupt 27 Priority mask */
#define NVIC_PRI6_INT26_M           0x00E00000                                                      /*  Interrupt 26 Priority mask */
#define NVIC_PRI6_INT25_M           0x0000E000                                                      /*  Interrupt 25 Priority mask */
#define NVIC_PRI6_INT24_M           0x000000E0                                                      /*  Interrupt 24 Priority mask */
#define NVIC_PRI6_INT27_S           29                                                              /*  Interrupt 27 Priority shift */
#define NVIC_PRI6_INT26_S           21                                                              /*  Interrupt 26 Priority shift */
#define NVIC_PRI6_INT25_S           13                                                              /*  Interrupt 25 Priority shift */
#define NVIC_PRI6_INT24_S           5                                                               /*  Interrupt 24 Priority shift */

    /** Bit fields in the NVIC_PRI7 register                                                            pp.159 */
#define NVIC_PRI7_INT31_M           0xE0000000                                                      /*  Interrupt 31 Priority mask */
#define NVIC_PRI7_INT30_M           0x00E00000                                                      /*  Interrupt 30 Priority mask */
#define NVIC_PRI7_INT29_M           0x0000E000                                                      /*  Interrupt 29 Priority mask */
#define NVIC_PRI7_INT28_M           0x000000E0                                                      /*  Interrupt 28 Priority mask */
#define NVIC_PRI7_INT31_S           29                                                              /*  Interrupt 31 Priority shift */
#define NVIC_PRI7_INT30_S           21                                                              /*  Interrupt 30 Priority shift */
#define NVIC_PRI7_INT29_S           13                                                              /*  Interrupt 29 Priority shift */
#define NVIC_PRI7_INT28_S           5                                                               /*  Interrupt 28 Priority shift */

    /** Bit fields in the NVIC_PRI8 register                                                            pp.159 */
#define NVIC_PRI8_INT35_M           0xE0000000                                                      /*  Interrupt 35 Priority mask */
#define NVIC_PRI8_INT34_M           0x00E00000                                                      /*  Interrupt 34 Priority mask */
#define NVIC_PRI8_INT33_M           0x0000E000                                                      /*  Interrupt 33 Priority mask */
#define NVIC_PRI8_INT32_M           0x000000E0                                                      /*  Interrupt 32 Priority mask */
#define NVIC_PRI8_INT35_S           29                                                              /*  Interrupt 35 Priority shift */
#define NVIC_PRI8_INT34_S           21                                                              /*  Interrupt 34 Priority shift */
#define NVIC_PRI8_INT33_S           13                                                              /*  Interrupt 33 Priority shift */
#define NVIC_PRI8_INT32_S           5                                                               /*  Interrupt 32 Priority shift */

    /** Bit fields in the NVIC_PRI9 register                                                            pp.159 */
#define NVIC_PRI9_INT39_M           0xE0000000                                                      /*  Interrupt 39 Priority mask */
#define NVIC_PRI9_INT38_M           0x00E00000                                                      /*  Interrupt 38 Priority mask */
#define NVIC_PRI9_INT37_M           0x0000E000                                                      /*  Interrupt 37 Priority mask */
#define NVIC_PRI9_INT36_M           0x000000E0                                                      /*  Interrupt 36 Priority mask */
#define NVIC_PRI9_INT39_S           29                                                              /*  Interrupt 39 Priority shift */
#define NVIC_PRI9_INT38_S           21                                                              /*  Interrupt 38 Priority shift */
#define NVIC_PRI9_INT37_S           13                                                              /*  Interrupt 37 Priority shift */
#define NVIC_PRI9_INT36_S           5                                                               /*  Interrupt 36 Priority shift */

    /** Bit fields in the NVIC_PRI10 register                                                           pp.159 */
#define NVIC_PRI10_INT43_M          0xE0000000                                                      /*  Interrupt 43 Priority mask */
#define NVIC_PRI10_INT42_M          0x00E00000                                                      /*  Interrupt 42 Priority mask */
#define NVIC_PRI10_INT41_M          0x0000E000                                                      /*  Interrupt 41 Priority mask */
#define NVIC_PRI10_INT40_M          0x000000E0                                                      /*  Interrupt 40 Priority mask */
#define NVIC_PRI10_INT43_S          29                                                              /*  Interrupt 43 Priority shift */
#define NVIC_PRI10_INT42_S          21                                                              /*  Interrupt 42 Priority shift */
#define NVIC_PRI10_INT41_S          13                                                              /*  Interrupt 41 Priority shift */
#define NVIC_PRI10_INT40_S          5                                                               /*  Interrupt 40 Priority shift */

    /** Bit fields in the NVIC_PRI11 register                                                           pp.159 */
#define NVIC_PRI11_INT47_M          0xE0000000                                                      /*  Interrupt 47 Priority mask */
#define NVIC_PRI11_INT46_M          0x00E00000                                                      /*  Interrupt 46 Priority mask */
#define NVIC_PRI11_INT45_M          0x0000E000                                                      /*  Interrupt 45 Priority mask */
#define NVIC_PRI11_INT44_M          0x000000E0                                                      /*  Interrupt 44 Priority mask */
#define NVIC_PRI11_INT47_S          29                                                              /*  Interrupt 47 Priority shift */
#define NVIC_PRI11_INT46_S          21                                                              /*  Interrupt 46 Priority shift */
#define NVIC_PRI11_INT45_S          13                                                              /*  Interrupt 45 Priority shift */
#define NVIC_PRI11_INT44_S          5                                                               /*  Interrupt 44 Priority shift */

    /** Bit fields in the NVIC_PRI12 register                                                           pp.159 */
#define NVIC_PRI12_INT51_M          0xE0000000                                                      /*  Interrupt 51 Priority mask */
#define NVIC_PRI12_INT50_M          0x00E00000                                                      /*  Interrupt 50 Priority mask */
#define NVIC_PRI12_INT49_M          0x0000E000                                                      /*  Interrupt 49 Priority mask */
#define NVIC_PRI12_INT48_M          0x000000E0                                                      /*  Interrupt 48 Priority mask */
#define NVIC_PRI12_INT51_S          29                                                              /*  Interrupt 51 Priority shift */
#define NVIC_PRI12_INT50_S          21                                                              /*  Interrupt 50 Priority shift */
#define NVIC_PRI12_INT49_S          13                                                              /*  Interrupt 49 Priority shift */
#define NVIC_PRI12_INT48_S          5                                                               /*  Interrupt 48 Priority shift */

    /** Bit fields in the NVIC_PRI13 register                                                           pp.159 */
#define NVIC_PRI13_INT55_M          0xE0000000                                                      /*  Interrupt 55 Priority mask */
#define NVIC_PRI13_INT54_M          0x00E00000                                                      /*  Interrupt 54 Priority mask */
#define NVIC_PRI13_INT53_M          0x0000E000                                                      /*  Interrupt 53 Priority mask */
#define NVIC_PRI13_INT52_M          0x000000E0                                                      /*  Interrupt 52 Priority mask */
#define NVIC_PRI13_INT55_S          29                                                              /*  Interrupt 55 Priority shift */
#define NVIC_PRI13_INT54_S          21                                                              /*  Interrupt 54 Priority shift */
#define NVIC_PRI13_INT53_S          13                                                              /*  Interrupt 53 Priority shift */
#define NVIC_PRI13_INT52_S          5                                                               /*  Interrupt 52 Priority shift */

    /** Bit fields in the NVIC_PRI14 register                                                           pp.159 */
#define NVIC_PRI14_INTD_M           0xE0000000                                                      /*  Interrupt 59 Priority mask */
#define NVIC_PRI14_INTC_M           0x00E00000                                                      /*  Interrupt 58 Priority mask */
#define NVIC_PRI14_INTB_M           0x0000E000                                                      /*  Interrupt 57 Priority mask */
#define NVIC_PRI14_INTA_M           0x000000E0                                                      /*  Interrupt 56 Priority mask */
#define NVIC_PRI14_INTD_S           29                                                              /*  Interrupt 59 Priority shift */
#define NVIC_PRI14_INTC_S           21                                                              /*  Interrupt 58 Priority shift */
#define NVIC_PRI14_INTB_S           13                                                              /*  Interrupt 57 Priority shift */
#define NVIC_PRI14_INTA_S           5                                                               /*  Interrupt 56 Priority shift */

    /** Bit fields in the NVIC_PRI15 register                                                           pp.159 */
#define NVIC_PRI15_INTD_M           0xE0000000                                                      /*  Interrupt 63 Priority mask */
#define NVIC_PRI15_INTC_M           0x00E00000                                                      /*  Interrupt 62 Priority mask */
#define NVIC_PRI15_INTB_M           0x0000E000                                                      /*  Interrupt 61 Priority mask */
#define NVIC_PRI15_INTA_M           0x000000E0                                                      /*  Interrupt 60 Priority mask */
#define NVIC_PRI15_INTD_S           29                                                              /*  Interrupt 63 Priority shift */
#define NVIC_PRI15_INTC_S           21                                                              /*  Interrupt 62 Priority shift */
#define NVIC_PRI15_INTB_S           13                                                              /*  Interrupt 61 Priority shift */
#define NVIC_PRI15_INTA_S           5                                                               /*  Interrupt 60 Priority shift */

    /** Bit fields in the NVIC_PRI16 register                                                           pp.161 */
#define NVIC_PRI16_INTD_M           0xE0000000                                                      /*  Interrupt 67 Priority mask */
#define NVIC_PRI16_INTC_M           0x00E00000                                                      /*  Interrupt 66 Priority mask */
#define NVIC_PRI16_INTB_M           0x0000E000                                                      /*  Interrupt 65 Priority mask */
#define NVIC_PRI16_INTA_M           0x000000E0                                                      /*  Interrupt 64 Priority mask */
#define NVIC_PRI16_INTD_S           29                                                              /*  Interrupt 67 Priority shift */
#define NVIC_PRI16_INTC_S           21                                                              /*  Interrupt 66 Priority shift */
#define NVIC_PRI16_INTB_S           13                                                              /*  Interrupt 65 Priority shift */
#define NVIC_PRI16_INTA_S           5                                                               /*  Interrupt 64 Priority shift */

    /** Bit fields in the NVIC_PRI17 register                                                           pp.161 */
#define NVIC_PRI17_INTD_M           0xE0000000                                                      /*  Interrupt 71 Priority mask */
#define NVIC_PRI17_INTC_M           0x00E00000                                                      /*  Interrupt 70 Priority mask */
#define NVIC_PRI17_INTB_M           0x0000E000                                                      /*  Interrupt 69 Priority mask */
#define NVIC_PRI17_INTA_M           0x000000E0                                                      /*  Interrupt 68 Priority mask */
#define NVIC_PRI17_INTD_S           29                                                              /*  Interrupt 71 Priority shift */
#define NVIC_PRI17_INTC_S           21                                                              /*  Interrupt 70 Priority shift */
#define NVIC_PRI17_INTB_S           13                                                              /*  Interrupt 69 Priority shift */
#define NVIC_PRI17_INTA_S           5                                                               /*  Interrupt 68 Priority shift */

    /** Bit fields in the NVIC_PRI18 register                                                           pp.161 */
#define NVIC_PRI18_INTD_M           0xE0000000                                                      /*  Interrupt 75 Priority mask */
#define NVIC_PRI18_INTC_M           0x00E00000                                                      /*  Interrupt 74 Priority mask */
#define NVIC_PRI18_INTB_M           0x0000E000                                                      /*  Interrupt 73 Priority mask */
#define NVIC_PRI18_INTA_M           0x000000E0                                                      /*  Interrupt 72 Priority mask */
#define NVIC_PRI18_INTD_S           29                                                              /*  Interrupt 75 Priority shift */
#define NVIC_PRI18_INTC_S           21                                                              /*  Interrupt 74 Priority shift */
#define NVIC_PRI18_INTB_S           13                                                              /*  Interrupt 73 Priority shift */
#define NVIC_PRI18_INTA_S           5                                                               /*  Interrupt 72 Priority shift */

    /** Bit fields in the NVIC_PRI19 register                                                           pp.161 */
#define NVIC_PRI19_INTD_M           0xE0000000                                                      /*  Interrupt 79 Priority mask */
#define NVIC_PRI19_INTC_M           0x00E00000                                                      /*  Interrupt 78 Priority mask */
#define NVIC_PRI19_INTB_M           0x0000E000                                                      /*  Interrupt 77 Priority mask */
#define NVIC_PRI19_INTA_M           0x000000E0                                                      /*  Interrupt 76 Priority mask */
#define NVIC_PRI19_INTD_S           29                                                              /*  Interrupt 79 Priority shift */
#define NVIC_PRI19_INTC_S           21                                                              /*  Interrupt 78 Priority shift */
#define NVIC_PRI19_INTB_S           13                                                              /*  Interrupt 77 Priority shift */
#define NVIC_PRI19_INTA_S           5                                                               /*  Interrupt 76 Priority shift */

    /** Bit fields in the NVIC_PRI20 register                                                           pp.161 */
#define NVIC_PRI20_INTD_M           0xE0000000                                                      /*  Interrupt 83 Priority mask */
#define NVIC_PRI20_INTC_M           0x00E00000                                                      /*  Interrupt 82 Priority mask */
#define NVIC_PRI20_INTB_M           0x0000E000                                                      /*  Interrupt 81 Priority mask */
#define NVIC_PRI20_INTA_M           0x000000E0                                                      /*  Interrupt 80 Priority mask */
#define NVIC_PRI20_INTD_S           29                                                              /*  Interrupt 83 Priority shift */
#define NVIC_PRI20_INTC_S           21                                                              /*  Interrupt 82 Priority shift */
#define NVIC_PRI20_INTB_S           13                                                              /*  Interrupt 81 Priority shift */
#define NVIC_PRI20_INTA_S           5                                                               /*  Interrupt 80 Priority shift */

    /** Bit fields in the NVIC_PRI21 register                                                           pp.161 */
#define NVIC_PRI21_INTD_M           0xE0000000                                                      /*  Interrupt 87 Priority mask */
#define NVIC_PRI21_INTC_M           0x00E00000                                                      /*  Interrupt 86 Priority mask */
#define NVIC_PRI21_INTB_M           0x0000E000                                                      /*  Interrupt 85 Priority mask */
#define NVIC_PRI21_INTA_M           0x000000E0                                                      /*  Interrupt 84 Priority mask */
#define NVIC_PRI21_INTD_S           29                                                              /*  Interrupt 87 Priority shift */
#define NVIC_PRI21_INTC_S           21                                                              /*  Interrupt 86 Priority shift */
#define NVIC_PRI21_INTB_S           13                                                              /*  Interrupt 85 Priority shift */
#define NVIC_PRI21_INTA_S           5                                                               /*  Interrupt 84 Priority shift */

    /** Bit fields in the NVIC_PRI22 register                                                           pp.161 */
#define NVIC_PRI22_INTD_M           0xE0000000                                                      /*  Interrupt 91 Priority mask */
#define NVIC_PRI22_INTC_M           0x00E00000                                                      /*  Interrupt 90 Priority mask */
#define NVIC_PRI22_INTB_M           0x0000E000                                                      /*  Interrupt 89 Priority mask */
#define NVIC_PRI22_INTA_M           0x000000E0                                                      /*  Interrupt 88 Priority mask */
#define NVIC_PRI22_INTD_S           29                                                              /*  Interrupt 91 Priority shift */
#define NVIC_PRI22_INTC_S           21                                                              /*  Interrupt 90 Priority shift */
#define NVIC_PRI22_INTB_S           13                                                              /*  Interrupt 89 Priority shift */
#define NVIC_PRI22_INTA_S           5                                                               /*  Interrupt 88 Priority shift */

    /** Bit fields in the NVIC_PRI23 register                                                           pp.161 */
#define NVIC_PRI23_INTD_M           0xE0000000                                                      /*  Interrupt 95 Priority mask */
#define NVIC_PRI23_INTC_M           0x00E00000                                                      /*  Interrupt 94 Priority mask */
#define NVIC_PRI23_INTB_M           0x0000E000                                                      /*  Interrupt 93 Priority mask */
#define NVIC_PRI23_INTA_M           0x000000E0                                                      /*  Interrupt 92 Priority mask */
#define NVIC_PRI23_INTD_S           29                                                              /*  Interrupt 95 Priority shift */
#define NVIC_PRI23_INTC_S           21                                                              /*  Interrupt 94 Priority shift */
#define NVIC_PRI23_INTB_S           13                                                              /*  Interrupt 93 Priority shift */
#define NVIC_PRI23_INTA_S           5                                                               /*  Interrupt 92 Priority shift */

    /** Bit fields in the NVIC_PRI24 register                                                           pp.161 */
#define NVIC_PRI24_INTD_M           0xE0000000                                                      /*  Interrupt 99 Priority mask */
#define NVIC_PRI24_INTC_M           0x00E00000                                                      /*  Interrupt 98 Priority mask */
#define NVIC_PRI24_INTB_M           0x0000E000                                                      /*  Interrupt 97 Priority mask */
#define NVIC_PRI24_INTA_M           0x000000E0                                                      /*  Interrupt 96 Priority mask */
#define NVIC_PRI24_INTD_S           29                                                              /*  Interrupt 99 Priority shift */
#define NVIC_PRI24_INTC_S           21                                                              /*  Interrupt 98 Priority shift */
#define NVIC_PRI24_INTB_S           13                                                              /*  Interrupt 97 Priority shift */
#define NVIC_PRI24_INTA_S           5                                                               /*  Interrupt 96 Priority shift */

    /** Bit fields in the NVIC_PRI25 register                                                           pp.161 */
#define NVIC_PRI25_INTD_M           0xE0000000                                                      /*  Interrupt 103 Priority mask */
#define NVIC_PRI25_INTC_M           0x00E00000                                                      /*  Interrupt 102 Priority mask */
#define NVIC_PRI25_INTB_M           0x0000E000                                                      /*  Interrupt 101 Priority mask */
#define NVIC_PRI25_INTA_M           0x000000E0                                                      /*  Interrupt 100 Priority mask */
#define NVIC_PRI25_INTD_S           29                                                              /*  Interrupt 103 Priority shift */
#define NVIC_PRI25_INTC_S           21                                                              /*  Interrupt 102 Priority shift */
#define NVIC_PRI25_INTB_S           13                                                              /*  Interrupt 101 Priority shift */
#define NVIC_PRI25_INTA_S           5                                                               /*  Interrupt 100 Priority shift */

    /** Bit fields in the NVIC_PRI26 register                                                           pp.161 */
#define NVIC_PRI26_INTD_M           0xE0000000                                                      /*  Interrupt 107 Priority mask */
#define NVIC_PRI26_INTC_M           0x00E00000                                                      /*  Interrupt 106 Priority mask */
#define NVIC_PRI26_INTB_M           0x0000E000                                                      /*  Interrupt 105 Priority mask */
#define NVIC_PRI26_INTA_M           0x000000E0                                                      /*  Interrupt 104 Priority mask */
#define NVIC_PRI26_INTD_S           29                                                              /*  Interrupt 107 Priority shift */
#define NVIC_PRI26_INTC_S           21                                                              /*  Interrupt 106 Priority shift */
#define NVIC_PRI26_INTB_S           13                                                              /*  Interrupt 105 Priority shift */
#define NVIC_PRI26_INTA_S           5                                                               /*  Interrupt 104 Priority shift */

    /** Bit fields in the NVIC_PRI27 register                                                           pp.161 */
#define NVIC_PRI27_INTD_M           0xE0000000                                                      /*  Interrupt 111 Priority mask */
#define NVIC_PRI27_INTC_M           0x00E00000                                                      /*  Interrupt 110 Priority mask */
#define NVIC_PRI27_INTB_M           0x0000E000                                                      /*  Interrupt 109 Priority mask */
#define NVIC_PRI27_INTA_M           0x000000E0                                                      /*  Interrupt 108 Priority mask */
#define NVIC_PRI27_INTD_S           29                                                              /*  Interrupt 111 Priority shift */
#define NVIC_PRI27_INTC_S           21                                                              /*  Interrupt 110 Priority shift */
#define NVIC_PRI27_INTB_S           13                                                              /*  Interrupt 109 Priority shift */
#define NVIC_PRI27_INTA_S           5                                                               /*  Interrupt 108 Priority shift */

    /** Bit fields in the NVIC_PRI28 register                                                           pp.161 */
#define NVIC_PRI28_INTD_M           0xE0000000                                                      /*  Interrupt 115 Priority mask */
#define NVIC_PRI28_INTC_M           0x00E00000                                                      /*  Interrupt 114 Priority mask */
#define NVIC_PRI28_INTB_M           0x0000E000                                                      /*  Interrupt 113 Priority mask */
#define NVIC_PRI28_INTA_M           0x000000E0                                                      /*  Interrupt 112 Priority mask */
#define NVIC_PRI28_INTD_S           29                                                              /*  Interrupt 115 Priority shift */
#define NVIC_PRI28_INTC_S           21                                                              /*  Interrupt 114 Priority shift */
#define NVIC_PRI28_INTB_S           13                                                              /*  Interrupt 113 Priority shift */
#define NVIC_PRI28_INTA_S           5                                                               /*  Interrupt 112 Priority shift */

    /** Bit fields in the NVIC_SW_TRIG register                                                         pp.163 */
#define NVIC_SW_TRIG_INTID_M        0x000000FF                                                      /*  Interrupt ID mask */
#define NVIC_SW_TRIG_INTID_S        0                                                               /*  Interrupt ID shift */


/**************************************************************************************************
 *  Prototipos de funciones
 */

void UART0_Handler(void);                                                                           /*  Rutina de servicio de interrupción (ISR) del UART0 */
void UART4_Handler(void);                                                                           /*  Rutina de servicio de interrupción (ISR) del UART4 */
void UART7_Handler(void);                                                                           /*  Rutina de servicio de interrupción (ISR) del UART7 */


#endif                                                                                              /*  NVIC_H */
