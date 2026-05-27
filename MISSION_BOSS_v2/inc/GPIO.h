/**************************************************************************************************
 *  Universidad Nacional Autónoma de México (UNAM)
 *  Facultad de Ingeniería | Departamento de Electrónica
 * 
 *  Autor:          M.I. Christo Aldair Lara Tenorio
 * 
 *  Descripción:    Sistema que simula al MISSION BOSS para pruebas funcionales de integración del
 *                  GuaraniSat-2. 
 * 
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

    /*  GPIO Port A (PortA) */
#define GPIO_PORTA_AHB_DATA_R       (*((volatile uint32_t *)0x400583FC))                            /*  pp.759      GPIO Data >> PortA[7:0] unmasked */
#define GPIO_PORTA_AHB_DIR_R        (*((volatile uint32_t *)0x40058400))                            /*  pp.760      GPIO Direction */
#define GPIO_PORTA_AHB_IS_R         (*((volatile uint32_t *)0x40058404))                            /*  pp.761      GPIO Interrupt Sense */
#define GPIO_PORTA_AHB_IBE_R        (*((volatile uint32_t *)0x40058408))                            /*  pp.762      GPIO Interrupt Both Edges */
#define GPIO_PORTA_AHB_IEV_R        (*((volatile uint32_t *)0x4005840C))                            /*  pp.763      GPIO Interrupt Event */
#define GPIO_PORTA_AHB_IM_R         (*((volatile uint32_t *)0x40058410))                            /*  pp.764      GPIO Interrupt Mask */
#define GPIO_PORTA_AHB_RIS_R        (*((volatile uint32_t *)0x40058414))                            /*  pp.765      GPIO Raw Interrupt Status */
#define GPIO_PORTA_AHB_MIS_R        (*((volatile uint32_t *)0x40058418))                            /*  pp.767      GPIO Masked Interrupt Status */
#define GPIO_PORTA_AHB_ICR_R        (*((volatile uint32_t *)0x4005841C))                            /*  pp.769      GPIO Interrupt Clear */
#define GPIO_PORTA_AHB_AFSEL_R      (*((volatile uint32_t *)0x40058420))                            /*  pp.770      GPIO Alternate Function Select */
#define GPIO_PORTA_AHB_DR2R_R       (*((volatile uint32_t *)0x40058500))                            /*  pp.772      GPIO 2-mA Drive Select */
#define GPIO_PORTA_AHB_DR4R_R       (*((volatile uint32_t *)0x40058504))                            /*  pp.773      GPIO 4-mA Drive Select */
#define GPIO_PORTA_AHB_DR8R_R       (*((volatile uint32_t *)0x40058508))                            /*  pp.774      GPIO 8-mA Drive Select */
#define GPIO_PORTA_AHB_ODR_R        (*((volatile uint32_t *)0x4005850C))                            /*  pp.775      GPIO Open Drain Select */
#define GPIO_PORTA_AHB_PUR_R        (*((volatile uint32_t *)0x40058510))                            /*  pp.776      GPIO Pull-Up Select */
#define GPIO_PORTA_AHB_PDR_R        (*((volatile uint32_t *)0x40058514))                            /*  pp.778      GPIO Pull-Down Select */
#define GPIO_PORTA_AHB_SLR_R        (*((volatile uint32_t *)0x40058518))                            /*  pp.780      GPIO Slew Rate Control Select */
#define GPIO_PORTA_AHB_DEN_R        (*((volatile uint32_t *)0x4005851C))                            /*  pp.781      GPIO Digital Enable */
#define GPIO_PORTA_AHB_LOCK_R       (*((volatile uint32_t *)0x40058520))                            /*  pp.783      GPIO Lock */
#define GPIO_PORTA_AHB_CR_R         (*((volatile uint32_t *)0x40058524))                            /*  pp.784      GPIO Commit */
#define GPIO_PORTA_AHB_AMSEL_R      (*((volatile uint32_t *)0x40058528))                            /*  pp.786      GPIO Analog Mode Select */
#define GPIO_PORTA_AHB_PCTL_R       (*((volatile uint32_t *)0x4005852C))                            /*  pp.787      GPIO Port Control */
#define GPIO_PORTA_AHB_ADCCTL_R     (*((volatile uint32_t *)0x40058530))                            /*  pp.789      GPIO ADC Control */
#define GPIO_PORTA_AHB_DMACTL_R     (*((volatile uint32_t *)0x40058534))                            /*  pp.790      GPIO DMA Control */
#define GPIO_PORTA_AHB_SI_R         (*((volatile uint32_t *)0x40058538))                            /*  pp.791      GPIO Select Interrupt */
#define GPIO_PORTA_AHB_DR12R_R      (*((volatile uint32_t *)0x4005853C))                            /*  pp.792      GPIO 12-mA Drive Select */
#define GPIO_PORTA_AHB_WAKEPEN_R    (*((volatile uint32_t *)0x40058540))                            /*  pp.793      GPIO Wake Pin Enable */
#define GPIO_PORTA_AHB_WAKELVL_R    (*((volatile uint32_t *)0x40058544))                            /*  pp.795      GPIO Wake Level */
#define GPIO_PORTA_AHB_WAKESTAT_R   (*((volatile uint32_t *)0x40058548))                            /*  pp.797      GPIO Wake Status */
#define GPIO_PORTA_AHB_PP_R         (*((volatile uint32_t *)0x40058FC0))                            /*  pp.799      GPIO Peripheral Property */
#define GPIO_PORTA_AHB_PC_R         (*((volatile uint32_t *)0x40058FC4))                            /*  pp.800      GPIO Peripheral Configuration */

    /*  GPIO Port B (PortB) */
#define GPIO_PORTB_AHB_DATA_R       (*((volatile uint32_t *)0x400593FC))                            /*  pp.759      GPIO Data >> PortB[7:0] unmasked */
#define GPIO_PORTB_AHB_DIR_R        (*((volatile uint32_t *)0x40059400))                            /*  pp.760      GPIO Direction */
#define GPIO_PORTB_AHB_IS_R         (*((volatile uint32_t *)0x40059404))                            /*  pp.761      GPIO Interrupt Sense */
#define GPIO_PORTB_AHB_IBE_R        (*((volatile uint32_t *)0x40059408))                            /*  pp.762      GPIO Interrupt Both Edges */
#define GPIO_PORTB_AHB_IEV_R        (*((volatile uint32_t *)0x4005940C))                            /*  pp.763      GPIO Interrupt Event */
#define GPIO_PORTB_AHB_IM_R         (*((volatile uint32_t *)0x40059410))                            /*  pp.764      GPIO Interrupt Mask */
#define GPIO_PORTB_AHB_RIS_R        (*((volatile uint32_t *)0x40059414))                            /*  pp.765      GPIO Raw Interrupt Status */
#define GPIO_PORTB_AHB_MIS_R        (*((volatile uint32_t *)0x40059418))                            /*  pp.767      GPIO Masked Interrupt Status */
#define GPIO_PORTB_AHB_ICR_R        (*((volatile uint32_t *)0x4005941C))                            /*  pp.769      GPIO Interrupt Clear */
#define GPIO_PORTB_AHB_AFSEL_R      (*((volatile uint32_t *)0x40059420))                            /*  pp.770      GPIO Alternate Function Select */
#define GPIO_PORTB_AHB_DR2R_R       (*((volatile uint32_t *)0x40059500))                            /*  pp.772      GPIO 2-mA Drive Select */
#define GPIO_PORTB_AHB_DR4R_R       (*((volatile uint32_t *)0x40059504))                            /*  pp.773      GPIO 4-mA Drive Select */
#define GPIO_PORTB_AHB_DR8R_R       (*((volatile uint32_t *)0x40059508))                            /*  pp.774      GPIO 8-mA Drive Select */
#define GPIO_PORTB_AHB_ODR_R        (*((volatile uint32_t *)0x4005950C))                            /*  pp.775      GPIO Open Drain Select */
#define GPIO_PORTB_AHB_PUR_R        (*((volatile uint32_t *)0x40059510))                            /*  pp.776      GPIO Pull-Up Select */
#define GPIO_PORTB_AHB_PDR_R        (*((volatile uint32_t *)0x40059514))                            /*  pp.778      GPIO Pull-Down Select */
#define GPIO_PORTB_AHB_SLR_R        (*((volatile uint32_t *)0x40059518))                            /*  pp.780      GPIO Slew Rate Control Select */
#define GPIO_PORTB_AHB_DEN_R        (*((volatile uint32_t *)0x4005951C))                            /*  pp.781      GPIO Digital Enable */
#define GPIO_PORTB_AHB_LOCK_R       (*((volatile uint32_t *)0x40059520))                            /*  pp.783      GPIO Lock */
#define GPIO_PORTB_AHB_CR_R         (*((volatile uint32_t *)0x40059524))                            /*  pp.784      GPIO Commit */
#define GPIO_PORTB_AHB_AMSEL_R      (*((volatile uint32_t *)0x40059528))                            /*  pp.786      GPIO Analog Mode Select */
#define GPIO_PORTB_AHB_PCTL_R       (*((volatile uint32_t *)0x4005952C))                            /*  pp.787      GPIO Port Control */
#define GPIO_PORTB_AHB_ADCCTL_R     (*((volatile uint32_t *)0x40059530))                            /*  pp.789      GPIO ADC Control */
#define GPIO_PORTB_AHB_DMACTL_R     (*((volatile uint32_t *)0x40059534))                            /*  pp.790      GPIO DMA Control */
#define GPIO_PORTB_AHB_SI_R         (*((volatile uint32_t *)0x40059538))                            /*  pp.791      GPIO Select Interrupt */
#define GPIO_PORTB_AHB_DR12R_R      (*((volatile uint32_t *)0x4005953C))                            /*  pp.792      GPIO 12-mA Drive Select */
#define GPIO_PORTB_AHB_WAKEPEN_R    (*((volatile uint32_t *)0x40059540))                            /*  pp.793      GPIO Wake Pin Enable */
#define GPIO_PORTB_AHB_WAKELVL_R    (*((volatile uint32_t *)0x40059544))                            /*  pp.795      GPIO Wake Level */
#define GPIO_PORTB_AHB_WAKESTAT_R   (*((volatile uint32_t *)0x40059548))                            /*  pp.797      GPIO Wake Status */
#define GPIO_PORTB_AHB_PP_R         (*((volatile uint32_t *)0x40059FC0))                            /*  pp.799      GPIO Peripheral Property */
#define GPIO_PORTB_AHB_PC_R         (*((volatile uint32_t *)0x40059FC4))                            /*  pp.800      GPIO Peripheral Configuration */

    /*  GPIO Port C (PortC) */
