/**************************************************************************************************
 *  Universidad Nacional Autónoma de México (UNAM)
 *  Facultad de Ingeniería | Departamento de Electrónica
 * 
 *  Autor:          M.I. Christo Aldair Lara Tenorio
 * 
 *  Descripción:    Sistema que simula al MISSION BOSS para pruebas funcionales de integración del
 *                  GuaraniSat-2. 
 * 
 *  Circuito:
 *      UART4 -> Supervisor
 *          Rx (PK0)    Logic Channel 3
 *          Tx (PK1)    Logic Channel 2
 *      UART7 -> Master
 *          Rx (PC4)    Logic Channel 1
 *          Tx (PC5)    Logic Channel 0
 * 
 *  Tarjeta de desarrollo:  EK-TM4C1294XL Evaluation board
 ***********************************************/


/**************************************************************************************************
 *  Archivos de cabecera
 */

#include <stdint.h>                                                                                 /*  Tipos enteros con tamaños fijos */
#include "inc/GPIO.h"                                                                             	/*  Archivo de cabecera del módulo GPIO */
#include "inc/NVIC.h"                                                                               /*  Archivo de cabecera del módulo NVIC */
#include "inc/SYSCTL.h"                                                                             /*  Archivo de cabecera del módulo SYSCTL */
#include "inc/UART.h"                                                                               /*  Archivo de cabecera del módulo UART */


/**************************************************************************************************
 *  Variables globales
 */

uint8_t PC_DataReceived_SCMI_SUBSYSTEM;

uint8_t PC_DataReceived_SUBSYSTEM_ID;
uint8_t PC_DataReceived_COMMAND_ID;
uint8_t PC_DataReceived_DATA_SIZE;
uint8_t PC_DataReceived_DATA[39];
uint8_t PC_DataReceived_CRC_MSB;
uint8_t PC_DataReceived_CRC_LSB;
uint8_t PC_DataReceived_STOP_BYTE;

uint8_t SUPERVISOR_DataReceived_SUBSYSTEM_ID;
uint8_t SUPERVISOR_DataReceived_COMMAND_ID;
uint8_t SUPERVISOR_DataReceived_DATA_SIZE;
uint8_t SUPERVISOR_DataReceived_DATA[39];
uint8_t SUPERVISOR_DataReceived_CRC_MSB;
uint8_t SUPERVISOR_DataReceived_CRC_LSB;
uint8_t SUPERVISOR_DataReceived_STOP_BYTE;

uint8_t MASTER_DataReceived_SUBSYSTEM_ID;
uint8_t MASTER_DataReceived_COMMAND_ID;
uint8_t MASTER_DataReceived_DATA_SIZE;
uint8_t MASTER_DataReceived_DATA[39];
uint8_t MASTER_DataReceived_CRC_MSB;
uint8_t MASTER_DataReceived_CRC_LSB;
uint8_t MASTER_DataReceived_STOP_BYTE;


/**************************************************************************************************
 *  Función principal
 */

int main(void) {

    UART0_Init(9600, UART_PARITY_NONE, UART_RX_FIFO_LEVEL_1_8);                                     /** PC UART */
    UART4_Init(9600, UART_PARITY_EVEN, UART_RX_FIFO_LEVEL_1_8);                                     /** SUPERVISOR UART */
    UART7_Init(9600, UART_PARITY_NONE, UART_RX_FIFO_LEVEL_1_8);                                     /** MASTER UART */

    while (1) {}
}
