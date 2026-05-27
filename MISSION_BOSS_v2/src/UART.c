/**************************************************************************************************
 *  Universidad Nacional Autónoma de México (UNAM)
 *  Facultad de Ingeniería | Departamento de Electrónica
 * 
 *  Autor:          M.I. Christo Aldair Lara Tenorio
 * 
 *  Descripción:    Sistema que simula al MISSION BOSS para pruebas funcionales de integración del
 *                  GuaraniSat-2. 
 * 
 *  Archivo:        Archivo fuente del módulo UART
 * 
 *  Tarjeta de desarrollo:  EK-TM4C1294XL Evaluation board
 ***********************************************/


/**************************************************************************************************
 *  Archivos de cabecera
 */

#include "inc/GPIO.h"                                                                               /*  Archivo de cabecera del módulo GPIO */
#include "inc/NVIC.h"                                                                               /*  Archivo de cabecera del módulo NVIC */
#include "inc/SYSCTL.h"                                                                             /*  Archivo de cabecera del módulo SYSCTL */
#include "inc/UART.h"                                                                               /*  Archivo de cabecera del módulo UART */


/**************************************************************************************************
 *  Variables externas (parámetros)
 */


/**************************************************************************************************
 *  Constantes privadas
 */

static const uint8_t ACK[] = {0x7E, 0xCD, 0xE0, 0x00, 0x2D, 0x0A};
static const uint8_t NACK_CRC[] = {0x7E, 0xCD, 0xE1, 0x00, 0x2C, 0x0A};
static const uint8_t NACK_CMD[] = {0x7E, 0xCD, 0xE2, 0x00, 0x2F, 0x0A};


/**************************************************************************************************
 *  Funciones
 */

/************************************************
 *  Función:        UART0_Init
 * 
 *  Descripción:    Inicialización y configuración del UART0.
 */

