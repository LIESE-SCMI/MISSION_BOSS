/**************************************************************************************************
 *  Archivo:        Archivo fuente del módulo NVIC
 * 
 *  Tarjeta de desarrollo:  EK-TM4C1294XL Evaluation board
 ***********************************************/


/**************************************************************************************************
 *  Archivos de cabecera
 */

#include "GPIO.h"                                                                                   /*  Archivo de cabecera del módulo GPIO */
#include "NVIC.h"                                                                                   /*  Archivo de cabecera del módulo NVIC */
#include "SysTick.h"                                                                                /*  Archivo de cabecera del módulo SysTick */
#include "UART.h"                                                                                   /*  Archivo de cabecera del módulo UART */


/**************************************************************************************************
 *  Variables externas (parámetros)
 */

extern uint32_t Bounce_Delay;                                                                       /*  Valor de carga del SysTick para el retardo de rebote */
extern uint8_t MODE;


/**************************************************************************************************
 *  Funciones
 */

/************************************************
 *  Función:        UART0_Handler
 * 
 *  Descripción:    Rutina de servicio de interrupción (ISR) del UART0.
 */

void UART0_Handler(void) {

    /** Limpiar la bandera de interrupción. */
    UART0_ICR_R |= 0x10;                                                                            /*  UART0 => RXIC: Receive Interrupt Clear -> RXRIS bit (UARTRIS) and RXMIS bit (UARTMIS) cleared */

    /** Lectura de los datos recibido. */
    int UART_DataReceived[2];
    UART_DataReceived[0] = (UART0_DR_R & 0xFF);                                                     /*  UART0 => DATA: Data Transmitted or Received -> Reads the DATA that was received by the UART */
    UART_DataReceived[1] = (UART0_DR_R & 0xFF);                                                     /*  UART0 => DATA: Data Transmitted or Received -> Reads the DATA that was received by the UART */

    if (MODE == 0) {
        GPIO_PORTN_DATA_R &= ~0x02;
        /** Envío de los datos recibidos por UART7. */
        UART7_DR_R = (UART_DataReceived[0] & 0xFF);
        UART7_DR_R = (UART_DataReceived[1] & 0xFF);
        if (!(UART0_FR_R & 0x00000010)) {
            UART7_DR_R = (UART0_DR_R & 0xFF);
        }
        GPIO_PORTN_DATA_R |= 0x02;
    }

    if (MODE == 1) {
        GPIO_PORTF_AHB_DATA_R &= ~0x10;
        /** Envío de los datos recibidos por UART4. */
        UART4_DR_R = (UART_DataReceived[0] & 0xFF);
        UART4_DR_R = (UART_DataReceived[1] & 0xFF);
        if (!(UART0_FR_R & 0x00000010)) {
            UART4_DR_R = (UART0_DR_R & 0xFF);
        }
        GPIO_PORTF_AHB_DATA_R |= 0x10;
    }
}


/************************************************
 *  Función:        UART4_Handler (SUPERVISOR)
 * 
 *  Descripción:    Rutina de servicio de interrupción (ISR) del UART4.
 */

void UART4_Handler(void) {

    /** Limpiar la bandera de interrupción. */
    UART4_ICR_R |= 0x10;                                                                            /*  UART4 => RXIC: Receive Interrupt Clear -> RXRIS bit (UARTRIS) and RXMIS bit (UARTMIS) cleared */

    GPIO_PORTF_AHB_DATA_R |= 0x01;                                                                  /*  LED D4 -> on */

    /** Lectura de los datos recibido. */
    int UART_DataReceived[2];
    UART_DataReceived[0] = (UART4_DR_R & 0xFF);                                                     /*  UART4 => DATA: Data Transmitted or Received -> Reads the DATA that was received by the UART */
    UART_DataReceived[1] = (UART4_DR_R & 0xFF);                                                     /*  UART4 => DATA: Data Transmitted or Received -> Reads the DATA that was received by the UART */

    /** Envío de los datos recibidos por UART0. */
    UART0_DR_R = (UART_DataReceived[0] & 0xFF);
    UART0_DR_R = (UART_DataReceived[1] & 0xFF);

    if (!(UART4_FR_R & 0x00000010)) {
        UART0_DR_R = (UART4_DR_R & 0xFF);
    }

    GPIO_PORTF_AHB_DATA_R &= ~0x01;                                                                 /*  LED D4 -> off */

}


