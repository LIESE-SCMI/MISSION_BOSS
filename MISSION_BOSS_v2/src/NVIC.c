/**************************************************************************************************
 *  Universidad Nacional Autónoma de México (UNAM)
 *  Facultad de Ingeniería | Departamento de Electrónica
 * 
 *  Autor:          M.I. Christo Aldair Lara Tenorio
 * 
 *  Descripción:    Sistema que simula al MISSION BOSS para pruebas funcionales de integración del
 *                  GuaraniSat-2. 
 * 
 *  Archivo:        Archivo fuente del módulo NVIC
 * 
 *  Tarjeta de desarrollo:  EK-TM4C1294XL Evaluation board
 ***********************************************/


/**************************************************************************************************
 *  Archivos de cabecera
 */

#include "inc/GPIO.h"                                                                             	/*  Archivo de cabecera del módulo GPIO */
#include "inc/NVIC.h"                                                                               /*  Archivo de cabecera del módulo NVIC */
#include "inc/UART.h"                                                                               /*  Archivo de cabecera del módulo UART */


/**************************************************************************************************
 *  Variables externas (parámetros)
 */

extern uint8_t PC_DataReceived_SCMI_SUBSYSTEM;

extern uint8_t PC_DataReceived_SUBSYSTEM_ID;
extern uint8_t PC_DataReceived_COMMAND_ID;
extern uint8_t PC_DataReceived_DATA_SIZE;
extern uint8_t PC_DataReceived_DATA[39];
extern uint8_t PC_DataReceived_CRC_MSB;
extern uint8_t PC_DataReceived_CRC_LSB;
extern uint8_t PC_DataReceived_STOP_BYTE;

extern uint8_t SUPERVISOR_DataReceived_SUBSYSTEM_ID;
extern uint8_t SUPERVISOR_DataReceived_COMMAND_ID;
extern uint8_t SUPERVISOR_DataReceived_DATA_SIZE;
extern uint8_t SUPERVISOR_DataReceived_DATA[39];
extern uint8_t SUPERVISOR_DataReceived_CRC_MSB;
extern uint8_t SUPERVISOR_DataReceived_CRC_LSB;
extern uint8_t SUPERVISOR_DataReceived_STOP_BYTE;

extern uint8_t MASTER_DataReceived_SUBSYSTEM_ID;
extern uint8_t MASTER_DataReceived_COMMAND_ID;
extern uint8_t MASTER_DataReceived_DATA_SIZE;
extern uint8_t MASTER_DataReceived_DATA[39];
extern uint8_t MASTER_DataReceived_CRC_MSB;
extern uint8_t MASTER_DataReceived_CRC_LSB;
extern uint8_t MASTER_DataReceived_STOP_BYTE;


/**************************************************************************************************
 *  Funciones
 */

/************************************************
 *  Función:        UART0_Handler
 * 
 *  Descripción:    Rutina de servicio de interrupción (ISR) del UART0.
 */