#define GPIO_PORTC_AHB_DATA_R       (*((volatile uint32_t *)0x4005A3FC))                            /*  pp.759      GPIO Data >> PortC[7:0] unmasked */
#define GPIO_PORTC_AHB_DIR_R        (*((volatile uint32_t *)0x4005A400))                            /*  pp.760      GPIO Direction */
#define GPIO_PORTC_AHB_IS_R         (*((volatile uint32_t *)0x4005A404))                            /*  pp.761      GPIO Interrupt Sense */
#define GPIO_PORTC_AHB_IBE_R        (*((volatile uint32_t *)0x4005A408))                            /*  pp.762      GPIO Interrupt Both Edges */
#define GPIO_PORTC_AHB_IEV_R        (*((volatile uint32_t *)0x4005A40C))                            /*  pp.763      GPIO Interrupt Event */
#define GPIO_PORTC_AHB_IM_R         (*((volatile uint32_t *)0x4005A410))                            /*  pp.764      GPIO Interrupt Mask */
#define GPIO_PORTC_AHB_RIS_R        (*((volatile uint32_t *)0x4005A414))                            /*  pp.765      GPIO Raw Interrupt Status */
#define GPIO_PORTC_AHB_MIS_R        (*((volatile uint32_t *)0x4005A418))                            /*  pp.767      GPIO Masked Interrupt Status */
#define GPIO_PORTC_AHB_ICR_R        (*((volatile uint32_t *)0x4005A41C))                            /*  pp.769      GPIO Interrupt Clear */
#define GPIO_PORTC_AHB_AFSEL_R      (*((volatile uint32_t *)0x4005A420))                            /*  pp.770      GPIO Alternate Function Select */
#define GPIO_PORTC_AHB_DR2R_R       (*((volatile uint32_t *)0x4005A500))                            /*  pp.772      GPIO 2-mA Drive Select */
#define GPIO_PORTC_AHB_DR4R_R       (*((volatile uint32_t *)0x4005A504))                            /*  pp.773      GPIO 4-mA Drive Select */
#define GPIO_PORTC_AHB_DR8R_R       (*((volatile uint32_t *)0x4005A508))                            /*  pp.774      GPIO 8-mA Drive Select */
#define GPIO_PORTC_AHB_ODR_R        (*((volatile uint32_t *)0x4005A50C))                            /*  pp.775      GPIO Open Drain Select */
#define GPIO_PORTC_AHB_PUR_R        (*((volatile uint32_t *)0x4005A510))                            /*  pp.776      GPIO Pull-Up Select */
#define GPIO_PORTC_AHB_PDR_R        (*((volatile uint32_t *)0x4005A514))                            /*  pp.778      GPIO Pull-Down Select */
#define GPIO_PORTC_AHB_SLR_R        (*((volatile uint32_t *)0x4005A518))                            /*  pp.780      GPIO Slew Rate Control Select */
#define GPIO_PORTC_AHB_DEN_R        (*((volatile uint32_t *)0x4005A51C))                            /*  pp.781      GPIO Digital Enable */
#define GPIO_PORTC_AHB_LOCK_R       (*((volatile uint32_t *)0x4005A520))                            /*  pp.783      GPIO Lock */
#define GPIO_PORTC_AHB_CR_R         (*((volatile uint32_t *)0x4005A524))                            /*  pp.784      GPIO Commit */
#define GPIO_PORTC_AHB_AMSEL_R      (*((volatile uint32_t *)0x4005A528))                            /*  pp.786      GPIO Analog Mode Select */
#define GPIO_PORTC_AHB_PCTL_R       (*((volatile uint32_t *)0x4005A52C))                            /*  pp.787      GPIO Port Control */
#define GPIO_PORTC_AHB_ADCCTL_R     (*((volatile uint32_t *)0x4005A530))                            /*  pp.789      GPIO ADC Control */
#define GPIO_PORTC_AHB_DMACTL_R     (*((volatile uint32_t *)0x4005A534))                            /*  pp.790      GPIO DMA Control */
#define GPIO_PORTC_AHB_SI_R         (*((volatile uint32_t *)0x4005A538))                            /*  pp.791      GPIO Select Interrupt */
#define GPIO_PORTC_AHB_DR12R_R      (*((volatile uint32_t *)0x4005A53C))                            /*  pp.792      GPIO 12-mA Drive Select */
#define GPIO_PORTC_AHB_WAKEPEN_R    (*((volatile uint32_t *)0x4005A540))                            /*  pp.793      GPIO Wake Pin Enable */
#define GPIO_PORTC_AHB_WAKELVL_R    (*((volatile uint32_t *)0x4005A544))                            /*  pp.795      GPIO Wake Level */
#define GPIO_PORTC_AHB_WAKESTAT_R   (*((volatile uint32_t *)0x4005A548))                            /*  pp.797      GPIO Wake Status */
#define GPIO_PORTC_AHB_PP_R         (*((volatile uint32_t *)0x4005AFC0))                            /*  pp.799      GPIO Peripheral Property */
#define GPIO_PORTC_AHB_PC_R         (*((volatile uint32_t *)0x4005AFC4))                            /*  pp.800      GPIO Peripheral Configuration */

    /*  GPIO Port D (PortD) */
#define GPIO_PORTD_AHB_DATA_R       (*((volatile uint32_t *)0x4005B3FC))                            /*  pp.759      GPIO Data >> PortD[7:0] unmasked */
#define GPIO_PORTD_AHB_DIR_R        (*((volatile uint32_t *)0x4005B400))                            /*  pp.760      GPIO Direction */
#define GPIO_PORTD_AHB_IS_R         (*((volatile uint32_t *)0x4005B404))                            /*  pp.761      GPIO Interrupt Sense */
#define GPIO_PORTD_AHB_IBE_R        (*((volatile uint32_t *)0x4005B408))                            /*  pp.762      GPIO Interrupt Both Edges */
#define GPIO_PORTD_AHB_IEV_R        (*((volatile uint32_t *)0x4005B40C))                            /*  pp.763      GPIO Interrupt Event */
#define GPIO_PORTD_AHB_IM_R         (*((volatile uint32_t *)0x4005B410))                            /*  pp.764      GPIO Interrupt Mask */
#define GPIO_PORTD_AHB_RIS_R        (*((volatile uint32_t *)0x4005B414))                            /*  pp.765      GPIO Raw Interrupt Status */
#define GPIO_PORTD_AHB_MIS_R        (*((volatile uint32_t *)0x4005B418))                            /*  pp.767      GPIO Masked Interrupt Status */
#define GPIO_PORTD_AHB_ICR_R        (*((volatile uint32_t *)0x4005B41C))                            /*  pp.769      GPIO Interrupt Clear */
#define GPIO_PORTD_AHB_AFSEL_R      (*((volatile uint32_t *)0x4005B420))                            /*  pp.770      GPIO Alternate Function Select */
#define GPIO_PORTD_AHB_DR2R_R       (*((volatile uint32_t *)0x4005B500))                            /*  pp.772      GPIO 2-mA Drive Select */
#define GPIO_PORTD_AHB_DR4R_R       (*((volatile uint32_t *)0x4005B504))                            /*  pp.773      GPIO 4-mA Drive Select */
#define GPIO_PORTD_AHB_DR8R_R       (*((volatile uint32_t *)0x4005B508))                            /*  pp.774      GPIO 8-mA Drive Select */
#define GPIO_PORTD_AHB_ODR_R        (*((volatile uint32_t *)0x4005B50C))                            /*  pp.775      GPIO Open Drain Select */
#define GPIO_PORTD_AHB_PUR_R        (*((volatile uint32_t *)0x4005B510))                            /*  pp.776      GPIO Pull-Up Select */
#define GPIO_PORTD_AHB_PDR_R        (*((volatile uint32_t *)0x4005B514))                            /*  pp.778      GPIO Pull-Down Select */
#define GPIO_PORTD_AHB_SLR_R        (*((volatile uint32_t *)0x4005B518))                            /*  pp.780      GPIO Slew Rate Control Select */
#define GPIO_PORTD_AHB_DEN_R        (*((volatile uint32_t *)0x4005B51C))                            /*  pp.781      GPIO Digital Enable */
#define GPIO_PORTD_AHB_LOCK_R       (*((volatile uint32_t *)0x4005B520))                            /*  pp.783      GPIO Lock */
#define GPIO_PORTD_AHB_CR_R         (*((volatile uint32_t *)0x4005B524))                            /*  pp.784      GPIO Commit */
#define GPIO_PORTD_AHB_AMSEL_R      (*((volatile uint32_t *)0x4005B528))                            /*  pp.786      GPIO Analog Mode Select */
#define GPIO_PORTD_AHB_PCTL_R       (*((volatile uint32_t *)0x4005B52C))                            /*  pp.787      GPIO Port Control */
#define GPIO_PORTD_AHB_ADCCTL_R     (*((volatile uint32_t *)0x4005B530))                            /*  pp.789      GPIO ADC Control */
#define GPIO_PORTD_AHB_DMACTL_R     (*((volatile uint32_t *)0x4005B534))                            /*  pp.790      GPIO DMA Control */
#define GPIO_PORTD_AHB_SI_R         (*((volatile uint32_t *)0x4005B538))                            /*  pp.791      GPIO Select Interrupt */
#define GPIO_PORTD_AHB_DR12R_R      (*((volatile uint32_t *)0x4005B53C))                            /*  pp.792      GPIO 12-mA Drive Select */
#define GPIO_PORTD_AHB_WAKEPEN_R    (*((volatile uint32_t *)0x4005B540))                            /*  pp.793      GPIO Wake Pin Enable */
#define GPIO_PORTD_AHB_WAKELVL_R    (*((volatile uint32_t *)0x4005B544))                            /*  pp.795      GPIO Wake Level */
#define GPIO_PORTD_AHB_WAKESTAT_R   (*((volatile uint32_t *)0x4005B548))                            /*  pp.797      GPIO Wake Status */
#define GPIO_PORTD_AHB_PP_R         (*((volatile uint32_t *)0x4005BFC0))                            /*  pp.799      GPIO Peripheral Property */
#define GPIO_PORTD_AHB_PC_R         (*((volatile uint32_t *)0x4005BFC4))                            /*  pp.800      GPIO Peripheral Configuration */

    /*  GPIO Port E (PortE) */
