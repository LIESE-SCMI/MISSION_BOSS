/**************************************************************************************************
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
#define NVIC_EN0_R                  (*((volatile uint32_t *)0xE000E100))                            /*  pp.154      Interrupt 0-31 Set Enable */
#define NVIC_EN1_R                  (*((volatile uint32_t *)0xE000E104))                            /*  pp.154      Interrupt 32-63 Set Enable */
#define NVIC_PRI1_R                 (*((volatile uint32_t *)0xE000E404))                            /*  pp.159      Interrupt 4-7 Priority */
#define NVIC_PRI12_R                (*((volatile uint32_t *)0xE000E430))                            /*  pp.159      Interrupt 48-51 Priority */
#define NVIC_PRI14_R            (*((volatile uint32_t *)0xE000E438))
#define NVIC_PRI15_R            (*((volatile uint32_t *)0xE000E43C))


/**************************************************************************************************
 *  Prototipos de funciones
 */

void UART0_Handler(void);                                                                           /*  Rutina de servicio de interrupción (ISR) del UART0 */
void GPIO_PortJ_Handler(void);                                                                      /*  Rutina de servicio de interrupción (ISR) del GPIO PortJ */


#endif                                                                                              /*  NVIC_H */