void UART0_Handler(void) {

    /** Validación del comando recibido */
    PC_DataReceived_SCMI_SUBSYSTEM = (UART0_DR_R & 0xFF);
    PC_DataReceived_SUBSYSTEM_ID = (UART0_DR_R & 0xFF);
    while (UART0_FR_R & UART_FR_RXFE) {}
    PC_DataReceived_COMMAND_ID = (UART0_DR_R & 0xFF);
    while (UART0_FR_R & UART_FR_RXFE) {}
    PC_DataReceived_DATA_SIZE = (UART0_DR_R & 0xFF);

    int i = 0;
    for (i = 0; i < PC_DataReceived_DATA_SIZE; i++) {
        while (UART0_FR_R & UART_FR_RXFE) {}
        PC_DataReceived_DATA[i] = (UART0_DR_R & 0xFF);
    }

    while (UART0_FR_R & UART_FR_RXFE) {}
    PC_DataReceived_CRC_MSB = (UART0_DR_R & 0xFF);
    while (UART0_FR_R & UART_FR_RXFE) {}
    PC_DataReceived_CRC_LSB = (UART0_DR_R & 0xFF);
    while (UART0_FR_R & UART_FR_RXFE) {}
    PC_DataReceived_STOP_BYTE = (UART0_DR_R & 0xFF);

    /** Limpieza de la bandera de interrupción */
    UART0_ICR_R = UART_ICR_RXIC;                                                                    /*  UART0 => RXIC: Receive Interrupt Clear -> RXRIS bit (UARTRIS) and RXMIS bit (UARTMIS) cleared */

    /** Envío de la trama al SCMI */
    if (PC_DataReceived_SCMI_SUBSYSTEM == 0xCE) {
        uint8_t j;
        while (UART4_FR_R & UART_FR_TXFF) {}
        UART4_DR_R = (PC_DataReceived_SUBSYSTEM_ID & UART_DR_DATA_M);
        while (UART4_FR_R & UART_FR_TXFF) {}
        UART4_DR_R = (PC_DataReceived_COMMAND_ID & UART_DR_DATA_M);
        while (UART4_FR_R & UART_FR_TXFF) {}
        UART4_DR_R = (PC_DataReceived_DATA_SIZE & UART_DR_DATA_M);

        for (j = 0; j < PC_DataReceived_DATA_SIZE; j++) {
            while (UART4_FR_R & UART_FR_TXFF) {}
            UART4_DR_R = (PC_DataReceived_DATA[j] & UART_DR_DATA_M);
        }

        while (UART4_FR_R & UART_FR_TXFF) {}
        UART4_DR_R = (PC_DataReceived_CRC_MSB & UART_DR_DATA_M);
        while (UART4_FR_R & UART_FR_TXFF) {}
        UART4_DR_R = (PC_DataReceived_CRC_LSB & UART_DR_DATA_M);
        while (UART4_FR_R & UART_FR_TXFF) {}
        UART4_DR_R = (PC_DataReceived_STOP_BYTE & UART_DR_DATA_M);
    }

    if (PC_DataReceived_SCMI_SUBSYSTEM == 0xCD) {
        uint8_t j;
        while (UART7_FR_R & UART_FR_TXFF) {}
        UART7_DR_R = (PC_DataReceived_SUBSYSTEM_ID & UART_DR_DATA_M);
        while (UART7_FR_R & UART_FR_TXFF) {}
        UART7_DR_R = (PC_DataReceived_COMMAND_ID & UART_DR_DATA_M);
        while (UART7_FR_R & UART_FR_TXFF) {}
        UART7_DR_R = (PC_DataReceived_DATA_SIZE & UART_DR_DATA_M);

        for (j = 0; j < PC_DataReceived_DATA_SIZE; j++) {
            while (UART7_FR_R & UART_FR_TXFF) {}
            UART7_DR_R = (PC_DataReceived_DATA[j] & UART_DR_DATA_M);
        }

        while (UART7_FR_R & UART_FR_TXFF) {}
        UART7_DR_R = (PC_DataReceived_CRC_MSB & UART_DR_DATA_M);
        while (UART7_FR_R & UART_FR_TXFF) {}
        UART7_DR_R = (PC_DataReceived_CRC_LSB & UART_DR_DATA_M);
        while (UART7_FR_R & UART_FR_TXFF) {}
        UART7_DR_R = (PC_DataReceived_STOP_BYTE & UART_DR_DATA_M);
    }
}

/************************************************
 *  Función:        UART4_Handler
 * 
 *  Descripción:    Rutina de servicio de interrupción (ISR) del UART4.
 */