#define GPIO_PORTE_AHB_DATA_R       (*((volatile uint32_t *)0x4005C3FC))                            /*  pp.759      GPIO Data >> PortE[7:0] unmasked */
#define GPIO_PORTE_AHB_DIR_R        (*((volatile uint32_t *)0x4005C400))                            /*  pp.760      GPIO Direction */
#define GPIO_PORTE_AHB_IS_R         (*((volatile uint32_t *)0x4005C404))                            /*  pp.761      GPIO Interrupt Sense */
#define GPIO_PORTE_AHB_IBE_R        (*((volatile uint32_t *)0x4005C408))                            /*  pp.762      GPIO Interrupt Both Edges */
#define GPIO_PORTE_AHB_IEV_R        (*((volatile uint32_t *)0x4005C40C))                            /*  pp.763      GPIO Interrupt Event */
#define GPIO_PORTE_AHB_IM_R         (*((volatile uint32_t *)0x4005C410))                            /*  pp.764      GPIO Interrupt Mask */
#define GPIO_PORTE_AHB_RIS_R        (*((volatile uint32_t *)0x4005C414))                            /*  pp.765      GPIO Raw Interrupt Status */
#define GPIO_PORTE_AHB_MIS_R        (*((volatile uint32_t *)0x4005C418))                            /*  pp.767      GPIO Masked Interrupt Status */
#define GPIO_PORTE_AHB_ICR_R        (*((volatile uint32_t *)0x4005C41C))                            /*  pp.769      GPIO Interrupt Clear */
#define GPIO_PORTE_AHB_AFSEL_R      (*((volatile uint32_t *)0x4005C420))                            /*  pp.770      GPIO Alternate Function Select */
#define GPIO_PORTE_AHB_DR2R_R       (*((volatile uint32_t *)0x4005C500))                            /*  pp.772      GPIO 2-mA Drive Select */
#define GPIO_PORTE_AHB_DR4R_R       (*((volatile uint32_t *)0x4005C504))                            /*  pp.773      GPIO 4-mA Drive Select */
#define GPIO_PORTE_AHB_DR8R_R       (*((volatile uint32_t *)0x4005C508))                            /*  pp.774      GPIO 8-mA Drive Select */
#define GPIO_PORTE_AHB_ODR_R        (*((volatile uint32_t *)0x4005C50C))                            /*  pp.775      GPIO Open Drain Select */
#define GPIO_PORTE_AHB_PUR_R        (*((volatile uint32_t *)0x4005C510))                            /*  pp.776      GPIO Pull-Up Select */
#define GPIO_PORTE_AHB_PDR_R        (*((volatile uint32_t *)0x4005C514))                            /*  pp.778      GPIO Pull-Down Select */
#define GPIO_PORTE_AHB_SLR_R        (*((volatile uint32_t *)0x4005C518))                            /*  pp.780      GPIO Slew Rate Control Select */
#define GPIO_PORTE_AHB_DEN_R        (*((volatile uint32_t *)0x4005C51C))                            /*  pp.781      GPIO Digital Enable */
#define GPIO_PORTE_AHB_LOCK_R       (*((volatile uint32_t *)0x4005C520))                            /*  pp.783      GPIO Lock */
#define GPIO_PORTE_AHB_CR_R         (*((volatile uint32_t *)0x4005C524))                            /*  pp.784      GPIO Commit */
#define GPIO_PORTE_AHB_AMSEL_R      (*((volatile uint32_t *)0x4005C528))                            /*  pp.786      GPIO Analog Mode Select */
#define GPIO_PORTE_AHB_PCTL_R       (*((volatile uint32_t *)0x4005C52C))                            /*  pp.787      GPIO Port Control */
#define GPIO_PORTE_AHB_ADCCTL_R     (*((volatile uint32_t *)0x4005C530))                            /*  pp.789      GPIO ADC Control */
#define GPIO_PORTE_AHB_DMACTL_R     (*((volatile uint32_t *)0x4005C534))                            /*  pp.790      GPIO DMA Control */
#define GPIO_PORTE_AHB_SI_R         (*((volatile uint32_t *)0x4005C538))                            /*  pp.791      GPIO Select Interrupt */
#define GPIO_PORTE_AHB_DR12R_R      (*((volatile uint32_t *)0x4005C53C))                            /*  pp.792      GPIO 12-mA Drive Select */
#define GPIO_PORTE_AHB_WAKEPEN_R    (*((volatile uint32_t *)0x4005C540))                            /*  pp.793      GPIO Wake Pin Enable */
#define GPIO_PORTE_AHB_WAKELVL_R    (*((volatile uint32_t *)0x4005C544))                            /*  pp.795      GPIO Wake Level */
#define GPIO_PORTE_AHB_WAKESTAT_R   (*((volatile uint32_t *)0x4005C548))                            /*  pp.797      GPIO Wake Status */
#define GPIO_PORTE_AHB_PP_R         (*((volatile uint32_t *)0x4005CFC0))                            /*  pp.799      GPIO Peripheral Property */
#define GPIO_PORTE_AHB_PC_R         (*((volatile uint32_t *)0x4005CFC4))                            /*  pp.800      GPIO Peripheral Configuration */

    /*  GPIO Port F (PortF) */
#define GPIO_PORTF_AHB_DATA_R       (*((volatile uint32_t *)0x4005D3FC))                            /*  pp.759      GPIO Data >> PortF[7:0] unmasked */
#define GPIO_PORTF_AHB_DIR_R        (*((volatile uint32_t *)0x4005D400))                            /*  pp.760      GPIO Direction */
#define GPIO_PORTF_AHB_IS_R         (*((volatile uint32_t *)0x4005D404))                            /*  pp.761      GPIO Interrupt Sense */
#define GPIO_PORTF_AHB_IBE_R        (*((volatile uint32_t *)0x4005D408))                            /*  pp.762      GPIO Interrupt Both Edges */
#define GPIO_PORTF_AHB_IEV_R        (*((volatile uint32_t *)0x4005D40C))                            /*  pp.763      GPIO Interrupt Event */
#define GPIO_PORTF_AHB_IM_R         (*((volatile uint32_t *)0x4005D410))                            /*  pp.764      GPIO Interrupt Mask */
#define GPIO_PORTF_AHB_RIS_R        (*((volatile uint32_t *)0x4005D414))                            /*  pp.765      GPIO Raw Interrupt Status */
#define GPIO_PORTF_AHB_MIS_R        (*((volatile uint32_t *)0x4005D418))                            /*  pp.767      GPIO Masked Interrupt Status */
#define GPIO_PORTF_AHB_ICR_R        (*((volatile uint32_t *)0x4005D41C))                            /*  pp.769      GPIO Interrupt Clear */
#define GPIO_PORTF_AHB_AFSEL_R      (*((volatile uint32_t *)0x4005D420))                            /*  pp.770      GPIO Alternate Function Select */
#define GPIO_PORTF_AHB_DR2R_R       (*((volatile uint32_t *)0x4005D500))                            /*  pp.772      GPIO 2-mA Drive Select */
#define GPIO_PORTF_AHB_DR4R_R       (*((volatile uint32_t *)0x4005D504))                            /*  pp.773      GPIO 4-mA Drive Select */
#define GPIO_PORTF_AHB_DR8R_R       (*((volatile uint32_t *)0x4005D508))                            /*  pp.774      GPIO 8-mA Drive Select */
#define GPIO_PORTF_AHB_ODR_R        (*((volatile uint32_t *)0x4005D50C))                            /*  pp.775      GPIO Open Drain Select */
#define GPIO_PORTF_AHB_PUR_R        (*((volatile uint32_t *)0x4005D510))                            /*  pp.776      GPIO Pull-Up Select */
#define GPIO_PORTF_AHB_PDR_R        (*((volatile uint32_t *)0x4005D514))                            /*  pp.778      GPIO Pull-Down Select */
#define GPIO_PORTF_AHB_SLR_R        (*((volatile uint32_t *)0x4005D518))                            /*  pp.780      GPIO Slew Rate Control Select */
#define GPIO_PORTF_AHB_DEN_R        (*((volatile uint32_t *)0x4005D51C))                            /*  pp.781      GPIO Digital Enable */
#define GPIO_PORTF_AHB_LOCK_R       (*((volatile uint32_t *)0x4005D520))                            /*  pp.783      GPIO Lock */
#define GPIO_PORTF_AHB_CR_R         (*((volatile uint32_t *)0x4005D524))                            /*  pp.784      GPIO Commit */
#define GPIO_PORTF_AHB_AMSEL_R      (*((volatile uint32_t *)0x4005D528))                            /*  pp.786      GPIO Analog Mode Select */
#define GPIO_PORTF_AHB_PCTL_R       (*((volatile uint32_t *)0x4005D52C))                            /*  pp.787      GPIO Port Control */
#define GPIO_PORTF_AHB_ADCCTL_R     (*((volatile uint32_t *)0x4005D530))                            /*  pp.789      GPIO ADC Control */
#define GPIO_PORTF_AHB_DMACTL_R     (*((volatile uint32_t *)0x4005D534))                            /*  pp.790      GPIO DMA Control */
#define GPIO_PORTF_AHB_SI_R         (*((volatile uint32_t *)0x4005D538))                            /*  pp.791      GPIO Select Interrupt */
#define GPIO_PORTF_AHB_DR12R_R      (*((volatile uint32_t *)0x4005D53C))                            /*  pp.792      GPIO 12-mA Drive Select */
#define GPIO_PORTF_AHB_WAKEPEN_R    (*((volatile uint32_t *)0x4005D540))                            /*  pp.793      GPIO Wake Pin Enable */
#define GPIO_PORTF_AHB_WAKELVL_R    (*((volatile uint32_t *)0x4005D544))                            /*  pp.795      GPIO Wake Level */
#define GPIO_PORTF_AHB_WAKESTAT_R   (*((volatile uint32_t *)0x4005D548))                            /*  pp.797      GPIO Wake Status */
#define GPIO_PORTF_AHB_PP_R         (*((volatile uint32_t *)0x4005DFC0))                            /*  pp.799      GPIO Peripheral Property */
#define GPIO_PORTF_AHB_PC_R         (*((volatile uint32_t *)0x4005DFC4))                            /*  pp.800      GPIO Peripheral Configuration */

    /*  GPIO Port G (PortG) */
