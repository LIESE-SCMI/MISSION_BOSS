/**************************************************************************************************
 *  Archivo:        Archivo de cabecera del módulo GPIO
 * 
 *  Tarjeta de desarrollo:  EK-TM4C1294XL Evaluation board
 ***********************************************/


#ifndef GPIO_H                                                                                      /*  Verificar si GPIO_H no ha sido definido previamente */
#define GPIO_H                                                                                      /*  Definir GPIO_H para evitar inclusiones múltiples del mismo archivo */


/**************************************************************************************************
 *  Archivos de cabecera
 */

#include <stdint.h>                                                                                 /*  Tipos enteros con tamaños fijos */


/**************************************************************************************************
 *  Definiciones y macros
 *  General-Purpose Input/Output (GPIO) registers                                                       pp.757      Register map
 */
    /** GPIO Port A (PortA) */
#define GPIO_PORTA_AHB_AFSEL_R      (*((volatile uint32_t *)0x40058420))                            /*  pp.770      GPIO Alternate Function Select */
#define GPIO_PORTA_AHB_DEN_R        (*((volatile uint32_t *)0x4005851C))                            /*  pp.781      GPIO Digital Enable */
#define GPIO_PORTA_AHB_PCTL_R       (*((volatile uint32_t *)0x4005852C))                            /*  pp.787      GPIO Port Control */
    /** GPIO Port C (PortC) */
#define GPIO_PORTC_AHB_AFSEL_R      (*((volatile uint32_t *)0x4005A420))                            /*  pp.770      GPIO Alternate Function Select */
#define GPIO_PORTC_AHB_DEN_R        (*((volatile uint32_t *)0x4005A51C))                            /*  pp.781      GPIO Digital Enable */
#define GPIO_PORTC_AHB_PCTL_R       (*((volatile uint32_t *)0x4005A52C))                            /*  pp.787      GPIO Port Control */
    /** GPIO Port F (PortF) */
#define GPIO_PORTF_AHB_DATA_R       (*((volatile uint32_t *)0x4005D044))                            /*  pp.759      GPIO Data >> PortF[4,0] unmasked */
#define GPIO_PORTF_AHB_DIR_R        (*((volatile uint32_t *)0x4005D400))                            /*  pp.760      GPIO Direction */
#define GPIO_PORTF_AHB_DEN_R        (*((volatile uint32_t *)0x4005D51C))                            /*  pp.781      GPIO Digital Enable */
    /** GPIO Port J (PortJ) */
#define GPIO_PORTJ_AHB_DATA_R       (*((volatile uint32_t *)0x4006000C))                            /*  pp.759      GPIO Data >> PortJ[1,0] unmasked */
#define GPIO_PORTJ_AHB_DIR_R        (*((volatile uint32_t *)0x40060400))                            /*  pp.760      GPIO Direction */
#define GPIO_PORTJ_AHB_IS_R         (*((volatile uint32_t *)0x40060404))                            /*  pp.761      GPIO Interrupt Sense */
#define GPIO_PORTJ_AHB_IBE_R        (*((volatile uint32_t *)0x40060408))                            /*  pp.762      GPIO Interrupt Both Edges */
#define GPIO_PORTJ_AHB_IEV_R        (*((volatile uint32_t *)0x4006040C))                            /*  pp.763      GPIO Interrupt Event */
#define GPIO_PORTJ_AHB_IM_R         (*((volatile uint32_t *)0x40060410))                            /*  pp.764      GPIO Interrupt Mask */
#define GPIO_PORTJ_AHB_MIS_R        (*((volatile uint32_t *)0x40060418))                            /*  pp.767      GPIO Masked Interrupt Status */
#define GPIO_PORTJ_AHB_ICR_R        (*((volatile uint32_t *)0x4006041C))                            /*  pp.769      GPIO Interrupt Clear */
#define GPIO_PORTJ_AHB_PUR_R        (*((volatile uint32_t *)0x40060510))                            /*  pp.776      GPIO Pull-Up Select */
#define GPIO_PORTJ_AHB_DEN_R        (*((volatile uint32_t *)0x4006051C))                            /*  pp.781      GPIO Digital Enable */
    /** GPIO Port K (PortK) */
#define GPIO_PORTK_AFSEL_R          (*((volatile uint32_t *)0x40061420))                            /*  pp.770      GPIO Alternate Function Select */
#define GPIO_PORTK_DEN_R            (*((volatile uint32_t *)0x4006151C))                            /*  pp.781      GPIO Digital Enable */
#define GPIO_PORTK_PCTL_R           (*((volatile uint32_t *)0x4006152C))                            /*  pp.787      GPIO Port Control */
    /** GPIO Port N (PortN) */
#define GPIO_PORTN_DATA_R           (*((volatile uint32_t *)0x4006400C))                            /*  pp.759      GPIO Data >> PortN[1,0] unmasked */
#define GPIO_PORTN_DIR_R            (*((volatile uint32_t *)0x40064400))                            /*  pp.760      GPIO Direction */
#define GPIO_PORTN_DEN_R            (*((volatile uint32_t *)0x4006451C))                            /*  pp.781      GPIO Digital Enable */


/**************************************************************************************************
 *  Prototipos de funciones
 */

void GPIO_PortF_Init();                                                                             /*  Inicialización y configuración del puerto GPIO F */
void GPIO_PortJ_Init();                                                                             /*  Inicialización y configuración del puerto GPIO J */
void GPIO_PortN_Init();                                                                             /*  Inicialización y configuración del puerto GPIO N */


#endif                                                                                              /*  GPIO_H */
