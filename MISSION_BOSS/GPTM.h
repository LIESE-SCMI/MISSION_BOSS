/**************************************************************************************************
 *  Archivo:        Archivo de cabecera del módulo GPTM
 * 
 *  Tarjeta de desarrollo:  EK-TM4C1294XL Evaluation board
 ***********************************************/


#ifndef GPTM_H                                                                                      /*  Verificar si GPTM_H no ha sido definido previamente */
#define GPTM_H                                                                                      /*  Definir GPTM_H para evitar inclusiones múltiples del mismo archivo */


/**************************************************************************************************
 *  Archivos de cabecera
 */

#include <stdint.h>                                                                                 /*  Tipos enteros con tamaños fijos */


/**************************************************************************************************
 *  Definiciones y macros
 *  General-Purpose Timer Module (GPTM) registers                                                       pp.974      Register map
 */
    /** GPTM module 0 (TIMER0) */
#define TIMER0_CFG_R                (*((volatile uint32_t *)0x40030000))                            /*  pp.976      GPTM Configuration */
#define TIMER0_TAMR_R               (*((volatile uint32_t *)0x40030004))                            /*  pp.977      GPTM Timer A Mode */
#define TIMER0_TBMR_R               (*((volatile uint32_t *)0x40030008))                            /*  pp.982      GPTM Timer B Mode */
#define TIMER0_CTL_R                (*((volatile uint32_t *)0x4003000C))                            /*  pp.986      GPTM Control */
#define TIMER0_RIS_R                (*((volatile uint32_t *)0x4003001C))                            /*  pp.996      GPTM Raw Interrupt Status */
#define TIMER0_ICR_R                (*((volatile uint32_t *)0x40030024))                            /*  pp.1002     GPTM Interrupt Clear */
#define TIMER0_TAILR_R              (*((volatile uint32_t *)0x40030028))                            /*  pp.1004     GPTM Timer A Interval Load */
#define TIMER0_TBILR_R              (*((volatile uint32_t *)0x4003002C))                            /*  pp.1005     GPTM Timer B Interval Load */
#define TIMER0_TAPR_R               (*((volatile uint32_t *)0x40030038))                            /*  pp.1008     GPTM Timer A Prescale */
#define TIMER0_TBPR_R               (*((volatile uint32_t *)0x4003003C))                            /*  pp.1009     GPTM Timer B Prescale */


/************************************************
 *  Bit fields
 */
    //  Bit fields in the TIMER_RIS register                                                            pp.996
#define TIMER_RIS_TBTORIS           0x00000100                                                      /*  GPTM Timer B Time-Out Raw Interrupt */
#define TIMER_RIS_TATORIS           0x00000001                                                      /*  GPTM Timer A Time-Out Raw Interrupt */


/**************************************************************************************************
 *  Prototipos de funciones
 */

void GPTM0A_OneShot_Init(uint32_t LoadValue);                               /*  Inicialización y configuración del temporizador GPTM0 (subtimer A) en modo one-shot */
void GPTM0B_OneShot_Init(uint16_t LoadValue, uint8_t PrescalerValue);                               /*  Inicialización y configuración del temporizador GPTM0 (subtimer B) en modo one-shot */


#endif                                                                                              /*  GPTM_H */