#define GPIO_PORTG_AHB_DATA_R       (*((volatile uint32_t *)0x4005E3FC))                            /*  pp.759      GPIO Data >> PortG[7:0] unmasked */
#define GPIO_PORTG_AHB_DIR_R        (*((volatile uint32_t *)0x4005E400))                            /*  pp.760      GPIO Direction */
#define GPIO_PORTG_AHB_IS_R         (*((volatile uint32_t *)0x4005E404))                            /*  pp.761      GPIO Interrupt Sense */
#define GPIO_PORTG_AHB_IBE_R        (*((volatile uint32_t *)0x4005E408))                            /*  pp.762      GPIO Interrupt Both Edges */
#define GPIO_PORTG_AHB_IEV_R        (*((volatile uint32_t *)0x4005E40C))                            /*  pp.763      GPIO Interrupt Event */
#define GPIO_PORTG_AHB_IM_R         (*((volatile uint32_t *)0x4005E410))                            /*  pp.764      GPIO Interrupt Mask */
#define GPIO_PORTG_AHB_RIS_R        (*((volatile uint32_t *)0x4005E414))                            /*  pp.765      GPIO Raw Interrupt Status */
#define GPIO_PORTG_AHB_MIS_R        (*((volatile uint32_t *)0x4005E418))                            /*  pp.767      GPIO Masked Interrupt Status */
#define GPIO_PORTG_AHB_ICR_R        (*((volatile uint32_t *)0x4005E41C))                            /*  pp.769      GPIO Interrupt Clear */
#define GPIO_PORTG_AHB_AFSEL_R      (*((volatile uint32_t *)0x4005E420))                            /*  pp.770      GPIO Alternate Function Select */
#define GPIO_PORTG_AHB_DR2R_R       (*((volatile uint32_t *)0x4005E500))                            /*  pp.772      GPIO 2-mA Drive Select */
#define GPIO_PORTG_AHB_DR4R_R       (*((volatile uint32_t *)0x4005E504))                            /*  pp.773      GPIO 4-mA Drive Select */
#define GPIO_PORTG_AHB_DR8R_R       (*((volatile uint32_t *)0x4005E508))                            /*  pp.774      GPIO 8-mA Drive Select */
#define GPIO_PORTG_AHB_ODR_R        (*((volatile uint32_t *)0x4005E50C))                            /*  pp.775      GPIO Open Drain Select */
#define GPIO_PORTG_AHB_PUR_R        (*((volatile uint32_t *)0x4005E510))                            /*  pp.776      GPIO Pull-Up Select */
#define GPIO_PORTG_AHB_PDR_R        (*((volatile uint32_t *)0x4005E514))                            /*  pp.778      GPIO Pull-Down Select */
#define GPIO_PORTG_AHB_SLR_R        (*((volatile uint32_t *)0x4005E518))                            /*  pp.780      GPIO Slew Rate Control Select */
#define GPIO_PORTG_AHB_DEN_R        (*((volatile uint32_t *)0x4005E51C))                            /*  pp.781      GPIO Digital Enable */
#define GPIO_PORTG_AHB_LOCK_R       (*((volatile uint32_t *)0x4005E520))                            /*  pp.783      GPIO Lock */
#define GPIO_PORTG_AHB_CR_R         (*((volatile uint32_t *)0x4005E524))                            /*  pp.784      GPIO Commit */
#define GPIO_PORTG_AHB_AMSEL_R      (*((volatile uint32_t *)0x4005E528))                            /*  pp.786      GPIO Analog Mode Select */
#define GPIO_PORTG_AHB_PCTL_R       (*((volatile uint32_t *)0x4005E52C))                            /*  pp.787      GPIO Port Control */
#define GPIO_PORTG_AHB_ADCCTL_R     (*((volatile uint32_t *)0x4005E530))                            /*  pp.789      GPIO ADC Control */
#define GPIO_PORTG_AHB_DMACTL_R     (*((volatile uint32_t *)0x4005E534))                            /*  pp.790      GPIO DMA Control */
#define GPIO_PORTG_AHB_SI_R         (*((volatile uint32_t *)0x4005E538))                            /*  pp.791      GPIO Select Interrupt */
#define GPIO_PORTG_AHB_DR12R_R      (*((volatile uint32_t *)0x4005E53C))                            /*  pp.792      GPIO 12-mA Drive Select */
#define GPIO_PORTG_AHB_WAKEPEN_R    (*((volatile uint32_t *)0x4005E540))                            /*  pp.793      GPIO Wake Pin Enable */
#define GPIO_PORTG_AHB_WAKELVL_R    (*((volatile uint32_t *)0x4005E544))                            /*  pp.795      GPIO Wake Level */
#define GPIO_PORTG_AHB_WAKESTAT_R   (*((volatile uint32_t *)0x4005E548))                            /*  pp.797      GPIO Wake Status */
#define GPIO_PORTG_AHB_PP_R         (*((volatile uint32_t *)0x4005EFC0))                            /*  pp.799      GPIO Peripheral Property */
#define GPIO_PORTG_AHB_PC_R         (*((volatile uint32_t *)0x4005EFC4))                            /*  pp.800      GPIO Peripheral Configuration */

    /*  GPIO Port H (PortH) */
#define GPIO_PORTH_AHB_DATA_R       (*((volatile uint32_t *)0x4005F3FC))                            /*  pp.759      GPIO Data >> PortH[7:0] unmasked */
#define GPIO_PORTH_AHB_DIR_R        (*((volatile uint32_t *)0x4005F400))                            /*  pp.760      GPIO Direction */
#define GPIO_PORTH_AHB_IS_R         (*((volatile uint32_t *)0x4005F404))                            /*  pp.761      GPIO Interrupt Sense */
#define GPIO_PORTH_AHB_IBE_R        (*((volatile uint32_t *)0x4005F408))                            /*  pp.762      GPIO Interrupt Both Edges */
#define GPIO_PORTH_AHB_IEV_R        (*((volatile uint32_t *)0x4005F40C))                            /*  pp.763      GPIO Interrupt Event */
#define GPIO_PORTH_AHB_IM_R         (*((volatile uint32_t *)0x4005F410))                            /*  pp.764      GPIO Interrupt Mask */
#define GPIO_PORTH_AHB_RIS_R        (*((volatile uint32_t *)0x4005F414))                            /*  pp.765      GPIO Raw Interrupt Status */
#define GPIO_PORTH_AHB_MIS_R        (*((volatile uint32_t *)0x4005F418))                            /*  pp.767      GPIO Masked Interrupt Status */
#define GPIO_PORTH_AHB_ICR_R        (*((volatile uint32_t *)0x4005F41C))                            /*  pp.769      GPIO Interrupt Clear */
#define GPIO_PORTH_AHB_AFSEL_R      (*((volatile uint32_t *)0x4005F420))                            /*  pp.770      GPIO Alternate Function Select */
#define GPIO_PORTH_AHB_DR2R_R       (*((volatile uint32_t *)0x4005F500))                            /*  pp.772      GPIO 2-mA Drive Select */
#define GPIO_PORTH_AHB_DR4R_R       (*((volatile uint32_t *)0x4005F504))                            /*  pp.773      GPIO 4-mA Drive Select */
#define GPIO_PORTH_AHB_DR8R_R       (*((volatile uint32_t *)0x4005F508))                            /*  pp.774      GPIO 8-mA Drive Select */
#define GPIO_PORTH_AHB_ODR_R        (*((volatile uint32_t *)0x4005F50C))                            /*  pp.775      GPIO Open Drain Select */
#define GPIO_PORTH_AHB_PUR_R        (*((volatile uint32_t *)0x4005F510))                            /*  pp.776      GPIO Pull-Up Select */
#define GPIO_PORTH_AHB_PDR_R        (*((volatile uint32_t *)0x4005F514))                            /*  pp.778      GPIO Pull-Down Select */
#define GPIO_PORTH_AHB_SLR_R        (*((volatile uint32_t *)0x4005F518))                            /*  pp.780      GPIO Slew Rate Control Select */
#define GPIO_PORTH_AHB_DEN_R        (*((volatile uint32_t *)0x4005F51C))                            /*  pp.781      GPIO Digital Enable */
#define GPIO_PORTH_AHB_LOCK_R       (*((volatile uint32_t *)0x4005F520))                            /*  pp.783      GPIO Lock */
#define GPIO_PORTH_AHB_CR_R         (*((volatile uint32_t *)0x4005F524))                            /*  pp.784      GPIO Commit */
#define GPIO_PORTH_AHB_AMSEL_R      (*((volatile uint32_t *)0x4005F528))                            /*  pp.786      GPIO Analog Mode Select */
#define GPIO_PORTH_AHB_PCTL_R       (*((volatile uint32_t *)0x4005F52C))                            /*  pp.787      GPIO Port Control */
#define GPIO_PORTH_AHB_ADCCTL_R     (*((volatile uint32_t *)0x4005F530))                            /*  pp.789      GPIO ADC Control */
#define GPIO_PORTH_AHB_DMACTL_R     (*((volatile uint32_t *)0x4005F534))                            /*  pp.790      GPIO DMA Control */
#define GPIO_PORTH_AHB_SI_R         (*((volatile uint32_t *)0x4005F538))                            /*  pp.791      GPIO Select Interrupt */
#define GPIO_PORTH_AHB_DR12R_R      (*((volatile uint32_t *)0x4005F53C))                            /*  pp.792      GPIO 12-mA Drive Select */
#define GPIO_PORTH_AHB_WAKEPEN_R    (*((volatile uint32_t *)0x4005F540))                            /*  pp.793      GPIO Wake Pin Enable */
#define GPIO_PORTH_AHB_WAKELVL_R    (*((volatile uint32_t *)0x4005F544))                            /*  pp.795      GPIO Wake Level */
#define GPIO_PORTH_AHB_WAKESTAT_R   (*((volatile uint32_t *)0x4005F548))                            /*  pp.797      GPIO Wake Status */
#define GPIO_PORTH_AHB_PP_R         (*((volatile uint32_t *)0x4005FFC0))                            /*  pp.799      GPIO Peripheral Property */
#define GPIO_PORTH_AHB_PC_R         (*((volatile uint32_t *)0x4005FFC4))                            /*  pp.800      GPIO Peripheral Configuration */

    /*  GPIO Port J (PortJ) */