/************************************************
 *  Función:        UART7_Handler (MASTER)
 * 
 *  Descripción:    Rutina de servicio de interrupción (ISR) del UART7.
 */

void UART7_Handler(void) {

    /** Limpiar la bandera de interrupción. */
    UART7_ICR_R |= 0x10;                                                                            /*  UART7 => RXIC: Receive Interrupt Clear -> RXRIS bit (UARTRIS) and RXMIS bit (UARTMIS) cleared */

    GPIO_PORTN_DATA_R |= 0x01;                                                                      /*  LED D2 -> on */

    /** Lectura de los datos recibido. */
    int UART_DataReceived[2];
    UART_DataReceived[0] = (UART7_DR_R & 0xFF);                                                     /*  UART7 => DATA: Data Transmitted or Received -> Reads the DATA that was received by the UART */
    UART_DataReceived[1] = (UART7_DR_R & 0xFF);                                                     /*  UART7 => DATA: Data Transmitted or Received -> Reads the DATA that was received by the UART */

    /** Envío de los datos recibidos por UART0. */
    UART0_DR_R = (UART_DataReceived[0] & 0xFF);
    UART0_DR_R = (UART_DataReceived[1] & 0xFF);

    if (!(UART7_FR_R & 0x00000010)) {
        UART0_DR_R = (UART7_DR_R & 0xFF);
    }

    GPIO_PORTN_DATA_R &= ~0x01;                                                                     /*  LED D2 -> off */

}


/************************************************
 *  Función:        GPIO_PortJ_Handler
 * 
 *  Descripción:    Rutina de servicio de interrupción (ISR) del GPIO PortJ.
 */

void GPIO_PortJ_Handler(void) {

    /** Limpiar la bandera de interrupción. */
    GPIO_PORTJ_AHB_ICR_R = (GPIO_PORTJ_AHB_MIS_R & 0x03);                                           /*  PortJ => IC: Interrupt Clear -> Interrupt cleared */

    /** Retardo de rebote. */
    SysTick_Init_OneShot (Bounce_Delay);                                                            /*  Inicialización y configuración del SysTick en modo one-shot */
    while (!(NVIC_ST_CTRL_R & NVIC_ST_CTRL_COUNT)) {}                                               /*  SysTick => COUNT: Count Flag -> The SysTick timer has counted to 0 */

    /** Confirmar qué botón se presionó. */
    if (!(GPIO_PORTJ_AHB_DATA_R & 0x01)) {                                                          /*  IF (SW1 -> on) */
        /** Apagar todos los LED. */
        GPIO_PORTN_DATA_R &= ~0x03;
        GPIO_PORTF_AHB_DATA_R &= ~0x11;
        /** Encender led D1 (Modo MASTER / Sends to MASTER) */
        GPIO_PORTN_DATA_R |= 0x02;
        MODE = 0;

    }

    if (!(GPIO_PORTJ_AHB_DATA_R & 0x02)) {                                                          /*  IF (SW2 -> on) */
        // UART0_DR_R = (UART_Message & 0xFF);                                                      /*  UART0 => DATA: Data Transmitted or Received -> Loads DATA to be transmitted via UART */

        /** Apagar todos los LED. */
        GPIO_PORTN_DATA_R &= ~0x03;
        GPIO_PORTF_AHB_DATA_R &= ~0x11;
        /** Encender led D3 (Modo SUPERVISOR / Sends to SUPERVISOR) */
        GPIO_PORTF_AHB_DATA_R |= 0x10;
        MODE = 1;
    }

}