void UART0_Init(uint32_t BaudRate, UART_Parity_t Parity, UART_RxFIFOLevel_t RxFIFOLevel) {

    /** Configuración del GPIO */
    SYSCTL_RCGCGPIO_R |= SYSCTL_RCGCGPIO_R0;                                                        /*  R0: GPIO PortA Run Mode Clock Gating Control -> Enabled */
    while (!(SYSCTL_PRGPIO_R & SYSCTL_PRGPIO_R0)) {}                                                /*  R0: GPIO PortA Peripheral Ready -> GPIO PortA is ready for access */
    GPIO_PORTA_AHB_AFSEL_R |= (GPIO_PIN_1 | GPIO_PIN_0);                                            /*  PortA[1:0] => AFSEL: Alternate Function Select -> Alternate hardware function */
    GPIO_PORTA_AHB_DR2R_R |= (GPIO_PIN_1 | GPIO_PIN_0);                                             /*  PortA[1:0] => DRV2: Output Pad 2-mA Drive Enable -> GPIO pin has 2-mA drive */
    GPIO_PORTA_AHB_SLR_R &= ~(GPIO_PIN_1 | GPIO_PIN_0);                                             /*  PortA[1:0] => SRL: Slew Rate Limit Enable -> Slew rate control is disabled */
    GPIO_PORTA_AHB_PCTL_R = (GPIO_PORTA_AHB_PCTL_R & ~0x000000FF) | (1 << 4) | (1 << 0);            /*  PortA[1:0] => PMC1/0: Port Mux Control 1/0 -> UART0_Rx/UART0_Tx */
    GPIO_PORTA_AHB_DEN_R |= (GPIO_PIN_1 | GPIO_PIN_0);                                              /*  PortA[1:0] => DEN: Digital Enable -> Enabled */

    /** Configuración del UART */
    SYSCTL_RCGCUART_R |= SYSCTL_RCGCUART_R0;                                                        /*  R0: UART0 Run Mode Clock Gating Control -> Enabled */
    while (!(SYSCTL_PRUART_R & SYSCTL_PRUART_R0)) {}                                                /*  R0: UART0 Peripheral Ready -> UART0 is ready for access */
    UART0_CTL_R &= ~UART_CTL_UARTEN;                                                                /*  UART0 => UARTEN: UART Enable -> Disabled */
    UART0_CTL_R &= ~UART_CTL_HSE;                                                                   /*  UART0 => HSE: High-Speed Enable -> UART is clocked using the system clock divided by 16 */
    float BRD = 16000000 / (16 * BaudRate);
    UART0_IBRD_R = (int)(BRD);                                                                      /*  UART0 => DIVINT: Integer Baud-Rate Divisor */
    UART0_FBRD_R = (int)((BRD - (int)(BRD)) * 64 + 0.5);                                            /*  UART0 => DIVFRAC: Fractional Baud-Rate Divisor */
    UART0_LCRH_R |= (UART0_LCRH_R & ~UART_LCRH_WLEN_M) | UART_LCRH_WLEN_8;                          /*  UART0 => WLEN: UART Word Length -> 8 bits */
    UART0_LCRH_R |= UART_LCRH_FEN;                                                                  /*  UART0 => FEN: UART Enable FIFOs -> The transmit and receive FIFO buffers are enabled (FIFO mode) */
    switch (Parity){
        case UART_PARITY_NONE:
            UART0_LCRH_R &= ~UART_LCRH_PEN;                                                         /*  UART0 => PEN: UART Parity Enable -> Parity is disabled and no parity bis is added to the data frame */
            break;
        case UART_PARITY_ODD:
            UART0_LCRH_R |= UART_LCRH_PEN;                                                          /*  UART0 => PEN: UART Parity Enable -> Parity checking and generation is enabled */
            UART0_LCRH_R &= ~UART_LCRH_EPS;                                                         /*  UART0 => EPS: Even Parity Select -> Odd parity generation and checking is enabled */
            break;
        case UART_PARITY_EVEN:
            UART0_LCRH_R |= UART_LCRH_PEN;                                                          /*  UART0 => PEN: UART Parity Enable -> Parity checking and generation is enabled */
            UART0_LCRH_R |= UART_LCRH_EPS;                                                          /*  UART0 => EPS: Even Parity Select -> Even parity generation and checking is enabled */
            break;
    }
    UART0_CC_R = UART_CC_CS_PIOSC;                                                                  /*  UART0 => CS: UART Baud Clock Source -> Alternate clock source as defined by ALTCLKCFG (default: PIOSC) */

    /** Configuración de la interrupción */
    UART0_IFLS_R = (UART0_IFLS_R & ~UART_IFLS_RX_M) | (RxFIFOLevel);                                /*  UART0 => RXIFLSEL: UART Receive Interrupt FIFO Level Select */
    UART0_IM_R |= UART_IM_RXIM;                                                                     /*  UART0 => RXIM: UART Receive Interrupt Mask -> Interrupt unmasked */

    /** Configuración del NVIC */
    NVIC_PRI1_R = ((NVIC_PRI1_R & ~NVIC_PRI1_INT5_M) | (1 << NVIC_PRI1_INT5_S));                    /*  IRQ_5 (UART0) => INTB: Interrupt Priority -> Cleared and set 1 */
    NVIC_EN0_R |= (1 << (5 - 0));                                                                   /*  IRQ_5 (UART0) => INT: Interrupt Enable -> Enabled */

    /** Habilitación del UART */
    UART0_CTL_R |= UART_CTL_UARTEN;                                                                 /*  UART0 => UARTEN: UART Enable -> Enabled */

}

/************************************************
 *  Función:        UART4_Init
 * 
 *  Descripción:    Inicialización y configuración del UART4.
 */

