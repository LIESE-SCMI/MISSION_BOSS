/**************************************************************************************************
 *  Universidad Nacional Autónoma de México (UNAM)
 *  Facultad de Ingeniería | Departamento de Electrónica
 * 
 *  Autor:          M.I. Christo Aldair Lara Tenorio
 * 
 *  Descripción:    Sistema que simula al MISSION BOSS para pruebas funcionales de integración del
 *                  GuaraniSat-2. 
 * 
 *  Archivo:        Archivo de cabecera del módulo UART
 * 
 *  Tarjeta de desarrollo:  EK-TM4C1294XL Evaluation board
 ***********************************************/


#ifndef UART_H                                                                                      /*  Verificar si UART_H no ha sido definido previamente */
#define UART_H                                                                                      /*  Definir UART_H para evitar inclusiones múltiples del mismo archivo */


/**************************************************************************************************
 *  Archivos de cabecera
 */

#include <stdint.h>                                                                                 /*  Tipos enteros con tamaños fijos */


/**************************************************************************************************
 *  Macros de apuntadores a registros
 *  Universal Asynchronous Receiver/Transmitter (UART) registers                                        pp.1173     Register map
 */

    /** UART module 0 (UART0) */
#define UART0_DR_R                  (*((volatile uint32_t *)0x4000C000))                            /*  pp.1175     UART Data */
#define UART0_RSR_R                 (*((volatile uint32_t *)0x4000C004))                            /*  pp.1177     UART Receive Status */
#define UART0_ECR_R                 (*((volatile uint32_t *)0x4000C004))                            /*  pp.1177     UART Error Clear */
#define UART0_FR_R                  (*((volatile uint32_t *)0x4000C018))                            /*  pp.1180     UART Flag */
#define UART0_ILPR_R                (*((volatile uint32_t *)0x4000C020))                            /*  pp.1183     UART IrDA Low-Power */
#define UART0_IBRD_R                (*((volatile uint32_t *)0x4000C024))                            /*  pp.1184     UART Integer Baud-Rate Divisor */
#define UART0_FBRD_R                (*((volatile uint32_t *)0x4000C028))                            /*  pp.1185     UART Fractional Baud-Rate Divisor */
#define UART0_LCRH_R                (*((volatile uint32_t *)0x4000C02C))                            /*  pp.1186     UART Line Control */
#define UART0_CTL_R                 (*((volatile uint32_t *)0x4000C030))                            /*  pp.1188     UART Control */
#define UART0_IFLS_R                (*((volatile uint32_t *)0x4000C034))                            /*  pp.1192     UART Interrupt FIFO Level Select */
#define UART0_IM_R                  (*((volatile uint32_t *)0x4000C038))                            /*  pp.1194     UART Interrupt Mask */
#define UART0_RIS_R                 (*((volatile uint32_t *)0x4000C03C))                            /*  pp.1198     UART Raw Interrupt Status */
#define UART0_MIS_R                 (*((volatile uint32_t *)0x4000C040))                            /*  pp.1202     UART Masked Interrupt Status */
#define UART0_ICR_R                 (*((volatile uint32_t *)0x4000C044))                            /*  pp.1206     UART Interrupt Clear */
#define UART0_DMACTL_R              (*((volatile uint32_t *)0x4000C048))                            /*  pp.1208     UART DMA Control */
#define UART0_9BITADDR_R            (*((volatile uint32_t *)0x4000C0A4))                            /*  pp.1209     UART 9-Bit Self Address */
#define UART0_9BITAMASK_R           (*((volatile uint32_t *)0x4000C0A8))                            /*  pp.1210     UART 9-Bit Self Address Mask */
#define UART0_PP_R                  (*((volatile uint32_t *)0x4000CFC0))                            /*  pp.1211     UART Peripheral Properties */
#define UART0_CC_R                  (*((volatile uint32_t *)0x4000CFC8))                            /*  pp.1213     UART Clock Configuration */

    /** UART module 1 (UART1) */