#define GPIO_PORTJ_AHB_DATA_R       (*((volatile uint32_t *)0x400603FC))                            /*  pp.759      GPIO Data >> PortJ[7:0] unmasked */
#define GPIO_PORTJ_AHB_DIR_R        (*((volatile uint32_t *)0x40060400))                            /*  pp.760      GPIO Direction */
#define GPIO_PORTJ_AHB_IS_R         (*((volatile uint32_t *)0x40060404))                            /*  pp.761      GPIO Interrupt Sense */
#define GPIO_PORTJ_AHB_IBE_R        (*((volatile uint32_t *)0x40060408))                            /*  pp.762      GPIO Interrupt Both Edges */
#define GPIO_PORTJ_AHB_IEV_R        (*((volatile uint32_t *)0x4006040C))                            /*  pp.763      GPIO Interrupt Event */
#define GPIO_PORTJ_AHB_IM_R         (*((volatile uint32_t *)0x40060410))                            /*  pp.764      GPIO Interrupt Mask */
#define GPIO_PORTJ_AHB_RIS_R        (*((volatile uint32_t *)0x40060414))                            /*  pp.765      GPIO Raw Interrupt Status */
#define GPIO_PORTJ_AHB_MIS_R        (*((volatile uint32_t *)0x40060418))                            /*  pp.767      GPIO Masked Interrupt Status */
#define GPIO_PORTJ_AHB_ICR_R        (*((volatile uint32_t *)0x4006041C))                            /*  pp.769      GPIO Interrupt Clear */
#define GPIO_PORTJ_AHB_AFSEL_R      (*((volatile uint32_t *)0x40060420))                            /*  pp.770      GPIO Alternate Function Select */
#define GPIO_PORTJ_AHB_DR2R_R       (*((volatile uint32_t *)0x40060500))                            /*  pp.772      GPIO 2-mA Drive Select */
#define GPIO_PORTJ_AHB_DR4R_R       (*((volatile uint32_t *)0x40060504))                            /*  pp.773      GPIO 4-mA Drive Select */
#define GPIO_PORTJ_AHB_DR8R_R       (*((volatile uint32_t *)0x40060508))                            /*  pp.774      GPIO 8-mA Drive Select */
#define GPIO_PORTJ_AHB_ODR_R        (*((volatile uint32_t *)0x4006050C))                            /*  pp.775      GPIO Open Drain Select */
#define GPIO_PORTJ_AHB_PUR_R        (*((volatile uint32_t *)0x40060510))                            /*  pp.776      GPIO Pull-Up Select */
#define GPIO_PORTJ_AHB_PDR_R        (*((volatile uint32_t *)0x40060514))                            /*  pp.778      GPIO Pull-Down Select */
#define GPIO_PORTJ_AHB_SLR_R        (*((volatile uint32_t *)0x40060518))                            /*  pp.780      GPIO Slew Rate Control Select */
#define GPIO_PORTJ_AHB_DEN_R        (*((volatile uint32_t *)0x4006051C))                            /*  pp.781      GPIO Digital Enable */
#define GPIO_PORTJ_AHB_LOCK_R       (*((volatile uint32_t *)0x40060520))                            /*  pp.783      GPIO Lock */
#define GPIO_PORTJ_AHB_CR_R         (*((volatile uint32_t *)0x40060524))                            /*  pp.784      GPIO Commit */
#define GPIO_PORTJ_AHB_AMSEL_R      (*((volatile uint32_t *)0x40060528))                            /*  pp.786      GPIO Analog Mode Select */
#define GPIO_PORTJ_AHB_PCTL_R       (*((volatile uint32_t *)0x4006052C))                            /*  pp.787      GPIO Port Control */
#define GPIO_PORTJ_AHB_ADCCTL_R     (*((volatile uint32_t *)0x40060530))                            /*  pp.789      GPIO ADC Control */
#define GPIO_PORTJ_AHB_DMACTL_R     (*((volatile uint32_t *)0x40060534))                            /*  pp.790      GPIO DMA Control */
#define GPIO_PORTJ_AHB_SI_R         (*((volatile uint32_t *)0x40060538))                            /*  pp.791      GPIO Select Interrupt */
#define GPIO_PORTJ_AHB_DR12R_R      (*((volatile uint32_t *)0x4006053C))                            /*  pp.792      GPIO 12-mA Drive Select */
#define GPIO_PORTJ_AHB_WAKEPEN_R    (*((volatile uint32_t *)0x40060540))                            /*  pp.793      GPIO Wake Pin Enable */
#define GPIO_PORTJ_AHB_WAKELVL_R    (*((volatile uint32_t *)0x40060544))                            /*  pp.795      GPIO Wake Level */
#define GPIO_PORTJ_AHB_WAKESTAT_R   (*((volatile uint32_t *)0x40060548))                            /*  pp.797      GPIO Wake Status */
#define GPIO_PORTJ_AHB_PP_R         (*((volatile uint32_t *)0x40060FC0))                            /*  pp.799      GPIO Peripheral Property */
#define GPIO_PORTJ_AHB_PC_R         (*((volatile uint32_t *)0x40060FC4))                            /*  pp.800      GPIO Peripheral Configuration */

    /*  GPIO Port K (PortK) */