void UART4_Handler(void) {

    /** Validación del comando recibido */
    SUPERVISOR_DataReceived_SUBSYSTEM_ID = (UART4_DR_R & 0xFF);
    SUPERVISOR_DataReceived_COMMAND_ID = (UART4_FR_R & 0xFF);
    while (UART4_FR_R & UART_FR_RXFE) {}
    SUPERVISOR_DataReceived_DATA_SIZE = (UART4_FR_R & 0xFF);

    int i = 0;
    for (i = 0; i < SUPERVISOR_DataReceived_DATA_SIZE; i++) {
        while (UART4_FR_R & UART_FR_RXFE) {}
        SUPERVISOR_DataReceived_DATA[i] = (UART4_FR_R & 0xFF);
    }

    while (UART4_FR_R & UART_FR_RXFE) {}
    SUPERVISOR_DataReceived_CRC_MSB = (UART4_FR_R & 0xFF);
    while (UART4_FR_R & UART_FR_RXFE) {}
    SUPERVISOR_DataReceived_CRC_LSB = (UART4_FR_R & 0xFF);
    while (UART4_FR_R & UART_FR_RXFE) {}
    SUPERVISOR_DataReceived_STOP_BYTE = (UART4_FR_R & 0xFF);

    /** Limpieza de la bandera de interrupción */
    UART4_ICR_R = UART_ICR_RXIC;                                                                    /*  UART0 => RXIC: Receive Interrupt Clear -> RXRIS bit (UARTRIS) and RXMIS bit (UARTMIS) cleared */

    /** Envío de la trama al PC */
    uint8_t j;
    while (UART4_FR_R & UART_FR_TXFF) {}
    UART4_DR_R = (SUPERVISOR_DataReceived_SUBSYSTEM_ID & UART_DR_DATA_M);
    while (UART4_FR_R & UART_FR_TXFF) {}
    UART4_DR_R = (SUPERVISOR_DataReceived_COMMAND_ID & UART_DR_DATA_M);
    while (UART4_FR_R & UART_FR_TXFF) {}
    UART4_DR_R = (SUPERVISOR_DataReceived_DATA_SIZE & UART_DR_DATA_M);

    for (j = 0; j < SUPERVISOR_DataReceived_DATA_SIZE; j++) {
        while (UART4_FR_R & UART_FR_TXFF) {}
        UART4_DR_R = (SUPERVISOR_DataReceived_DATA[j] & UART_DR_DATA_M);
    }

    while (UART4_FR_R & UART_FR_TXFF) {}
    UART4_DR_R = (SUPERVISOR_DataReceived_CRC_MSB & UART_DR_DATA_M);
    while (UART4_FR_R & UART_FR_TXFF) {}
    UART4_DR_R = (SUPERVISOR_DataReceived_CRC_LSB & UART_DR_DATA_M);
    while (UART4_FR_R & UART_FR_TXFF) {}
    UART4_DR_R = (SUPERVISOR_DataReceived_STOP_BYTE & UART_DR_DATA_M);
}

/************************************************
 *  Función:        UART7_Handler
 * 
 *  Descripción:    Rutina de servicio de interrupción (ISR) del UART7.
 */

void UART7_Handler(void) {

    /** Validación del comando recibido */
    MASTER_DataReceived_SUBSYSTEM_ID = (UART7_DR_R & 0xFF);
    MASTER_DataReceived_COMMAND_ID = (UART7_FR_R & 0xFF);
    while (UART7_FR_R & UART_FR_RXFE) {}
    MASTER_DataReceived_DATA_SIZE = (UART7_FR_R & 0xFF);

    int i = 0;
    for (i = 0; i < MASTER_DataReceived_DATA_SIZE; i++) {
        while (UART7_FR_R & UART_FR_RXFE) {}
        MASTER_DataReceived_DATA[i] = (UART7_FR_R & 0xFF);
    }

    while (UART7_FR_R & UART_FR_RXFE) {}
    MASTER_DataReceived_CRC_MSB = (UART7_FR_R & 0xFF);
    while (UART7_FR_R & UART_FR_RXFE) {}
    MASTER_DataReceived_CRC_LSB = (UART7_FR_R & 0xFF);
    while (UART7_FR_R & UART_FR_RXFE) {}
    MASTER_DataReceived_STOP_BYTE = (UART7_FR_R & 0xFF);

    /** Limpieza de la bandera de interrupción */
    UART7_ICR_R = UART_ICR_RXIC;                                                                    /*  UART0 => RXIC: Receive Interrupt Clear -> RXRIS bit (UARTRIS) and RXMIS bit (UARTMIS) cleared */

    /** Envío de la trama al PC */
    uint8_t j;
    while (UART7_FR_R & UART_FR_TXFF) {}
    UART7_DR_R = (MASTER_DataReceived_SUBSYSTEM_ID & UART_DR_DATA_M);
    while (UART7_FR_R & UART_FR_TXFF) {}
    UART7_DR_R = (MASTER_DataReceived_COMMAND_ID & UART_DR_DATA_M);
    while (UART7_FR_R & UART_FR_TXFF) {}
    UART7_DR_R = (MASTER_DataReceived_DATA_SIZE & UART_DR_DATA_M);

    for (j = 0; j < MASTER_DataReceived_DATA_SIZE; j++) {
        while (UART7_FR_R & UART_FR_TXFF) {}
        UART7_DR_R = (MASTER_DataReceived_DATA[j] & UART_DR_DATA_M);
    }

    while (UART7_FR_R & UART_FR_TXFF) {}
    UART7_DR_R = (MASTER_DataReceived_CRC_MSB & UART_DR_DATA_M);
    while (UART7_FR_R & UART_FR_TXFF) {}
    UART7_DR_R = (MASTER_DataReceived_CRC_LSB & UART_DR_DATA_M);
    while (UART7_FR_R & UART_FR_TXFF) {}
    UART7_DR_R = (MASTER_DataReceived_STOP_BYTE & UART_DR_DATA_M);
}