#define UART1_DR_R                  (*((volatile uint32_t *)0x4000D000))                            /*  pp.1175     UART Data */
#define UART1_RSR_R                 (*((volatile uint32_t *)0x4000D004))                            /*  pp.1177     UART Receive Status */
#define UART1_ECR_R                 (*((volatile uint32_t *)0x4000D004))                            /*  pp.1177     UART Error Clear */
#define UART1_FR_R                  (*((volatile uint32_t *)0x4000D018))                            /*  pp.1180     UART Flag */
#define UART1_ILPR_R                (*((volatile uint32_t *)0x4000D020))                            /*  pp.1183     UART IrDA Low-Power */
#define UART1_IBRD_R                (*((volatile uint32_t *)0x4000D024))                            /*  pp.1184     UART Integer Baud-Rate Divisor */
#define UART1_FBRD_R                (*((volatile uint32_t *)0x4000D028))                            /*  pp.1185     UART Fractional Baud-Rate Divisor */
#define UART1_LCRH_R                (*((volatile uint32_t *)0x4000D02C))                            /*  pp.1186     UART Line Control */
#define UART1_CTL_R                 (*((volatile uint32_t *)0x4000D030))                            /*  pp.1188     UART Control */
#define UART1_IFLS_R                (*((volatile uint32_t *)0x4000D034))                            /*  pp.1192     UART Interrupt FIFO Level Select */
#define UART1_IM_R                  (*((volatile uint32_t *)0x4000D038))                            /*  pp.1194     UART Interrupt Mask */
#define UART1_RIS_R                 (*((volatile uint32_t *)0x4000D03C))                            /*  pp.1198     UART Raw Interrupt Status */
#define UART1_MIS_R                 (*((volatile uint32_t *)0x4000D040))                            /*  pp.1202     UART Masked Interrupt Status */
#define UART1_ICR_R                 (*((volatile uint32_t *)0x4000D044))                            /*  pp.1206     UART Interrupt Clear */
#define UART1_DMACTL_R              (*((volatile uint32_t *)0x4000D048))                            /*  pp.1208     UART DMA Control */
#define UART1_9BITADDR_R            (*((volatile uint32_t *)0x4000D0A4))                            /*  pp.1209     UART 9-Bit Self Address */
#define UART1_9BITAMASK_R           (*((volatile uint32_t *)0x4000D0A8))                            /*  pp.1210     UART 9-Bit Self Address Mask */
#define UART1_PP_R                  (*((volatile uint32_t *)0x4000DFC0))                            /*  pp.1211     UART Peripheral Properties */
#define UART1_CC_R                  (*((volatile uint32_t *)0x4000DFC8))                            /*  pp.1213     UART Clock Configuration */

    /** UART module 2 (UART2) */
#define UART2_DR_R                  (*((volatile uint32_t *)0x4000E000))                            /*  pp.1175     UART Data */
#define UART2_RSR_R                 (*((volatile uint32_t *)0x4000E004))                            /*  pp.1177     UART Receive Status */
#define UART2_ECR_R                 (*((volatile uint32_t *)0x4000E004))                            /*  pp.1177     UART Error Clear */
#define UART2_FR_R                  (*((volatile uint32_t *)0x4000E018))                            /*  pp.1180     UART Flag */
#define UART2_ILPR_R                (*((volatile uint32_t *)0x4000E020))                            /*  pp.1183     UART IrDA Low-Power */
#define UART2_IBRD_R                (*((volatile uint32_t *)0x4000E024))                            /*  pp.1184     UART Integer Baud-Rate Divisor */
#define UART2_FBRD_R                (*((volatile uint32_t *)0x4000E028))                            /*  pp.1185     UART Fractional Baud-Rate Divisor */
#define UART2_LCRH_R                (*((volatile uint32_t *)0x4000E02C))                            /*  pp.1186     UART Line Control */
#define UART2_CTL_R                 (*((volatile uint32_t *)0x4000E030))                            /*  pp.1188     UART Control */
#define UART2_IFLS_R                (*((volatile uint32_t *)0x4000E034))                            /*  pp.1192     UART Interrupt FIFO Level Select */
#define UART2_IM_R                  (*((volatile uint32_t *)0x4000E038))                            /*  pp.1194     UART Interrupt Mask */
#define UART2_RIS_R                 (*((volatile uint32_t *)0x4000E03C))                            /*  pp.1198     UART Raw Interrupt Status */
#define UART2_MIS_R                 (*((volatile uint32_t *)0x4000E040))                            /*  pp.1202     UART Masked Interrupt Status */
#define UART2_ICR_R                 (*((volatile uint32_t *)0x4000E044))                            /*  pp.1206     UART Interrupt Clear */
#define UART2_DMACTL_R              (*((volatile uint32_t *)0x4000E048))                            /*  pp.1208     UART DMA Control */
#define UART2_9BITADDR_R            (*((volatile uint32_t *)0x4000E0A4))                            /*  pp.1209     UART 9-Bit Self Address */
#define UART2_9BITAMASK_R           (*((volatile uint32_t *)0x4000E0A8))                            /*  pp.1210     UART 9-Bit Self Address Mask */
#define UART2_PP_R                  (*((volatile uint32_t *)0x4000EFC0))                            /*  pp.1211     UART Peripheral Properties */
#define UART2_CC_R                  (*((volatile uint32_t *)0x4000EFC8))                            /*  pp.1213     UART Clock Configuration */

    /** UART module 3 (UART3) */