#define GPIO_PORTK_DATA_R           (*((volatile uint32_t *)0x400613FC))                            /*  pp.759      GPIO Data >> PortK[7:0] unmasked */
#define GPIO_PORTK_DIR_R            (*((volatile uint32_t *)0x40061400))                            /*  pp.760      GPIO Direction */
#define GPIO_PORTK_IS_R             (*((volatile uint32_t *)0x40061404))                            /*  pp.761      GPIO Interrupt Sense */
#define GPIO_PORTK_IBE_R            (*((volatile uint32_t *)0x40061408))                            /*  pp.762      GPIO Interrupt Both Edges */
#define GPIO_PORTK_IEV_R            (*((volatile uint32_t *)0x4006140C))                            /*  pp.763      GPIO Interrupt Event */
#define GPIO_PORTK_IM_R             (*((volatile uint32_t *)0x40061410))                            /*  pp.764      GPIO Interrupt Mask */
#define GPIO_PORTK_RIS_R            (*((volatile uint32_t *)0x40061414))                            /*  pp.765      GPIO Raw Interrupt Status */
#define GPIO_PORTK_MIS_R            (*((volatile uint32_t *)0x40061418))                            /*  pp.767      GPIO Masked Interrupt Status */
#define GPIO_PORTK_ICR_R            (*((volatile uint32_t *)0x4006141C))                            /*  pp.769      GPIO Interrupt Clear */
#define GPIO_PORTK_AFSEL_R          (*((volatile uint32_t *)0x40061420))                            /*  pp.770      GPIO Alternate Function Select */
#define GPIO_PORTK_DR2R_R           (*((volatile uint32_t *)0x40061500))                            /*  pp.772      GPIO 2-mA Drive Select */
#define GPIO_PORTK_DR4R_R           (*((volatile uint32_t *)0x40061504))                            /*  pp.773      GPIO 4-mA Drive Select */
#define GPIO_PORTK_DR8R_R           (*((volatile uint32_t *)0x40061508))                            /*  pp.774      GPIO 8-mA Drive Select */
#define GPIO_PORTK_ODR_R            (*((volatile uint32_t *)0x4006150C))                            /*  pp.775      GPIO Open Drain Select */
#define GPIO_PORTK_PUR_R            (*((volatile uint32_t *)0x40061510))                            /*  pp.776      GPIO Pull-Up Select */
#define GPIO_PORTK_PDR_R            (*((volatile uint32_t *)0x40061514))                            /*  pp.778      GPIO Pull-Down Select */
#define GPIO_PORTK_SLR_R            (*((volatile uint32_t *)0x40061518))                            /*  pp.780      GPIO Slew Rate Control Select */
#define GPIO_PORTK_DEN_R            (*((volatile uint32_t *)0x4006151C))                            /*  pp.781      GPIO Digital Enable */
#define GPIO_PORTK_LOCK_R           (*((volatile uint32_t *)0x40061520))                            /*  pp.783      GPIO Lock */
#define GPIO_PORTK_CR_R             (*((volatile uint32_t *)0x40061524))                            /*  pp.784      GPIO Commit */
#define GPIO_PORTK_AMSEL_R          (*((volatile uint32_t *)0x40061528))                            /*  pp.786      GPIO Analog Mode Select */
#define GPIO_PORTK_PCTL_R           (*((volatile uint32_t *)0x4006152C))                            /*  pp.787      GPIO Port Control */
#define GPIO_PORTK_ADCCTL_R         (*((volatile uint32_t *)0x40061530))                            /*  pp.789      GPIO ADC Control */
#define GPIO_PORTK_DMACTL_R         (*((volatile uint32_t *)0x40061534))                            /*  pp.790      GPIO DMA Control */
#define GPIO_PORTK_SI_R             (*((volatile uint32_t *)0x40061538))                            /*  pp.791      GPIO Select Interrupt */
#define GPIO_PORTK_DR12R_R          (*((volatile uint32_t *)0x4006153C))                            /*  pp.792      GPIO 12-mA Drive Select */
#define GPIO_PORTK_WAKEPEN_R        (*((volatile uint32_t *)0x40061540))                            /*  pp.793      GPIO Wake Pin Enable */
#define GPIO_PORTK_WAKELVL_R        (*((volatile uint32_t *)0x40061544))                            /*  pp.795      GPIO Wake Level */
#define GPIO_PORTK_WAKESTAT_R       (*((volatile uint32_t *)0x40061548))                            /*  pp.797      GPIO Wake Status */
#define GPIO_PORTK_PP_R             (*((volatile uint32_t *)0x40061FC0))                            /*  pp.799      GPIO Peripheral Property */
#define GPIO_PORTK_PC_R             (*((volatile uint32_t *)0x40061FC4))                            /*  pp.800      GPIO Peripheral Configuration */

    /*  GPIO Port L (PortL) */
#define GPIO_PORTL_DATA_R           (*((volatile uint32_t *)0x400623FC))                            /*  pp.759      GPIO Data >> PortL[7:0] unmasked */
#define GPIO_PORTL_DIR_R            (*((volatile uint32_t *)0x40062400))                            /*  pp.760      GPIO Direction */
#define GPIO_PORTL_IS_R             (*((volatile uint32_t *)0x40062404))                            /*  pp.761      GPIO Interrupt Sense */
#define GPIO_PORTL_IBE_R            (*((volatile uint32_t *)0x40062408))                            /*  pp.762      GPIO Interrupt Both Edges */
#define GPIO_PORTL_IEV_R            (*((volatile uint32_t *)0x4006240C))                            /*  pp.763      GPIO Interrupt Event */
#define GPIO_PORTL_IM_R             (*((volatile uint32_t *)0x40062410))                            /*  pp.764      GPIO Interrupt Mask */
#define GPIO_PORTL_RIS_R            (*((volatile uint32_t *)0x40062414))                            /*  pp.765      GPIO Raw Interrupt Status */
#define GPIO_PORTL_MIS_R            (*((volatile uint32_t *)0x40062418))                            /*  pp.767      GPIO Masked Interrupt Status */
#define GPIO_PORTL_ICR_R            (*((volatile uint32_t *)0x4006241C))                            /*  pp.769      GPIO Interrupt Clear */
#define GPIO_PORTL_AFSEL_R          (*((volatile uint32_t *)0x40062420))                            /*  pp.770      GPIO Alternate Function Select */
#define GPIO_PORTL_DR2R_R           (*((volatile uint32_t *)0x40062500))                            /*  pp.772      GPIO 2-mA Drive Select */
#define GPIO_PORTL_DR4R_R           (*((volatile uint32_t *)0x40062504))                            /*  pp.773      GPIO 4-mA Drive Select */
#define GPIO_PORTL_DR8R_R           (*((volatile uint32_t *)0x40062508))                            /*  pp.774      GPIO 8-mA Drive Select */
#define GPIO_PORTL_ODR_R            (*((volatile uint32_t *)0x4006250C))                            /*  pp.775      GPIO Open Drain Select */
#define GPIO_PORTL_PUR_R            (*((volatile uint32_t *)0x40062510))                            /*  pp.776      GPIO Pull-Up Select */
#define GPIO_PORTL_PDR_R            (*((volatile uint32_t *)0x40062514))                            /*  pp.778      GPIO Pull-Down Select */
#define GPIO_PORTL_SLR_R            (*((volatile uint32_t *)0x40062518))                            /*  pp.780      GPIO Slew Rate Control Select */
#define GPIO_PORTL_DEN_R            (*((volatile uint32_t *)0x4006251C))                            /*  pp.781      GPIO Digital Enable */
#define GPIO_PORTL_LOCK_R           (*((volatile uint32_t *)0x40062520))                            /*  pp.783      GPIO Lock */
#define GPIO_PORTL_CR_R             (*((volatile uint32_t *)0x40062524))                            /*  pp.784      GPIO Commit */
#define GPIO_PORTL_AMSEL_R          (*((volatile uint32_t *)0x40062528))                            /*  pp.786      GPIO Analog Mode Select */
#define GPIO_PORTL_PCTL_R           (*((volatile uint32_t *)0x4006252C))                            /*  pp.787      GPIO Port Control */
#define GPIO_PORTL_ADCCTL_R         (*((volatile uint32_t *)0x40062530))                            /*  pp.789      GPIO ADC Control */
#define GPIO_PORTL_DMACTL_R         (*((volatile uint32_t *)0x40062534))                            /*  pp.790      GPIO DMA Control */
#define GPIO_PORTL_SI_R             (*((volatile uint32_t *)0x40062538))                            /*  pp.791      GPIO Select Interrupt */
#define GPIO_PORTL_DR12R_R          (*((volatile uint32_t *)0x4006253C))                            /*  pp.792      GPIO 12-mA Drive Select */
#define GPIO_PORTL_WAKEPEN_R        (*((volatile uint32_t *)0x40062540))                            /*  pp.793      GPIO Wake Pin Enable */
#define GPIO_PORTL_WAKELVL_R        (*((volatile uint32_t *)0x40062544))                            /*  pp.795      GPIO Wake Level */
#define GPIO_PORTL_WAKESTAT_R       (*((volatile uint32_t *)0x40062548))                            /*  pp.797      GPIO Wake Status */
#define GPIO_PORTL_PP_R             (*((volatile uint32_t *)0x40062FC0))                            /*  pp.799      GPIO Peripheral Property */
#define GPIO_PORTL_PC_R             (*((volatile uint32_t *)0x40062FC4))                            /*  pp.800      GPIO Peripheral Configuration */

    /*  GPIO Port M (PortM) */
#define GPIO_PORTM_DATA_R           (*((volatile uint32_t *)0x400633FC))                            /*  pp.759      GPIO Data >> PortM[7:0] unmasked */
#define GPIO_PORTM_DIR_R            (*((volatile uint32_t *)0x40063400))                            /*  pp.760      GPIO Direction */
#define GPIO_PORTM_IS_R             (*((volatile uint32_t *)0x40063404))                            /*  pp.761      GPIO Interrupt Sense */
#define GPIO_PORTM_IBE_R            (*((volatile uint32_t *)0x40063408))                            /*  pp.762      GPIO Interrupt Both Edges */
#define GPIO_PORTM_IEV_R            (*((volatile uint32_t *)0x4006340C))                            /*  pp.763      GPIO Interrupt Event */
#define GPIO_PORTM_IM_R             (*((volatile uint32_t *)0x40063410))                            /*  pp.764      GPIO Interrupt Mask */
#define GPIO_PORTM_RIS_R            (*((volatile uint32_t *)0x40063414))                            /*  pp.765      GPIO Raw Interrupt Status */
#define GPIO_PORTM_MIS_R            (*((volatile uint32_t *)0x40063418))                            /*  pp.767      GPIO Masked Interrupt Status */
#define GPIO_PORTM_ICR_R            (*((volatile uint32_t *)0x4006341C))                            /*  pp.769      GPIO Interrupt Clear */
#define GPIO_PORTM_AFSEL_R          (*((volatile uint32_t *)0x40063420))                            /*  pp.770      GPIO Alternate Function Select */
#define GPIO_PORTM_DR2R_R           (*((volatile uint32_t *)0x40063500))                            /*  pp.772      GPIO 2-mA Drive Select */
#define GPIO_PORTM_DR4R_R           (*((volatile uint32_t *)0x40063504))                            /*  pp.773      GPIO 4-mA Drive Select */
#define GPIO_PORTM_DR8R_R           (*((volatile uint32_t *)0x40063508))                            /*  pp.774      GPIO 8-mA Drive Select */
#define GPIO_PORTM_ODR_R            (*((volatile uint32_t *)0x4006350C))                            /*  pp.775      GPIO Open Drain Select */
#define GPIO_PORTM_PUR_R            (*((volatile uint32_t *)0x40063510))                            /*  pp.776      GPIO Pull-Up Select */
#define GPIO_PORTM_PDR_R            (*((volatile uint32_t *)0x40063514))                            /*  pp.778      GPIO Pull-Down Select */
#define GPIO_PORTM_SLR_R            (*((volatile uint32_t *)0x40063518))                            /*  pp.780      GPIO Slew Rate Control Select */
#define GPIO_PORTM_DEN_R            (*((volatile uint32_t *)0x4006351C))                            /*  pp.781      GPIO Digital Enable */
#define GPIO_PORTM_LOCK_R           (*((volatile uint32_t *)0x40063520))                            /*  pp.783      GPIO Lock */
#define GPIO_PORTM_CR_R             (*((volatile uint32_t *)0x40063524))                            /*  pp.784      GPIO Commit */
#define GPIO_PORTM_AMSEL_R          (*((volatile uint32_t *)0x40063528))                            /*  pp.786      GPIO Analog Mode Select */
#define GPIO_PORTM_PCTL_R           (*((volatile uint32_t *)0x4006352C))                            /*  pp.787      GPIO Port Control */
#define GPIO_PORTM_ADCCTL_R         (*((volatile uint32_t *)0x40063530))                            /*  pp.789      GPIO ADC Control */
#define GPIO_PORTM_DMACTL_R         (*((volatile uint32_t *)0x40063534))                            /*  pp.790      GPIO DMA Control */
#define GPIO_PORTM_SI_R             (*((volatile uint32_t *)0x40063538))                            /*  pp.791      GPIO Select Interrupt */
#define GPIO_PORTM_DR12R_R          (*((volatile uint32_t *)0x4006353C))                            /*  pp.792      GPIO 12-mA Drive Select */
#define GPIO_PORTM_WAKEPEN_R        (*((volatile uint32_t *)0x40063540))                            /*  pp.793      GPIO Wake Pin Enable */
#define GPIO_PORTM_WAKELVL_R        (*((volatile uint32_t *)0x40063544))                            /*  pp.795      GPIO Wake Level */
#define GPIO_PORTM_WAKESTAT_R       (*((volatile uint32_t *)0x40063548))                            /*  pp.797      GPIO Wake Status */
#define GPIO_PORTM_PP_R             (*((volatile uint32_t *)0x40063FC0))                            /*  pp.799      GPIO Peripheral Property */
#define GPIO_PORTM_PC_R             (*((volatile uint32_t *)0x40063FC4))                            /*  pp.800      GPIO Peripheral Configuration */

    /*  GPIO Port N (PortN) */
