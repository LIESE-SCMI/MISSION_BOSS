/**************************************************************************************************
 *  Archivo:        Archivo fuente del módulo GPTM
 * 
 *  Tarjeta de desarrollo:  EK-TM4C1294XL Evaluation board
 ***********************************************/


/**************************************************************************************************
 *  Archivos de cabecera
 */

#include "GPTM.h"                                                                                   /*  Archivo de cabecera del módulo GPTM */
#include "SYSCTL.h"                                                                                 /*  Archivo de cabecera del módulo SYSCTL */


/**************************************************************************************************
 *  Variables externas (parámetros)
 */


/**************************************************************************************************
 *  Funciones
 */

/************************************************
 *  Función:        GPTM0A_OneShot_Init
 * 
 *  Descripción:    Inicialización y configuración del temporizador GPTM0 (subtimer A) en modo one-shot.
 */

void GPTM0A_OneShot_Init(uint32_t LoadValue) {

    /**     Habilitar la señal de reloj del GPTM y esperar a que se estabilice el reloj. */
    SYSCTL_RCGCTIMER_R |= 0x01;                                                                     /*  R0: 16/32-Bit GPTM0 Run Mode Clock Gating Control -> Enabled */
    while (!(SYSCTL_PRTIMER_R & 0x01)) {}                                                           /*  R0: 16/32-Bit GPTM0 Peripheral Ready -> 16/32-Bit GPTM2 is ready for access */

    /** 1.  Asegurar que el GPTM está deshabilitado. */
    TIMER0_CTL_R &= ~0x01;                                                                          /*  GPTM0 => TAEN: GPTM Timer A Enable -> Disabled */

    /** 2.  Configurar la operación global del GPTM. */
    TIMER0_CFG_R = 0x00;                                                                            /*  GPTM0 => GPTMCFG: GPTM Configuration -> 32-bit timer configuration */

    /** 3.  Seleccionar el modo de operación del GPTM. */
    TIMER0_TAMR_R |= 0x01;                                                                          /*  GPTM0 => TAMR: GPTM Timer A Mode -> One-Shot Timer mode */

    /** 4.  De manera opcional, configurar el modo de operación del GPTM. */
    TIMER0_TAMR_R = (TIMER0_TAMR_R & ~0x00F0) | (0x0 << 4);
        /** (TIMER0_TAMR_R & ~0x00F0)   ->  Máscara para limpiar los campos relacionados a la configuración del temporizador en modo one-shot.
         *  (0x0 << 4)      Campos de configuración:
         *      TASNAPS = 0 ->  GPTM0 => TASNAPS: GPTM Timer A Snap-Shot Mode -> Snap-shot mode is disabled
         *      TAWOT   = 0 ->  GPTM0 => TAWOT: GPTM Timer A Wait-on-Trigger -> Timer A begins counting as soon as it is enabled
         *      TAMIE   = 0 ->  GPTM0 => TAMIE: GPTM Timer A Match Interrupt Enable -> The match interrupt is disabled for match events
         *      TACDIR  = 0 ->  GPTM0 => TACDIR: GPTM Timer A Match Count Direction -> The timer counts down
         */

    /** 5.  Cargar el valor inicial del GPTM y el preescalador. */
    TIMER0_TAILR_R = (16000 * LoadValue);                                                           /*  GPTM0 => TAILR: GPTM Timer A Interval Load Register -> Loads the counter for Timer A */

    /** 6.  Si se utiliza interrupción, desenmascarar la interrupción local. */
    /** 7.  Habilitar el temporizador para que comience con la cuenta. */
    TIMER0_CTL_R |= 0x01;                                                                           /*  GPTM0 => TAEN: GPTM Timer A Enable -> Enabled and begins counting */

    /** 8.  Si no se utiliza interrupción, monitorear (por polling) la bandera de interrupción cruda del time-out. */
    while (!(TIMER0_RIS_R & TIMER_RIS_TATORIS)) {}                                                  /*  GPTM0 => TATORIS: GPTM Timer A Time-Out Raw Interrupt -> Timer A has timed out */

    /** Limpiar la bandera de estado de interrupción cruda. */
    TIMER0_ICR_R |= 0x01;                                                                           /*  GPTM0 => TATOCINT: GPTM Timer A Time-Out Raw Interrupt -> TATORIS bit (GPTMRIS) and TATOMIS bit (GPTMMIS) cleared */

}

/************************************************
 *  Función:        GPTM0B_OneShot_Init
 * 
 *  Descripción:    Inicialización y configuración del temporizador GPTM0 (subtimer B) en modo one-shot.
 */

void GPTM0B_OneShot_Init(uint16_t LoadValue, uint8_t PrescalerValue) {

    /**     Habilitar la señal de reloj del GPTM y esperar a que se estabilice el reloj. */
    SYSCTL_RCGCTIMER_R |= 0x01;                                                                     /*  R0: GPTM0 Run Mode Clock Gating Control -> Enabled */
    while (!(SYSCTL_PRTIMER_R & 0x01)) {}                                                           /*  R0: GPTM0 Peripheral Ready -> GPIO PortJ is ready for access */

    /** 1.  Asegurar que el GPTM está deshabilitado. */
    TIMER0_CTL_R &= ~0x0100;                                                                        /*  GPTM0 => TBEN: GPTM Timer B Enable -> Disabled */

    /** 2.  Configurar la operación global del GPTM. */
    TIMER0_CFG_R = 0x04;                                                                            /*  GPTM0 => GPTMCFG: GPTM Configuration -> 16-bit timer configuration */

    /** 3.  Seleccionar el modo de operación del GPTM. */
    TIMER0_TBMR_R |= 0x01;                                                                          /*  GPTM0 => TBMR: GPTM Timer B Mode -> One-Shot Timer mode */

    /** 4.  De manera opcional, configurar el modo de operación del GPTM. */
    TIMER0_TBMR_R = (TIMER0_TBMR_R & ~0x00F0) | (0x0 << 4);
        /** (TIMER0_TBMR_R & ~0x00F0)   ->  Máscara para limpiar los campos relacionados a la configuración del temporizador en modo one-shot.
         *  (0x0 << 4)      Campos de configuración:
         *      TBSNAPS = 0 ->  GPTM0 => TBSNAPS: GPTM Timer B Snap-Shot Mode -> Snap-shot mode is disabled
         *      TBWOT   = 0 ->  GPTM0 => TBWOT: GPTM Timer B Wait-on-Trigger -> Timer B begins counting as soon as it is enabled
         *      TBMIE   = 0 ->  GPTM0 => TBMIE: GPTM Timer B Match Interrupt Enable -> The match interrupt is disabled for match events
         *      TBCDIR  = 0 ->  GPTM0 => TBCDIR: GPTM Timer B Match Count Direction -> The timer counts down
         */

    /** 5.  Cargar el valor inicial del GPTM y el preescalador. */
    TIMER0_TBILR_R = LoadValue;                                                                     /*  GPTM0 => TBILR: GPTM Timer B Interval Load Register -> Loads the counter for Timer B */
    TIMER0_TBPR_R = PrescalerValue;                                                                 /*  GPTM0 => TBPSR: GPTM Timer B Prescale -> Loads the prescaler for Timer B */

    /** 6.  Si se utiliza interrupción, desenmascarar la interrupción local. */

}