void UART4_Init(uint32_t BaudRate, UART_Parity_t Parity, UART_RxFIFOLevel_t RxFIFOLevel) {

    /** Configuración del GPIO */
    SYSCTL_RCGCGPIO_R |= SYSCTL_RCGCGPIO_R9;                                                        /*  R9: GPIO PortK Run Mode Clock Gating Control -> Enabled */
    while (!(SYSCTL_PRGPIO_R & SYSCTL_PRGPIO_R9)) {}                                                /*  R9: GPIO PortK Peripheral Ready -> GPIO PortA is ready for access */
    GPIO_PORTK_AFSEL_R |= (GPIO_PIN_1 | GPIO_PIN_0);                                                /*  PortK[1:0] => AFSEL: Alternate Function Select -> Alternate hardware function */
    GPIO_PORTK_DR2R_R |= (GPIO_PIN_1 | GPIO_PIN_0);                                                 /*  PortK[1:0] => DRV2: Output Pad 2-mA Drive Enable -> GPIO pin has 2-mA drive */
    GPIO_PORTK_SLR_R &= ~(GPIO_PIN_1 | GPIO_PIN_0);                                                 /*  PortK[1:0] => SRL: Slew Rate Limit Enable -> Slew rate control is disabled */
    GPIO_PORTK_PCTL_R = (GPIO_PORTK_PCTL_R & ~0x000000FF) | (1 << 4) | (1 << 0);                    /*  PortK[1:0] => PMC1/0: Port Mux Control 1/0 -> UART4_Rx/UART4_Tx */
    GPIO_PORTK_DEN_R |= (GPIO_PIN_1 | GPIO_PIN_0);                                                  /*  PortK[1:0] => DEN: Digital Enable -> Enabled */

    /** Configuración del UART */
    SYSCTL_RCGCUART_R |= SYSCTL_RCGCUART_R4;                                                        /*  R4: UART4 Run Mode Clock Gating Control -> Enabled */
    while (!(SYSCTL_PRUART_R & SYSCTL_PRUART_R4)) {}                                                /*  R4: UART4 Peripheral Ready -> UART4 is ready for access */
    UART4_CTL_R &= ~UART_CTL_UARTEN;                                                                /*  UART4 => UARTEN: UART Enable -> Disabled */
    UART4_CTL_R &= ~UART_CTL_HSE;                                                                   /*  UART4 => HSE: High-Speed Enable -> UART is clocked using the system clock divided by 16 */
    float BRD = 16000000 / (16 * BaudRate);
    UART4_IBRD_R = (int)(BRD);                                                                      /*  UART4 => DIVINT: Integer Baud-Rate Divisor */
    UART4_FBRD_R = (int)((BRD - (int)(BRD)) * 64 + 0.5);                                            /*  UART4 => DIVFRAC: Fractional Baud-Rate Divisor */
    UART4_LCRH_R |= (UART4_LCRH_R & ~UART_LCRH_WLEN_M) | UART_LCRH_WLEN_8;                          /*  UART4 => WLEN: UART Word Length -> 8 bits */
    UART4_LCRH_R |= UART_LCRH_FEN;                                                                  /*  UART4 => FEN: UART Enable FIFOs -> The transmit and receive FIFO buffers are enabled (FIFO mode) */
    switch (Parity){
        case UART_PARITY_NONE:
            UART4_LCRH_R &= ~UART_LCRH_PEN;                                                         /*  UART4 => PEN: UART Parity Enable -> Parity is disabled and no parity bis is added to the data frame */
            break;
        case UART_PARITY_ODD:
            UART4_LCRH_R |= UART_LCRH_PEN;                                                          /*  UART4 => PEN: UART Parity Enable -> Parity checking and generation is enabled */
            UART4_LCRH_R &= ~UART_LCRH_EPS;                                                         /*  UART4 => EPS: Even Parity Select -> Odd parity generation and checking is enabled */
            break;
        case UART_PARITY_EVEN:
            UART4_LCRH_R |= UART_LCRH_PEN;                                                          /*  UART4 => PEN: UART Parity Enable -> Parity checking and generation is enabled */
            UART4_LCRH_R |= UART_LCRH_EPS;                                                          /*  UART4 => EPS: Even Parity Select -> Even parity generation and checking is enabled */
            break;
    }
    UART4_CC_R = UART_CC_CS_PIOSC;                                                                  /*  UART4 => CS: UART Baud Clock Source -> Alternate clock source as defined by ALTCLKCFG (default: PIOSC) */

    /** Configuración de la interrupción */
    UART4_IFLS_R = (UART4_IFLS_R & ~UART_IFLS_RX_M) | (RxFIFOLevel);                                /*  UART4 => RXIFLSEL: UART Receive Interrupt FIFO Level Select */
    UART4_IM_R |= UART_IM_RXIM;                                                                     /*  UART4 => RXIM: UART Receive Interrupt Mask -> Interrupt unmasked */

    /** Configuración del NVIC */
    NVIC_PRI14_R = ((NVIC_PRI14_R & ~NVIC_PRI14_INTB_M) | (1 << NVIC_PRI14_INTB_S));                /*  IRQ_57 (UART4) => INTB: Interrupt Priority -> Cleared and set 1 */
    NVIC_EN1_R |= (1 << (57 - 32));                                                                 /*  IRQ_57 (UART4) => INT: Interrupt Enable -> Enabled */

    /** Habilitación del UART */
    UART4_CTL_R |= UART_CTL_UARTEN;                                                                 /*  UART4 => UARTEN: UART Enable -> Enabled */

}