#define GPIO_PORTN_DATA_R           (*((volatile uint32_t *)0x400643FC))                            /*  pp.759      GPIO Data >> PortN[7:0] unmasked */
#define GPIO_PORTN_DIR_R            (*((volatile uint32_t *)0x40064400))                            /*  pp.760      GPIO Direction */
#define GPIO_PORTN_IS_R             (*((volatile uint32_t *)0x40064404))                            /*  pp.761      GPIO Interrupt Sense */
#define GPIO_PORTN_IBE_R            (*((volatile uint32_t *)0x40064408))                            /*  pp.762      GPIO Interrupt Both Edges */
#define GPIO_PORTN_IEV_R            (*((volatile uint32_t *)0x4006440C))                            /*  pp.763      GPIO Interrupt Event */
#define GPIO_PORTN_IM_R             (*((volatile uint32_t *)0x40064410))                            /*  pp.764      GPIO Interrupt Mask */
#define GPIO_PORTN_RIS_R            (*((volatile uint32_t *)0x40064414))                            /*  pp.765      GPIO Raw Interrupt Status */
#define GPIO_PORTN_MIS_R            (*((volatile uint32_t *)0x40064418))                            /*  pp.767      GPIO Masked Interrupt Status */
#define GPIO_PORTN_ICR_R            (*((volatile uint32_t *)0x4006441C))                            /*  pp.769      GPIO Interrupt Clear */
#define GPIO_PORTN_AFSEL_R          (*((volatile uint32_t *)0x40064420))                            /*  pp.770      GPIO Alternate Function Select */
#define GPIO_PORTN_DR2R_R           (*((volatile uint32_t *)0x40064500))                            /*  pp.772      GPIO 2-mA Drive Select */
#define GPIO_PORTN_DR4R_R           (*((volatile uint32_t *)0x40064504))                            /*  pp.773      GPIO 4-mA Drive Select */
#define GPIO_PORTN_DR8R_R           (*((volatile uint32_t *)0x40064508))                            /*  pp.774      GPIO 8-mA Drive Select */
#define GPIO_PORTN_ODR_R            (*((volatile uint32_t *)0x4006450C))                            /*  pp.775      GPIO Open Drain Select */
#define GPIO_PORTN_PUR_R            (*((volatile uint32_t *)0x40064510))                            /*  pp.776      GPIO Pull-Up Select */
#define GPIO_PORTN_PDR_R            (*((volatile uint32_t *)0x40064514))                            /*  pp.778      GPIO Pull-Down Select */
#define GPIO_PORTN_SLR_R            (*((volatile uint32_t *)0x40064518))                            /*  pp.780      GPIO Slew Rate Control Select */
#define GPIO_PORTN_DEN_R            (*((volatile uint32_t *)0x4006451C))                            /*  pp.781      GPIO Digital Enable */
#define GPIO_PORTN_LOCK_R           (*((volatile uint32_t *)0x40064520))                            /*  pp.783      GPIO Lock */
#define GPIO_PORTN_CR_R             (*((volatile uint32_t *)0x40064524))                            /*  pp.784      GPIO Commit */
#define GPIO_PORTN_AMSEL_R          (*((volatile uint32_t *)0x40064528))                            /*  pp.786      GPIO Analog Mode Select */
#define GPIO_PORTN_PCTL_R           (*((volatile uint32_t *)0x4006452C))                            /*  pp.787      GPIO Port Control */
#define GPIO_PORTN_ADCCTL_R         (*((volatile uint32_t *)0x40064530))                            /*  pp.789      GPIO ADC Control */
#define GPIO_PORTN_DMACTL_R         (*((volatile uint32_t *)0x40064534))                            /*  pp.790      GPIO DMA Control */
#define GPIO_PORTN_SI_R             (*((volatile uint32_t *)0x40064538))                            /*  pp.791      GPIO Select Interrupt */
#define GPIO_PORTN_DR12R_R          (*((volatile uint32_t *)0x4006453C))                            /*  pp.792      GPIO 12-mA Drive Select */
#define GPIO_PORTN_WAKEPEN_R        (*((volatile uint32_t *)0x40064540))                            /*  pp.793      GPIO Wake Pin Enable */
#define GPIO_PORTN_WAKELVL_R        (*((volatile uint32_t *)0x40064544))                            /*  pp.795      GPIO Wake Level */
#define GPIO_PORTN_WAKESTAT_R       (*((volatile uint32_t *)0x40064548))                            /*  pp.797      GPIO Wake Status */
#define GPIO_PORTN_PP_R             (*((volatile uint32_t *)0x40064FC0))                            /*  pp.799      GPIO Peripheral Property */
#define GPIO_PORTN_PC_R             (*((volatile uint32_t *)0x40064FC4))                            /*  pp.800      GPIO Peripheral Configuration */

    /*  GPIO Port P (PortP) */
#define GPIO_PORTP_DATA_R           (*((volatile uint32_t *)0x400653FC))                            /*  pp.759      GPIO Data >> PortP[7:0] unmasked */
#define GPIO_PORTP_DIR_R            (*((volatile uint32_t *)0x40065400))                            /*  pp.760      GPIO Direction */
#define GPIO_PORTP_IS_R             (*((volatile uint32_t *)0x40065404))                            /*  pp.761      GPIO Interrupt Sense */
#define GPIO_PORTP_IBE_R            (*((volatile uint32_t *)0x40065408))                            /*  pp.762      GPIO Interrupt Both Edges */
#define GPIO_PORTP_IEV_R            (*((volatile uint32_t *)0x4006540C))                            /*  pp.763      GPIO Interrupt Event */
#define GPIO_PORTP_IM_R             (*((volatile uint32_t *)0x40065410))                            /*  pp.764      GPIO Interrupt Mask */
#define GPIO_PORTP_RIS_R            (*((volatile uint32_t *)0x40065414))                            /*  pp.765      GPIO Raw Interrupt Status */
#define GPIO_PORTP_MIS_R            (*((volatile uint32_t *)0x40065418))                            /*  pp.767      GPIO Masked Interrupt Status */
#define GPIO_PORTP_ICR_R            (*((volatile uint32_t *)0x4006541C))                            /*  pp.769      GPIO Interrupt Clear */
#define GPIO_PORTP_AFSEL_R          (*((volatile uint32_t *)0x40065420))                            /*  pp.770      GPIO Alternate Function Select */
#define GPIO_PORTP_DR2R_R           (*((volatile uint32_t *)0x40065500))                            /*  pp.772      GPIO 2-mA Drive Select */
#define GPIO_PORTP_DR4R_R           (*((volatile uint32_t *)0x40065504))                            /*  pp.773      GPIO 4-mA Drive Select */
#define GPIO_PORTP_DR8R_R           (*((volatile uint32_t *)0x40065508))                            /*  pp.774      GPIO 8-mA Drive Select */
#define GPIO_PORTP_ODR_R            (*((volatile uint32_t *)0x4006550C))                            /*  pp.775      GPIO Open Drain Select */
#define GPIO_PORTP_PUR_R            (*((volatile uint32_t *)0x40065510))                            /*  pp.776      GPIO Pull-Up Select */
#define GPIO_PORTP_PDR_R            (*((volatile uint32_t *)0x40065514))                            /*  pp.778      GPIO Pull-Down Select */
#define GPIO_PORTP_SLR_R            (*((volatile uint32_t *)0x40065518))                            /*  pp.780      GPIO Slew Rate Control Select */
#define GPIO_PORTP_DEN_R            (*((volatile uint32_t *)0x4006551C))                            /*  pp.781      GPIO Digital Enable */
#define GPIO_PORTP_LOCK_R           (*((volatile uint32_t *)0x40065520))                            /*  pp.783      GPIO Lock */
#define GPIO_PORTP_CR_R             (*((volatile uint32_t *)0x40065524))                            /*  pp.784      GPIO Commit */
#define GPIO_PORTP_AMSEL_R          (*((volatile uint32_t *)0x40065528))                            /*  pp.786      GPIO Analog Mode Select */
#define GPIO_PORTP_PCTL_R           (*((volatile uint32_t *)0x4006552C))                            /*  pp.787      GPIO Port Control */
#define GPIO_PORTP_ADCCTL_R         (*((volatile uint32_t *)0x40065530))                            /*  pp.789      GPIO ADC Control */
#define GPIO_PORTP_DMACTL_R         (*((volatile uint32_t *)0x40065534))                            /*  pp.790      GPIO DMA Control */
#define GPIO_PORTP_SI_R             (*((volatile uint32_t *)0x40065538))                            /*  pp.791      GPIO Select Interrupt */
#define GPIO_PORTP_DR12R_R          (*((volatile uint32_t *)0x4006553C))                            /*  pp.792      GPIO 12-mA Drive Select */
#define GPIO_PORTP_WAKEPEN_R        (*((volatile uint32_t *)0x40065540))                            /*  pp.793      GPIO Wake Pin Enable */
#define GPIO_PORTP_WAKELVL_R        (*((volatile uint32_t *)0x40065544))                            /*  pp.795      GPIO Wake Level */
#define GPIO_PORTP_WAKESTAT_R       (*((volatile uint32_t *)0x40065548))                            /*  pp.797      GPIO Wake Status */
#define GPIO_PORTP_PP_R             (*((volatile uint32_t *)0x40065FC0))                            /*  pp.799      GPIO Peripheral Property */
#define GPIO_PORTP_PC_R             (*((volatile uint32_t *)0x40065FC4))                            /*  pp.800      GPIO Peripheral Configuration */

    /*  GPIO Port Q (PortQ) */