#define UART3_DR_R                  (*((volatile uint32_t *)0x4000F000))                            /*  pp.1175     UART Data */
#define UART3_RSR_R                 (*((volatile uint32_t *)0x4000F004))                            /*  pp.1177     UART Receive Status */
#define UART3_ECR_R                 (*((volatile uint32_t *)0x4000F004))                            /*  pp.1177     UART Error Clear */
#define UART3_FR_R                  (*((volatile uint32_t *)0x4000F018))                            /*  pp.1180     UART Flag */
#define UART3_ILPR_R                (*((volatile uint32_t *)0x4000F020))                            /*  pp.1183     UART IrDA Low-Power */
#define UART3_IBRD_R                (*((volatile uint32_t *)0x4000F024))                            /*  pp.1184     UART Integer Baud-Rate Divisor */
#define UART3_FBRD_R                (*((volatile uint32_t *)0x4000F028))                            /*  pp.1185     UART Fractional Baud-Rate Divisor */
#define UART3_LCRH_R                (*((volatile uint32_t *)0x4000F02C))                            /*  pp.1186     UART Line Control */
#define UART3_CTL_R                 (*((volatile uint32_t *)0x4000F030))                            /*  pp.1188     UART Control */
#define UART3_IFLS_R                (*((volatile uint32_t *)0x4000F034))                            /*  pp.1192     UART Interrupt FIFO Level Select */
#define UART3_IM_R                  (*((volatile uint32_t *)0x4000F038))                            /*  pp.1194     UART Interrupt Mask */
#define UART3_RIS_R                 (*((volatile uint32_t *)0x4000F03C))                            /*  pp.1198     UART Raw Interrupt Status */
#define UART3_MIS_R                 (*((volatile uint32_t *)0x4000F040))                            /*  pp.1202     UART Masked Interrupt Status */
#define UART3_ICR_R                 (*((volatile uint32_t *)0x4000F044))                            /*  pp.1206     UART Interrupt Clear */
#define UART3_DMACTL_R              (*((volatile uint32_t *)0x4000F048))                            /*  pp.1208     UART DMA Control */
#define UART3_9BITADDR_R            (*((volatile uint32_t *)0x4000F0A4))                            /*  pp.1209     UART 9-Bit Self Address */
#define UART3_9BITAMASK_R           (*((volatile uint32_t *)0x4000F0A8))                            /*  pp.1210     UART 9-Bit Self Address Mask */
#define UART3_PP_R                  (*((volatile uint32_t *)0x4000FFC0))                            /*  pp.1211     UART Peripheral Properties */
#define UART3_CC_R                  (*((volatile uint32_t *)0x4000FFC8))                            /*  pp.1213     UART Clock Configuration */

    /** UART module 4 (UART4) */
#define UART4_DR_R                  (*((volatile uint32_t *)0x40010000))                            /*  pp.1175     UART Data */
#define UART4_RSR_R                 (*((volatile uint32_t *)0x40010004))                            /*  pp.1177     UART Receive Status */
#define UART4_ECR_R                 (*((volatile uint32_t *)0x40010004))                            /*  pp.1177     UART Error Clear */
#define UART4_FR_R                  (*((volatile uint32_t *)0x40010018))                            /*  pp.1180     UART Flag */
#define UART4_ILPR_R                (*((volatile uint32_t *)0x40010020))                            /*  pp.1183     UART IrDA Low-Power */
#define UART4_IBRD_R                (*((volatile uint32_t *)0x40010024))                            /*  pp.1184     UART Integer Baud-Rate Divisor */
#define UART4_FBRD_R                (*((volatile uint32_t *)0x40010028))                            /*  pp.1185     UART Fractional Baud-Rate Divisor */
#define UART4_LCRH_R                (*((volatile uint32_t *)0x4001002C))                            /*  pp.1186     UART Line Control */
#define UART4_CTL_R                 (*((volatile uint32_t *)0x40010030))                            /*  pp.1188     UART Control */
#define UART4_IFLS_R                (*((volatile uint32_t *)0x40010034))                            /*  pp.1192     UART Interrupt FIFO Level Select */
#define UART4_IM_R                  (*((volatile uint32_t *)0x40010038))                            /*  pp.1194     UART Interrupt Mask */
#define UART4_RIS_R                 (*((volatile uint32_t *)0x4001003C))                            /*  pp.1198     UART Raw Interrupt Status */
#define UART4_MIS_R                 (*((volatile uint32_t *)0x40010040))                            /*  pp.1202     UART Masked Interrupt Status */
#define UART4_ICR_R                 (*((volatile uint32_t *)0x40010044))                            /*  pp.1206     UART Interrupt Clear */
#define UART4_DMACTL_R              (*((volatile uint32_t *)0x40010048))                            /*  pp.1208     UART DMA Control */
#define UART4_9BITADDR_R            (*((volatile uint32_t *)0x400100A4))                            /*  pp.1209     UART 9-Bit Self Address */
#define UART4_9BITAMASK_R           (*((volatile uint32_t *)0x400100A8))                            /*  pp.1210     UART 9-Bit Self Address Mask */
#define UART4_PP_R                  (*((volatile uint32_t *)0x40010FC0))                            /*  pp.1211     UART Peripheral Properties */
#define UART4_CC_R                  (*((volatile uint32_t *)0x40010FC8))                            /*  pp.1213     UART Clock Configuration */

    /** UART module 5 (UART5) */