/************************************************
 *  Función:        UART7_Init
 * 
 *  Descripción:    Inicialización y configuración del UART7.
 */

void UART7_Init(uint32_t BaudRate, UART_Parity_t Parity, UART_RxFIFOLevel_t RxFIFOLevel) {

    /** Configuración del GPIO */
    SYSCTL_RCGCGPIO_R |= SYSCTL_RCGCGPIO_R2;                                                        /*  R2: GPIO PortC Run Mode Clock Gating Control -> Enabled */
    while (!(SYSCTL_PRGPIO_R & SYSCTL_PRGPIO_R2)) {}                                                /*  R2: GPIO PortC Peripheral Ready -> GPIO PortA is ready for access */
    GPIO_PORTC_AHB_AFSEL_R |= (GPIO_PIN_5 | GPIO_PIN_4);                                           /*  PortC[5:4] => AFSEL: Alternate Function Select -> Alternate hardware function */
    GPIO_PORTC_AHB_DR2R_R |= (GPIO_PIN_5 | GPIO_PIN_4);                                            /*  PortC[5:4] => DRV2: Output Pad 2-mA Drive Enable -> GPIO pin has 2-mA drive */
    GPIO_PORTC_AHB_SLR_R &= ~(GPIO_PIN_5 | GPIO_PIN_4);                                            /*  PortC[5:4] => SRL: Slew Rate Limit Enable -> Slew rate control is disabled */
    GPIO_PORTC_AHB_PCTL_R = (GPIO_PORTC_AHB_PCTL_R & ~0x00FF0000) | (1 << 20) | (1 << 16);         /*  PortC[5:4] => PMC1/0: Port Mux Control 1/0 -> UART7_Rx/UART7_Tx */
    GPIO_PORTC_AHB_DEN_R |= (GPIO_PIN_5 | GPIO_PIN_4);                                             /*  PortC[5:4] => DEN: Digital Enable -> Enabled */

    /** Configuración del UART */
    SYSCTL_RCGCUART_R |= SYSCTL_RCGCUART_R7;                                                        /*  R7: UART7 Run Mode Clock Gating Control -> Enabled */
    while (!(SYSCTL_PRUART_R & SYSCTL_PRUART_R7)) {}                                                /*  R7: UART7 Peripheral Ready -> UART7 is ready for access */
    UART7_CTL_R &= ~UART_CTL_UARTEN;                                                                /*  UART7 => UARTEN: UART Enable -> Disabled */
    UART7_CTL_R &= ~UART_CTL_HSE;                                                                   /*  UART7 => HSE: High-Speed Enable -> UART is clocked using the system clock divided by 16 */
    float BRD = 16000000 / (16 * BaudRate);
    UART7_IBRD_R = (int)(BRD);                                                                      /*  UART7 => DIVINT: Integer Baud-Rate Divisor */
    UART7_FBRD_R = (int)((BRD - (int)(BRD)) * 64 + 0.5);                                            /*  UART7 => DIVFRAC: Fractional Baud-Rate Divisor */
    UART7_LCRH_R |= (UART7_LCRH_R & ~UART_LCRH_WLEN_M) | UART_LCRH_WLEN_8;                          /*  UART7 => WLEN: UART Word Length -> 8 bits */
    UART7_LCRH_R |= UART_LCRH_FEN;                                                                  /*  UART7 => FEN: UART Enable FIFOs -> The transmit and receive FIFO buffers are enabled (FIFO mode) */
    switch (Parity){
        case UART_PARITY_NONE:
            UART7_LCRH_R &= ~UART_LCRH_PEN;                                                         /*  UART7 => PEN: UART Parity Enable -> Parity is disabled and no parity bis is added to the data frame */
            break;
        case UART_PARITY_ODD:
            UART7_LCRH_R |= UART_LCRH_PEN;                                                          /*  UART7 => PEN: UART Parity Enable -> Parity checking and generation is enabled */
            UART7_LCRH_R &= ~UART_LCRH_EPS;                                                         /*  UART7 => EPS: Even Parity Select -> Odd parity generation and checking is enabled */
            break;
        case UART_PARITY_EVEN:
            UART7_LCRH_R |= UART_LCRH_PEN;                                                          /*  UART7 => PEN: UART Parity Enable -> Parity checking and generation is enabled */
            UART7_LCRH_R |= UART_LCRH_EPS;                                                          /*  UART7 => EPS: Even Parity Select -> Even parity generation and checking is enabled */
            break;
    }
    UART7_CC_R = UART_CC_CS_PIOSC;                                                                  /*  UART7 => CS: UART Baud Clock Source -> Alternate clock source as defined by ALTCLKCFG (default: PIOSC) */

    /** Configuración de la interrupción */
    UART7_IFLS_R = (UART7_IFLS_R & ~UART_IFLS_RX_M) | (RxFIFOLevel);                                /*  UART7 => RXIFLSEL: UART Receive Interrupt FIFO Level Select */
    UART7_IM_R |= UART_IM_RXIM;                                                                     /*  UART7 => RXIM: UART Receive Interrupt Mask -> Interrupt unmasked */

    /** Configuración del NVIC */
    NVIC_PRI15_R = ((NVIC_PRI15_R & ~NVIC_PRI15_INTA_M) | (1 << NVIC_PRI15_INTA_S));                /*  IRQ_60 (UART7) => INTB: Interrupt Priority -> Cleared and set 1 */
    NVIC_EN1_R |= (1 << (60 - 32));                                                                 /*  IRQ_60 (UART7) => INT: Interrupt Enable -> Enabled */

    /** Habilitación del UART */
    UART7_CTL_R |= UART_CTL_UARTEN;                                                                 /*  UART7 => UARTEN: UART Enable -> Enabled */

}







