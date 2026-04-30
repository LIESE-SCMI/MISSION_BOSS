/**************************************************************************************************
 *  Archivo:        Archivo de cabecera del módulo SYSCTL
 * 
 *  Tarjeta de desarrollo:  EK-TM4C1294XL Evaluation board
 ***********************************************/


#ifndef SYSCTL_H                                                                                    /*  Verificar si SYSCTL_H no ha sido definido previamente */
#define SYSCTL_H                                                                                    /*  Definir SYSCTL_H para evitar inclusiones múltiples del mismo archivo */


/**************************************************************************************************
 *  Archivos de cabecera
 */

#include <stdint.h>                                                                                 /*  Tipos enteros con tamaños fijos */


/**************************************************************************************************
 *  Definiciones y macros
 *  System Control (SYSCTL) registers                                                                   pp.247      Register map
 */
#define SYSCTL_RCGCTIMER_R          (*((volatile uint32_t *)0x400FE604))                            /*  pp.380      16/32-Bit General-Purpose Timer Run Mode Clock Gating Control */
#define SYSCTL_RCGCGPIO_R           (*((volatile uint32_t *)0x400FE608))                            /*  pp.382      GPIO Run Mode Clock Gating Control */
#define SYSCTL_RCGCUART_R           (*((volatile uint32_t *)0x400FE618))                            /*  pp.388      Universal Asynchronous Receiver/Transmitter Run Mode Clock Gating Control */
#define SYSCTL_PRTIMER_R            (*((volatile uint32_t *)0x400FEA04))                            /*  pp.497      16/32-Bit General-Purpose Timer Peripheral Ready */
#define SYSCTL_PRGPIO_R             (*((volatile uint32_t *)0x400FEA08))                            /*  pp.499      GPIO Peripheral Ready */
#define SYSCTL_PRUART_R             (*((volatile uint32_t *)0x400FEA18))                            /*  pp.505      Universal Asynchronous Receiver/Transmitter Peripheral Ready */


/**************************************************************************************************
 *  Prototipos de funciones
 */


#endif                                                                                              /*  SYSCTL_H */