#define UART5_DR_R                  (*((volatile uint32_t *)0x40011000))                            /*  pp.1175     UART Data */
#define UART5_RSR_R                 (*((volatile uint32_t *)0x40011004))                            /*  pp.1177     UART Receive Status */
#define UART5_ECR_R                 (*((volatile uint32_t *)0x40011004))                            /*  pp.1177     UART Error Clear */
#define UART5_FR_R                  (*((volatile uint32_t *)0x40011018))                            /*  pp.1180     UART Flag */
#define UART5_ILPR_R                (*((volatile uint32_t *)0x40011020))                            /*  pp.1183     UART IrDA Low-Power */
#define UART5_IBRD_R                (*((volatile uint32_t *)0x40011024))                            /*  pp.1184     UART Integer Baud-Rate Divisor */
#define UART5_FBRD_R                (*((volatile uint32_t *)0x40011028))                            /*  pp.1185     UART Fractional Baud-Rate Divisor */
#define UART5_LCRH_R                (*((volatile uint32_t *)0x4001102C))                            /*  pp.1186     UART Line Control */
#define UART5_CTL_R                 (*((volatile uint32_t *)0x40011030))                            /*  pp.1188     UART Control */
#define UART5_IFLS_R                (*((volatile uint32_t *)0x40011034))                            /*  pp.1192     UART Interrupt FIFO Level Select */
#define UART5_IM_R                  (*((volatile uint32_t *)0x40011038))                            /*  pp.1194     UART Interrupt Mask */
#define UART5_RIS_R                 (*((volatile uint32_t *)0x4001103C))                            /*  pp.1198     UART Raw Interrupt Status */
#define UART5_MIS_R                 (*((volatile uint32_t *)0x40011040))                            /*  pp.1202     UART Masked Interrupt Status */
#define UART5_ICR_R                 (*((volatile uint32_t *)0x40011044))                            /*  pp.1206     UART Interrupt Clear */
#define UART5_DMACTL_R              (*((volatile uint32_t *)0x40011048))                            /*  pp.1208     UART DMA Control */
#define UART5_9BITADDR_R            (*((volatile uint32_t *)0x400110A4))                            /*  pp.1209     UART 9-Bit Self Address */
#define UART5_9BITAMASK_R           (*((volatile uint32_t *)0x400110A8))                            /*  pp.1210     UART 9-Bit Self Address Mask */
#define UART5_PP_R                  (*((volatile uint32_t *)0x40011FC0))                            /*  pp.1211     UART Peripheral Properties */
#define UART5_CC_R                  (*((volatile uint32_t *)0x40011FC8))                            /*  pp.1213     UART Clock Configuration */

    /** UART module 6 (UART6) */
#define UART6_DR_R                  (*((volatile uint32_t *)0x40012000))                            /*  pp.1175     UART Data */
#define UART6_RSR_R                 (*((volatile uint32_t *)0x40012004))                            /*  pp.1177     UART Receive Status */
#define UART6_ECR_R                 (*((volatile uint32_t *)0x40012004))                            /*  pp.1177     UART Error Clear */
#define UART6_FR_R                  (*((volatile uint32_t *)0x40012018))                            /*  pp.1180     UART Flag */
#define UART6_ILPR_R                (*((volatile uint32_t *)0x40012020))                            /*  pp.1183     UART IrDA Low-Power */
#define UART6_IBRD_R                (*((volatile uint32_t *)0x40012024))                            /*  pp.1184     UART Integer Baud-Rate Divisor */
#define UART6_FBRD_R                (*((volatile uint32_t *)0x40012028))                            /*  pp.1185     UART Fractional Baud-Rate Divisor */
#define UART6_LCRH_R                (*((volatile uint32_t *)0x4001202C))                            /*  pp.1186     UART Line Control */
#define UART6_CTL_R                 (*((volatile uint32_t *)0x40012030))                            /*  pp.1188     UART Control */
#define UART6_IFLS_R                (*((volatile uint32_t *)0x40012034))                            /*  pp.1192     UART Interrupt FIFO Level Select */
#define UART6_IM_R                  (*((volatile uint32_t *)0x40012038))                            /*  pp.1194     UART Interrupt Mask */
#define UART6_RIS_R                 (*((volatile uint32_t *)0x4001203C))                            /*  pp.1198     UART Raw Interrupt Status */
#define UART6_MIS_R                 (*((volatile uint32_t *)0x40012040))                            /*  pp.1202     UART Masked Interrupt Status */
#define UART6_ICR_R                 (*((volatile uint32_t *)0x40012044))                            /*  pp.1206     UART Interrupt Clear */
#define UART6_DMACTL_R              (*((volatile uint32_t *)0x40012048))                            /*  pp.1208     UART DMA Control */
#define UART6_9BITADDR_R            (*((volatile uint32_t *)0x400120A4))                            /*  pp.1209     UART 9-Bit Self Address */
#define UART6_9BITAMASK_R           (*((volatile uint32_t *)0x400120A8))                            /*  pp.1210     UART 9-Bit Self Address Mask */
#define UART6_PP_R                  (*((volatile uint32_t *)0x40012FC0))                            /*  pp.1211     UART Peripheral Properties */
#define UART6_CC_R                  (*((volatile uint32_t *)0x40012FC8))                            /*  pp.1213     UART Clock Configuration */

    /** UART module 7 (UART7) */