/************************************************
 *  Función:        UART0_Send_ACK
 * 
 *  Descripción:    Envío de ACK por UART0.
 */

// void UART0_Send_ACK(void) {

//     uint32_t i;

//     for (i = 0; i < sizeof(ACK); i++) {
//         while (UART0_FR_R & UART_FR_TXFF) {}
//         UART0_DR_R = (ACK[i] & UART_DR_DATA_M);
//     }
// }

// /************************************************
//  *  Función:        UART0_Send_NACK_CRC
//  * 
//  *  Descripción:    Envío de NACK_CRC por UART0.
//  */

// void UART0_Send_NACK_CRC(void) {

//     uint32_t i;

//     for (i = 0; i < sizeof(NACK_CRC); i++) {
//         while (UART0_FR_R & UART_FR_TXFF) {}
//         UART0_DR_R = (NACK_CRC[i] & UART_DR_DATA_M);
//     }
// }

// /************************************************
//  *  Función:        UART0_Send_NACK_CMD
//  * 
//  *  Descripción:    Envío de NACK_CMD por UART0.
//  */

// void UART0_Send_NACK_CMD(void) {

//     uint32_t i;

//     for (i = 0; i < sizeof(NACK_CMD); i++) {
//         while (UART0_FR_R & UART_FR_TXFF) {}
//         UART0_DR_R = (NACK_CMD[i] & UART_DR_DATA_M);
//     }
// }
