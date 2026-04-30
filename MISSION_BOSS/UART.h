/**************************************************************************************************
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
 *  Definiciones y macros
 *  Universal Asynchronous Receiver/Transmitter (UART) registers                                        pp.1173     Register map
 */
    /** UART module 0 (UART0) */
#define UART0_DR_R                  (*((volatile uint32_t *)0x4000C000))                            /*  pp.1175     UART Data */
#define UART0_FR_R                  (*((volatile uint32_t *)0x4000C018))                            /*  pp.1180     UART Flag */
#define UART0_IBRD_R                (*((volatile uint32_t *)0x4000C024))                            /*  pp.1184     UART Integer Baud-Rate Divisor */
#define UART0_FBRD_R                (*((volatile uint32_t *)0x4000C028))                            /*  pp.1185     UART Fractional Baud-Rate Divisor */
#define UART0_LCRH_R                (*((volatile uint32_t *)0x4000C02C))                            /*  pp.1186     UART Line Control */
#define UART0_CTL_R                 (*((volatile uint32_t *)0x4000C030))                            /*  pp.1188     UART Control */
#define UART0_IFLS_R                (*((volatile uint32_t *)0x4000C034))                            /*  pp.1192     UART Interrupt FIFO Level Select */
#define UART0_IM_R                  (*((volatile uint32_t *)0x4000C038))                            /*  pp.1194     UART Interrupt Mask */
#define UART0_ICR_R                 (*((volatile uint32_t *)0x4000C044))                            /*  pp.1206     UART Interrupt Clear */
#define UART0_CC_R                  (*((volatile uint32_t *)0x4000CFC8))                            /*  pp.1213     UART Clock Configuration */
    /** UART module 4 (UART4) */
#define UART4_DR_R              (*((volatile uint32_t *)0x40010000))
#define UART4_FR_R                  (*((volatile uint32_t *)0x40010018))                            /*  pp.1180     UART Flag */
#define UART4_CTL_R             (*((volatile uint32_t *)0x40010030))
#define UART4_IBRD_R            (*((volatile uint32_t *)0x40010024))
#define UART4_FBRD_R            (*((volatile uint32_t *)0x40010028))
#define UART4_IM_R              (*((volatile uint32_t *)0x40010038))
#define UART4_IFLS_R            (*((volatile uint32_t *)0x40010034))
#define UART4_LCRH_R            (*((volatile uint32_t *)0x4001002C))
#define UART4_ICR_R                 (*((volatile uint32_t *)0x40010044))
#define UART4_CC_R              (*((volatile uint32_t *)0x40010FC8))
    /** UART module 7 (UART7) */
#define UART7_DR_R              (*((volatile uint32_t *)0x40013000))
#define UART7_FR_R                  (*((volatile uint32_t *)0x40013018))                            /*  pp.1180     UART Flag */
#define UART7_IBRD_R            (*((volatile uint32_t *)0x40013024))
#define UART7_FBRD_R            (*((volatile uint32_t *)0x40013028))
#define UART7_LCRH_R            (*((volatile uint32_t *)0x4001302C))
#define UART7_CTL_R             (*((volatile uint32_t *)0x40013030))
#define UART7_IFLS_R            (*((volatile uint32_t *)0x40013034))
#define UART7_IM_R              (*((volatile uint32_t *)0x40013038))
#define UART7_RIS_R             (*((volatile uint32_t *)0x4001303C))
#define UART7_ICR_R                 (*((volatile uint32_t *)0x40013044))
#define UART7_CC_R              (*((volatile uint32_t *)0x40013FC8))


/**************************************************************************************************
 *  Prototipos de funciones
 */

void UART0_Init();                                                                                  /*  Inicialización y configuración del UART0 */
void UART4_Init();                                                                                  /*  Inicialización y configuración del UART4 */
void UART7_Init();                                                                                  /*  Inicialización y configuración del UART7 */


#endif                                                                                              /*  UART_H */