#define UART7_DR_R                  (*((volatile uint32_t *)0x40013000))                            /*  pp.1175     UART Data */
#define UART7_RSR_R                 (*((volatile uint32_t *)0x40013004))                            /*  pp.1177     UART Receive Status */
#define UART7_ECR_R                 (*((volatile uint32_t *)0x40013004))                            /*  pp.1177     UART Error Clear */
#define UART7_FR_R                  (*((volatile uint32_t *)0x40013018))                            /*  pp.1180     UART Flag */
#define UART7_ILPR_R                (*((volatile uint32_t *)0x40013020))                            /*  pp.1183     UART IrDA Low-Power */
#define UART7_IBRD_R                (*((volatile uint32_t *)0x40013024))                            /*  pp.1184     UART Integer Baud-Rate Divisor */
#define UART7_FBRD_R                (*((volatile uint32_t *)0x40013028))                            /*  pp.1185     UART Fractional Baud-Rate Divisor */
#define UART7_LCRH_R                (*((volatile uint32_t *)0x4001302C))                            /*  pp.1186     UART Line Control */
#define UART7_CTL_R                 (*((volatile uint32_t *)0x40013030))                            /*  pp.1188     UART Control */
#define UART7_IFLS_R                (*((volatile uint32_t *)0x40013034))                            /*  pp.1192     UART Interrupt FIFO Level Select */
#define UART7_IM_R                  (*((volatile uint32_t *)0x40013038))                            /*  pp.1194     UART Interrupt Mask */
#define UART7_RIS_R                 (*((volatile uint32_t *)0x4001303C))                            /*  pp.1198     UART Raw Interrupt Status */
#define UART7_MIS_R                 (*((volatile uint32_t *)0x40013040))                            /*  pp.1202     UART Masked Interrupt Status */
#define UART7_ICR_R                 (*((volatile uint32_t *)0x40013044))                            /*  pp.1206     UART Interrupt Clear */
#define UART7_DMACTL_R              (*((volatile uint32_t *)0x40013048))                            /*  pp.1208     UART DMA Control */
#define UART7_9BITADDR_R            (*((volatile uint32_t *)0x400130A4))                            /*  pp.1209     UART 9-Bit Self Address */
#define UART7_9BITAMASK_R           (*((volatile uint32_t *)0x400130A8))                            /*  pp.1210     UART 9-Bit Self Address Mask */
#define UART7_PP_R                  (*((volatile uint32_t *)0x40013FC0))                            /*  pp.1211     UART Peripheral Properties */
#define UART7_CC_R                  (*((volatile uint32_t *)0x40013FC8))                            /*  pp.1213     UART Clock Configuration */


/**************************************************************************************************
 *  Macros de campos de configuración                                                                   pp.1173     Register map
 */

    /** Bit fields in the UART_DR register                                                              pp.1175 */
#define UART_DR_OE                  0x00000800                                                      /*  UART Overrun Error */
#define UART_DR_BE                  0x00000400                                                      /*  UART Break Error */
#define UART_DR_PE                  0x00000200                                                      /*  UART Parity Error */
#define UART_DR_FE                  0x00000100                                                      /*  UART Framing Error */
#define UART_DR_DATA_M              0x000000FF                                                      /*  Data Transmitted or Received mask */
#define UART_DR_DATA_S              0                                                               /*  Data Transmitted or Received shift */

    /** Bit fields in the UART_RSR register                                                             pp.1177 */
#define UART_RSR_OE                 0x00000008                                                      /*  UART Overrun Error */
#define UART_RSR_BE                 0x00000004                                                      /*  UART Break Error */
#define UART_RSR_PE                 0x00000002                                                      /*  UART Parity Error */
#define UART_RSR_FE                 0x00000001                                                      /*  UART Framing Error */

    /** Bit fields in the UART_ECR register                                                             pp.1177 */
#define UART_ECR_DATA_M             0x000000FF                                                      /*  Error Clear mask */
#define UART_ECR_DATA_S             0                                                               /*  Error Clear shift */

    /** Bit fields in the UART_FR register                                                              pp.1180 */
#define UART_FR_RI                  0x00000100                                                      /*  Ring Indicator */
#define UART_FR_TXFE                0x00000080                                                      /*  UART Transmit FIFO Empty */
#define UART_FR_RXFF                0x00000040                                                      /*  UART Receive FIFO Full */
#define UART_FR_TXFF                0x00000020                                                      /*  UART Transmit FIFO Full */
#define UART_FR_RXFE                0x00000010                                                      /*  UART Receive FIFO Empty */
#define UART_FR_BUSY                0x00000008                                                      /*  UART Busy */
#define UART_FR_DCD                 0x00000004                                                      /*  Data Carrier Detect */
#define UART_FR_DSR                 0x00000002                                                      /*  Data Set Ready */
#define UART_FR_CTS                 0x00000001                                                      /*  Clear To Send */

    /** Bit fields in the UART_ILPR register                                                            pp.1183 */
#define UART_ILPR_ILPDVSR_M         0x000000FF                                                      /*  IrDA Low-Power Divisor mask */
#define UART_ILPR_ILPDVSR_S         0                                                               /*  IrDA Low-Power Divisor shift */

    /** Bit fields in the UART_IBRD register                                                            pp.1184 */