#define GPIO_PORTQ_DATA_R           (*((volatile uint32_t *)0x400663FC))                            /*  pp.759      GPIO Data >> PortQ[7:0] unmasked */
#define GPIO_PORTQ_DIR_R            (*((volatile uint32_t *)0x40066400))                            /*  pp.760      GPIO Direction */
#define GPIO_PORTQ_IS_R             (*((volatile uint32_t *)0x40066404))                            /*  pp.761      GPIO Interrupt Sense */
#define GPIO_PORTQ_IBE_R            (*((volatile uint32_t *)0x40066408))                            /*  pp.762      GPIO Interrupt Both Edges */
#define GPIO_PORTQ_IEV_R            (*((volatile uint32_t *)0x4006640C))                            /*  pp.763      GPIO Interrupt Event */
#define GPIO_PORTQ_IM_R             (*((volatile uint32_t *)0x40066410))                            /*  pp.764      GPIO Interrupt Mask */
#define GPIO_PORTQ_RIS_R            (*((volatile uint32_t *)0x40066414))                            /*  pp.765      GPIO Raw Interrupt Status */
#define GPIO_PORTQ_MIS_R            (*((volatile uint32_t *)0x40066418))                            /*  pp.767      GPIO Masked Interrupt Status */
#define GPIO_PORTQ_ICR_R            (*((volatile uint32_t *)0x4006641C))                            /*  pp.769      GPIO Interrupt Clear */
#define GPIO_PORTQ_AFSEL_R          (*((volatile uint32_t *)0x40066420))                            /*  pp.770      GPIO Alternate Function Select */
#define GPIO_PORTQ_DR2R_R           (*((volatile uint32_t *)0x40066500))                            /*  pp.772      GPIO 2-mA Drive Select */
#define GPIO_PORTQ_DR4R_R           (*((volatile uint32_t *)0x40066504))                            /*  pp.773      GPIO 4-mA Drive Select */
#define GPIO_PORTQ_DR8R_R           (*((volatile uint32_t *)0x40066508))                            /*  pp.774      GPIO 8-mA Drive Select */
#define GPIO_PORTQ_ODR_R            (*((volatile uint32_t *)0x4006650C))                            /*  pp.775      GPIO Open Drain Select */
#define GPIO_PORTQ_PUR_R            (*((volatile uint32_t *)0x40066510))                            /*  pp.776      GPIO Pull-Up Select */
#define GPIO_PORTQ_PDR_R            (*((volatile uint32_t *)0x40066514))                            /*  pp.778      GPIO Pull-Down Select */
#define GPIO_PORTQ_SLR_R            (*((volatile uint32_t *)0x40066518))                            /*  pp.780      GPIO Slew Rate Control Select */
#define GPIO_PORTQ_DEN_R            (*((volatile uint32_t *)0x4006651C))                            /*  pp.781      GPIO Digital Enable */
#define GPIO_PORTQ_LOCK_R           (*((volatile uint32_t *)0x40066520))                            /*  pp.783      GPIO Lock */
#define GPIO_PORTQ_CR_R             (*((volatile uint32_t *)0x40066524))                            /*  pp.784      GPIO Commit */
#define GPIO_PORTQ_AMSEL_R          (*((volatile uint32_t *)0x40066528))                            /*  pp.786      GPIO Analog Mode Select */
#define GPIO_PORTQ_PCTL_R           (*((volatile uint32_t *)0x4006652C))                            /*  pp.787      GPIO Port Control */
#define GPIO_PORTQ_ADCCTL_R         (*((volatile uint32_t *)0x40066530))                            /*  pp.789      GPIO ADC Control */
#define GPIO_PORTQ_DMACTL_R         (*((volatile uint32_t *)0x40066534))                            /*  pp.790      GPIO DMA Control */
#define GPIO_PORTQ_SI_R             (*((volatile uint32_t *)0x40066538))                            /*  pp.791      GPIO Select Interrupt */
#define GPIO_PORTQ_DR12R_R          (*((volatile uint32_t *)0x4006653C))                            /*  pp.792      GPIO 12-mA Drive Select */
#define GPIO_PORTQ_WAKEPEN_R        (*((volatile uint32_t *)0x40066540))                            /*  pp.793      GPIO Wake Pin Enable */
#define GPIO_PORTQ_WAKELVL_R        (*((volatile uint32_t *)0x40066544))                            /*  pp.795      GPIO Wake Level */
#define GPIO_PORTQ_WAKESTAT_R       (*((volatile uint32_t *)0x40066548))                            /*  pp.797      GPIO Wake Status */
#define GPIO_PORTQ_PP_R             (*((volatile uint32_t *)0x40066FC0))                            /*  pp.799      GPIO Peripheral Property */
#define GPIO_PORTQ_PC_R             (*((volatile uint32_t *)0x40066FC4))                            /*  pp.800      GPIO Peripheral Configuration */


/**************************************************************************************************
 *  Macros de campos de configuración                                                                   pp.757      Register map
 */

    /** Bit fields in the GPIO_PC register                                                              pp.800 */
#define GPIO_PC_EDM7_M              0x0000C000                                                      /*  Extended Drive Mode Bit 7 mask */
#define GPIO_PC_EDM6_M              0x00003000                                                      /*  Extended Drive Mode Bit 6 mask */
#define GPIO_PC_EDM5_M              0x00000C00                                                      /*  Extended Drive Mode Bit 5 mask */
#define GPIO_PC_EDM4_M              0x00000300                                                      /*  Extended Drive Mode Bit 4 mask */
#define GPIO_PC_EDM3_M              0x000000C0                                                      /*  Extended Drive Mode Bit 3 mask */
#define GPIO_PC_EDM2_M              0x00000030                                                      /*  Extended Drive Mode Bit 2 mask */
#define GPIO_PC_EDM1_M              0x0000000C                                                      /*  Extended Drive Mode Bit 1 mask */
#define GPIO_PC_EDM0_M              0x00000003                                                      /*  Extended Drive Mode Bit 0 mask */
#define GPIO_PC_EDM7_S              14                                                              /*  Extended Drive Mode Bit 7 shift */
#define GPIO_PC_EDM6_S              12                                                              /*  Extended Drive Mode Bit 6 shift */
#define GPIO_PC_EDM5_S              10                                                              /*  Extended Drive Mode Bit 5 shift */
#define GPIO_PC_EDM4_S              8                                                               /*  Extended Drive Mode Bit 4 shift */
#define GPIO_PC_EDM3_S              6                                                               /*  Extended Drive Mode Bit 3 shift */
#define GPIO_PC_EDM2_S              4                                                               /*  Extended Drive Mode Bit 2 shift */
#define GPIO_PC_EDM1_S              2                                                               /*  Extended Drive Mode Bit 1 shift */
#define GPIO_PC_EDM0_S              0                                                               /*  Extended Drive Mode Bit 0 shift */

    /** Bit fields for the GPIO pin */
#define GPIO_PIN_7                  0x00000080                                                      /*  GPIO pin 7 */
#define GPIO_PIN_6                  0x00000040                                                      /*  GPIO pin 6 */
#define GPIO_PIN_5                  0x00000020                                                      /*  GPIO pin 5 */
#define GPIO_PIN_4                  0x00000010                                                      /*  GPIO pin 4 */
#define GPIO_PIN_3                  0x00000008                                                      /*  GPIO pin 3 */
#define GPIO_PIN_2                  0x00000004                                                      /*  GPIO pin 2 */
#define GPIO_PIN_1                  0x00000002                                                      /*  GPIO pin 1 */
#define GPIO_PIN_0                  0x00000001                                                      /*  GPIO pin 0 */


/**************************************************************************************************
 *  Prototipos de funciones
 */

void GPIO_PortF_Init(void);                                                                         /*  Inicialización y configuración del GPIO PortF */
void GPIO_PortN_Init(void);                                                                         /*  Inicialización y configuración del GPIO PortN */


#endif                                                                                              /*  GPIO_H */
