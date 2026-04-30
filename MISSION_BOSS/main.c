/**
 *  LEDs
 *  D1 -> Modo MASTER / Sends to MASTER
 *  D2 -> Receive from MASTER
 *  D3 -> Modo SUPERVISOR / Sends to SUPERVISOR
 *  D4 -> Receive from SUPERVISOR
 *
 *  UART SUPERVISOR
 *      UART4
 *      Rx (PK0)    Logic 3
 *      Tx (PK1)    Logic 2
 *
 *  UART MASTER
 *      UART7
 *      Rx (PC4)    Logic 1
 *      Tx (PC5)    Logic 0
 */


/**************************************************************************************************
 *  Archivos de cabecera
 */

#include <stdint.h>                                                                                 /*  Tipos enteros con tamaños fijos */
#include "GPIO.h"                                                                                   /*  Archivo de cabecera del módulo GPIO */
#include "GPTM.h"                                                                                   /*  Archivo de cabecera del módulo GPTM */
#include "NVIC.h"                                                                                   /*  Archivo de cabecera del módulo NVIC */
#include "SYSCTL.h"                                                                                 /*  Archivo de cabecera del módulo SYSCTL */
#include "SysTick.h"                                                                                /*  Archivo de cabecera del módulo SysTick */
#include "UART.h"                                                                                   /*  Archivo de cabecera del módulo UART */


/**************************************************************************************************
 *  Variables globales
 */

uint32_t Bounce_Delay = 200000;                                                                     /*  Valor de carga del SysTick para un retardo de rebote de 50ms (f = 4MHz) */
int MODE = 0;


/**************************************************************************************************
 *  Función principal
 */

int main(void) {

    GPIO_PortF_Init();                                                                              /*  Inicialización y configuración del puerto GPIO F */
    GPIO_PortJ_Init();                                                                              /*  Inicialización y configuración del puerto GPIO J */
    GPIO_PortN_Init();                                                                              /*  Inicialización y configuración del puerto GPIO N */
    UART0_Init();                                                                                   /*  Inicialización y configuración del UART0 */
    UART4_Init();                                                                                   /*  Inicialización y configuración del UART4 */
    UART7_Init();                                                                                   /*  Inicialización y configuración del UART7 */

    /** Encender led D1 (Modo MASTER / Sends to MASTER) */
    GPIO_PORTN_DATA_R |= 0x02;

    while (1) {}
}