#define UART_IBRD_DIVINT_M          0x0000FFFF                                                      /*  Integer Baud-Rate Divisor mask */
#define UART_IBRD_DIVINT_S          0                                                               /*  Integer Baud-Rate Divisor shift */

    /** Bit fields in the UART_FBRD register                                                            pp.1185 */
#define UART_FBRD_DIVFRAC_M         0x0000003F                                                      /*  Fractional Baud-Rate Divisor mask */
#define UART_FBRD_DIVFRAC_S         0                                                               /*  Fractional Baud-Rate Divisor shift */

    /** Bit fields in the UART_LCRH register                                                            pp.1186 */
#define UART_LCRH_SPS               0x00000080                                                      /*  UART Stick Parity Select */
#define UART_LCRH_WLEN_M            0x00000060                                                      /*  UART Word Length mask */
#define UART_LCRH_WLEN_5            0x00000000                                                      /*  5 bits (default) */
#define UART_LCRH_WLEN_6            0x00000020                                                      /*  6 bits */
#define UART_LCRH_WLEN_7            0x00000040                                                      /*  7 bits */
#define UART_LCRH_WLEN_8            0x00000060                                                      /*  8 bits */
#define UART_LCRH_FEN               0x00000010                                                      /*  UART Enable FIFOs */
#define UART_LCRH_STP2              0x00000008                                                      /*  UART Two Stop Bits Select */
#define UART_LCRH_EPS               0x00000004                                                      /*  UART Even Parity Select */
#define UART_LCRH_PEN               0x00000002                                                      /*  UART Parity Enable */
#define UART_LCRH_BRK               0x00000001                                                      /*  UART Send Break */

    /** Bit fields in the UART_CTL register                                                             pp.1188 */
#define UART_CTL_CTSEN              0x00008000                                                      /*  Enable Clear To Send */
#define UART_CTL_RTSEN              0x00004000                                                      /*  Enable Request to Send */
#define UART_CTL_RTS                0x00000800                                                      /*  Request to Send */
#define UART_CTL_DTR                0x00000400                                                      /*  Data Terminal Ready */
#define UART_CTL_RXE                0x00000200                                                      /*  UART Receive Enable */
#define UART_CTL_TXE                0x00000100                                                      /*  UART Transmit Enable */
#define UART_CTL_LBE                0x00000080                                                      /*  UART Loop Back Enable */
#define UART_CTL_HSE                0x00000020                                                      /*  High-Speed Enable */
#define UART_CTL_EOT                0x00000010                                                      /*  End of Transmission */
#define UART_CTL_SMART              0x00000008                                                      /*  ISO 7816 Smart Card Support */
#define UART_CTL_SIRLP              0x00000004                                                      /*  UART SIR Low-Power Mode */
#define UART_CTL_SIREN              0x00000002                                                      /*  UART SIR Enable */
#define UART_CTL_UARTEN             0x00000001                                                      /*  UART Enable */

    /** Bit fields in the UART_IFLS register                                                            pp.1192 */
#define UART_IFLS_RX_M              0x00000038                                                      /*  UART Receive Interrupt FIFO Level Select mask */
#define UART_IFLS_RX1_8             0x00000000                                                      /*  RX FIFO >= 1/8 full */
#define UART_IFLS_RX2_8             0x00000008                                                      /*  RX FIFO >= 1/4 full */
#define UART_IFLS_RX4_8             0x00000010                                                      /*  RX FIFO >= 1/2 full (default) */
#define UART_IFLS_RX6_8             0x00000018                                                      /*  RX FIFO >= 3/4 full */
#define UART_IFLS_RX7_8             0x00000020                                                      /*  RX FIFO >= 7/8 full */
#define UART_IFLS_TX_M              0x00000007                                                      /*  UART Transmit Interrupt FIFO Level Select mask */
#define UART_IFLS_TX1_8             0x00000000                                                      /*  TX FIFO <= 1/8 full */
#define UART_IFLS_TX2_8             0x00000001                                                      /*  TX FIFO <= 1/4 full */
#define UART_IFLS_TX4_8             0x00000002                                                      /*  TX FIFO <= 1/2 full (default) */
#define UART_IFLS_TX6_8             0x00000003                                                      /*  TX FIFO <= 3/4 full */
#define UART_IFLS_TX7_8             0x00000004                                                      /*  TX FIFO <= 7/8 full */

    /** Bit fields in the UART_IM register                                                              pp.1194 */
#define UART_IM_DMATXIM             0x00020000                                                      /*  Transmit DMA Interrupt Mask */
#define UART_IM_DMARXIM             0x00010000                                                      /*  Receive DMA Interrupt Mask */
#define UART_IM_9BITIM              0x00001000                                                      /*  9-Bit Mode Interrupt Mask */
#define UART_IM_EOTIM               0x00000800                                                      /*  End of Transmission Interrupt Mask */
#define UART_IM_OEIM                0x00000400                                                      /*  UART Overrun Error Interrupt Mask */
#define UART_IM_BEIM                0x00000200                                                      /*  UART Break Error Interrupt Mask */
#define UART_IM_PEIM                0x00000100                                                      /*  UART Parity Error Interrupt Mask */
#define UART_IM_FEIM                0x00000080                                                      /*  UART Framing Error Interrupt Mask */
#define UART_IM_RTIM                0x00000040                                                      /*  UART Receive Time-Out Interrupt Mask */
#define UART_IM_TXIM                0x00000020                                                      /*  UART Transmit Interrupt Mask */
#define UART_IM_RXIM                0x00000010                                                      /*  UART Receive Interrupt Mask */
#define UART_IM_DSRMIM              0x00000008                                                      /*  UART Data Set Ready Modem Interrupt Mask */
#define UART_IM_DCDMIM              0x00000004                                                      /*  UART Data Carrier Detect Modem Interrupt Mask */
#define UART_IM_CTSMIM              0x00000002                                                      /*  UART Clear to Send Modem Interrupt Mask */
#define UART_IM_RIMIM               0x00000001                                                      /*  UART Ring Indicator Modem Interrupt Mask */

    /** Bit fields in the UART_RIS register                                                             pp.1198 */
#define UART_RIS_DMATXRIS           0x00020000                                                      /*  Transmit DMA Raw Interrupt Status */
#define UART_RIS_DMARXRIS           0x00010000                                                      /*  Receive DMA Raw Interrupt Status */
#define UART_RIS_9BITRIS            0x00001000                                                      /*  9-Bit Mode Raw Interrupt Status */
#define UART_RIS_EOTRIS             0x00000800                                                      /*  End of Transmission Raw Interrupt Status */
#define UART_RIS_OERIS              0x00000400                                                      /*  UART Overrun Error Raw Interrupt Status */
#define UART_RIS_BERIS              0x00000200                                                      /*  UART Break Error Raw Interrupt Status */
#define UART_RIS_PERIS              0x00000100                                                      /*  UART Parity Error Raw Interrupt Status */
#define UART_RIS_FERIS              0x00000080                                                      /*  UART Framing Error Raw Interrupt Status */
#define UART_RIS_RTRIS              0x00000040                                                      /*  UART Receive Time-Out Raw Interrupt Status */
#define UART_RIS_TXRIS              0x00000020                                                      /*  UART Transmit Raw Interrupt Status */
#define UART_RIS_RXRIS              0x00000010                                                      /*  UART Receive Raw Interrupt Status */
#define UART_RIS_DSRRIS             0x00000008                                                      /*  UART Data Set Ready Modem Raw Interrupt Status */
#define UART_RIS_DCDRIS             0x00000004                                                      /*  UART Data Carrier Detect Modem Raw Interrupt Status */
#define UART_RIS_CTSRIS             0x00000002                                                      /*  UART Clear to Send Modem Raw Interrupt Status */
#define UART_RIS_RIRIS              0x00000001                                                      /*  UART Ring Indicator Modem Raw Interrupt Status */

    /** Bit fields in the UART_MIS register                                                             pp.1202 */
#define UART_MIS_DMATXMIS           0x00020000                                                      /*  Transmit DMA Masked Interrupt Status */
#define UART_MIS_DMARXMIS           0x00010000                                                      /*  Receive DMA Masked Interrupt Status */
#define UART_MIS_9BITMIS            0x00001000                                                      /*  9-Bit Mode Masked Interrupt Status */
#define UART_MIS_EOTMIS             0x00000800                                                      /*  End of Transmission Masked Interrupt Status */
#define UART_MIS_OEMIS              0x00000400                                                      /*  UART Overrun Error Masked Interrupt Status */
#define UART_MIS_BEMIS              0x00000200                                                      /*  UART Break Error Masked Interrupt Status */
#define UART_MIS_PEMIS              0x00000100                                                      /*  UART Parity Error Masked Interrupt Status */
#define UART_MIS_FEMIS              0x00000080                                                      /*  UART Framing Error Masked Interrupt Status */
#define UART_MIS_RTMIS              0x00000040                                                      /*  UART Receive Time-Out Masked Interrupt Status */
#define UART_MIS_TXMIS              0x00000020                                                      /*  UART Transmit Masked Interrupt Status */
#define UART_MIS_RXMIS              0x00000010                                                      /*  UART Receive Masked Interrupt Status */
#define UART_MIS_DSRMIS             0x00000008                                                      /*  UART Data Set Ready Modem Masked Interrupt Status */
#define UART_MIS_DCDMIS             0x00000004                                                      /*  UART Data Carrier Detect Modem Masked Interrupt Status */
#define UART_MIS_CTSMIS             0x00000002                                                      /*  UART Clear to Send Modem Masked Interrupt Status */
#define UART_MIS_RIMIS              0x00000001                                                      /*  UART Ring Indicator Modem Masked Interrupt Status */

    /** Bit fields in the UART_ICR register                                                             pp.1206 */
#define UART_ICR_DMATXIC            0x00020000                                                      /*  Transmit DMA Interrupt Clear */
#define UART_ICR_DMARXIC            0x00010000                                                      /*  Receive DMA Interrupt Clear */
#define UART_ICR_9BITIC             0x00001000                                                      /*  9-Bit Mode Interrupt Clear */
#define UART_ICR_EOTIC              0x00000800                                                      /*  End of Transmission Interrupt Clear */
#define UART_ICR_OEIC               0x00000400                                                      /*  Overrun Error Interrupt Clear */
#define UART_ICR_BEIC               0x00000200                                                      /*  Break Error Interrupt Clear */
#define UART_ICR_PEIC               0x00000100                                                      /*  Parity Error Interrupt Clear */
#define UART_ICR_FEIC               0x00000080                                                      /*  Framing Error Interrupt Clear */
#define UART_ICR_RTIC               0x00000040                                                      /*  Receive Time-Out Interrupt Clear */
#define UART_ICR_TXIC               0x00000020                                                      /*  Transmit Interrupt Clear */
#define UART_ICR_RXIC               0x00000010                                                      /*  Receive Interrupt Clear */
#define UART_ICR_DSRMIC             0x00000008                                                      /*  UART Data Set Ready Modem Interrupt Clear */
#define UART_ICR_DCDMIC             0x00000004                                                      /*  UART Data Carrier Detect Modem Interrupt Clear */
#define UART_ICR_CTSMIC             0x00000002                                                      /*  UART Clear to Send Modem Interrupt Clear */
#define UART_ICR_RIMIC              0x00000001                                                      /*  UART Ring Indicator Modem Interrupt Clear */

    /** Bit fields in the UART_DMACTL register                                                          pp.1208 */
#define UART_DMACTL_DMAERR          0x00000004                                                      /*  DMA on Error */
#define UART_DMACTL_TXDMAE          0x00000002                                                      /*  Transmit DMA Enable */
#define UART_DMACTL_RXDMAE          0x00000001                                                      /*  Receive DMA Enable */

    /** Bit fields in the UART_9BITADDR register                                                        pp.1209 */
#define UART_9BITADDR_9BITEN        0x00008000                                                      /*  Enable 9-Bit Mode */
#define UART_9BITADDR_ADDR_M        0x000000FF                                                      /*  Self Address for 9-Bit Mode mask */
#define UART_9BITADDR_ADDR_S        0                                                               /*  Self Address for 9-Bit Mode shift */

    /** Bit fields in the UART_9BITAMASK register                                                       pp.1210 */
#define UART_9BITAMASK_MASK_M       0x000000FF                                                      /*  Self Address Mask for 9-Bit Mode mask */
#define UART_9BITAMASK_MASK_S       0                                                               /*  Self Address Mask for 9-Bit Mode shift */

    /** Bit fields in the UART_PP register                                                              pp.1211 */
#define UART_PP_MSE                 0x00000008                                                      /*  Modem Support Extended */
#define UART_PP_MS                  0x00000004                                                      /*  Modem Support */
#define UART_PP_NB                  0x00000002                                                      /*  9-Bit Support */
#define UART_PP_SC                  0x00000001                                                      /*  Smart Card Support */

    /** Bit fields in the UART_CC register                                                              pp.1213 */
#define UART_CC_CS_M                0x0000000F                                                      /*  UART Baud Clock Source mask */
#define UART_CC_CS_SYSCLK           0x00000000                                                      /*  System clock (based on clock source and divisor factor) */
#define UART_CC_CS_PIOSC            0x00000005                                                      /*  PIOSC */


/**************************************************************************************************
 *  Tipos de datos
 */

typedef enum {
    UART_PARITY_NONE,                                                                               /*  Parity disabled */
    UART_PARITY_ODD,                                                                                /*  Odd parity */
    UART_PARITY_EVEN                                                                                /*  Even parity */
} UART_Parity_t;

typedef enum {
    UART_RX_FIFO_LEVEL_1_8 = UART_IFLS_RX1_8,                                                       /*  RX FIFO >= 1/8 full */
    UART_RX_FIFO_LEVEL_2_8 = UART_IFLS_RX2_8,                                                       /*  RX FIFO >= 1/4 full */
    UART_RX_FIFO_LEVEL_4_8 = UART_IFLS_RX4_8,                                                       /*  RX FIFO >= 1/2 full */
    UART_RX_FIFO_LEVEL_6_8 = UART_IFLS_RX6_8,                                                       /*  RX FIFO >= 3/4 full */
    UART_RX_FIFO_LEVEL_7_8 = UART_IFLS_RX7_8                                                        /*  RX FIFO >= 7/8 full */
} UART_RxFIFOLevel_t;


/**************************************************************************************************
 *  Prototipos de funciones
 */

void UART0_Init(uint32_t BaudRate, UART_Parity_t Parity, UART_RxFIFOLevel_t RxFIFOLevel);           /*  Inicialización y configuración del UART0 */
void UART4_Init(uint32_t BaudRate, UART_Parity_t Parity, UART_RxFIFOLevel_t RxFIFOLevel);           /*  Inicialización y configuración del UART4 */
void UART7_Init(uint32_t BaudRate, UART_Parity_t Parity, UART_RxFIFOLevel_t RxFIFOLevel);           /*  Inicialización y configuración del UART7 */

#endif                                                                                              /*  UART_H */
