/**************************************************************************************************
 *  Universidad Nacional Autónoma de México (UNAM)
 *  Facultad de Ingeniería | Departamento de Electrónica
 * 
 *  Autor:          M.I. Christo Aldair Lara Tenorio
 * 
 *  Descripción:    Sistema que simula al MISSION BOSS para pruebas funcionales de integración del
 *                  GuaraniSat-2. 
 * 
 *  Archivo:        Archivo de cabecera del módulo SYSCTL
 * 
 *  Tarjeta de desarrollo:  EK-TM4C1294XL Evaluation board
 ***********************************************/


#ifndef SYSCTL_H                                                                                    /*  Verificar si SYSCTL_H no ha sido definido previamente */
#define SYSCTL_H                                                                                    /*  Definir SYSCTL_H para evitar inclusiones múltiples del mismo archivo */


/**************************************************************************************************
 *  Archivos de cabecera
 */

#include <stdint.h>                                                                                 /*  Tipos enteros con tamaños fijos */


/**************************************************************************************************
 *  Definiciones y macros
 *  System Control (SYSCTL) registers                                                                   pp.247      Register map
 */

#define SYSCTL_DID0_R               (*((volatile uint32_t *)0x400FE000))                            /*  pp.255      Device Identification 0 */
#define SYSCTL_DID1_R               (*((volatile uint32_t *)0x400FE004))                            /*  pp.257      Device Identification 1 */
#define SYSCTL_PTBOCTL_R            (*((volatile uint32_t *)0x400FE038))                            /*  pp.259      Power-Temp Brown Out Control */
#define SYSCTL_RIS_R                (*((volatile uint32_t *)0x400FE050))                            /*  pp.261      Raw Interrupt Status */
#define SYSCTL_IMC_R                (*((volatile uint32_t *)0x400FE054))                            /*  pp.263      Interrupt Mask Control */
#define SYSCTL_MISC_R               (*((volatile uint32_t *)0x400FE058))                            /*  pp.265      Masked Interrupt Status and Clear */
#define SYSCTL_RESC_R               (*((volatile uint32_t *)0x400FE05C))                            /*  pp.267      Reset Cause */
#define SYSCTL_PWRTC_R              (*((volatile uint32_t *)0x400FE060))                            /*  pp.270      Power-Temperature Cause */
#define SYSCTL_NMIC_R               (*((volatile uint32_t *)0x400FE064))                            /*  pp.271      NMI Cause Register */
#define SYSCTL_MOSCCTL_R            (*((volatile uint32_t *)0x400FE07C))                            /*  pp.273      Main Oscillator Control */
#define SYSCTL_RSCLKCFG_R           (*((volatile uint32_t *)0x400FE0B0))                            /*  pp.275      Run and Sleep Mode Configuration */
#define SYSCTL_MEMTIM0_R            (*((volatile uint32_t *)0x400FE0C0))                            /*  pp.277      Memory Timing Parameter 0 for Main Flash and EEPROM */
#define SYSCTL_ALTCLKCFG_R          (*((volatile uint32_t *)0x400FE138))                            /*  pp.280      Alternate Clock Configuration */
#define SYSCTL_DSCLKCFG_R           (*((volatile uint32_t *)0x400FE144))                            /*  pp.281      Deep Sleep Clock Configuration */
#define SYSCTL_DIVSCLK_R            (*((volatile uint32_t *)0x400FE148))                            /*  pp.284      Divisor and Source Clock Configuration */
#define SYSCTL_SYSPROP_R            (*((volatile uint32_t *)0x400FE14C))                            /*  pp.286      System Properties */
#define SYSCTL_PIOSCCAL_R           (*((volatile uint32_t *)0x400FE150))                            /*  pp.289      Precision Internar Oscillator Calibration */
#define SYSCTL_PIOSCSTAT_R          (*((volatile uint32_t *)0x400FE154))                            /*  pp.291      Precision Internar Oscillator Statistics */
#define SYSCTL_PLLFREQ0_R           (*((volatile uint32_t *)0x400FE160))                            /*  pp.292      PLL Frequency 0 */
#define SYSCTL_PLLFREQ1_R           (*((volatile uint32_t *)0x400FE164))                            /*  pp.293      PLL Frequency 1 */
#define SYSCTL_PLLSTAT_R            (*((volatile uint32_t *)0x400FE168))                            /*  pp.294      PLL Status */
#define SYSCTL_SLPPWRCFG_R          (*((volatile uint32_t *)0x400FE188))                            /*  pp.295      Sleep Power Configuration */
#define SYSCTL_DSLPPWRCFG_R         (*((volatile uint32_t *)0x400FE18C))                            /*  pp.297      Deep-Sleep Power Configuration */
#define SYSCTL_NVMSTAT_R            (*((volatile uint32_t *)0x400FE1A0))                            /*  pp.299      Non-Volatile Memory Information */
#define SYSCTL_LDOSPCTL_R           (*((volatile uint32_t *)0x400FE1B4))                            /*  pp.300      LDO Sleep Power Control */
#define SYSCTL_LDOSPCAL_R           (*((volatile uint32_t *)0x400FE1B8))                            /*  pp.302      LDO Sleep Power Calibration */
#define SYSCTL_LDODPCTL_R           (*((volatile uint32_t *)0x400FE1BC))                            /*  pp.303      LDO Deep-Sleep Power Control */
#define SYSCTL_LDODPCAL_R           (*((volatile uint32_t *)0x400FE1C0))                            /*  pp.305      LDO Deep-Sleep Power Calibration */
#define SYSCTL_SDPMST_R             (*((volatile uint32_t *)0x400FE1CC))                            /*  pp.306      Sleep / Deep-Sleep Power Mode Status */
#define SYSCTL_RESBEHAVCTL_R        (*((volatile uint32_t *)0x400FE1D8))                            /*  pp.309      Reset Behavior Control */
#define SYSCTL_HSSR_R               (*((volatile uint32_t *)0x400FE1F4))                            /*  pp.311      Hardware System Service Request */
#define SYSCTL_USBPDS_R             (*((volatile uint32_t *)0x400FE280))                            /*  pp.312      USB Power Domain Status */
#define SYSCTL_USBMPC_R             (*((volatile uint32_t *)0x400FE284))                            /*  pp.313      USB Memory Power Control */
#define SYSCTL_EMACPDS_R            (*((volatile uint32_t *)0x400FE288))                            /*  pp.314      Ethernet MAC Power Domain Status */
#define SYSCTL_EMACMPC_R            (*((volatile uint32_t *)0x400FE28C))                            /*  pp.315      Ethernet MAC Memory Power Control */
#define SYSCTL_CAN0_PDS_R           (*((volatile uint32_t *)0x400F3298))                            /*  pp.316      CAN 0 Power Domain Status */
#define SYSCTL_CAN0_MPC_R           (*((volatile uint32_t *)0x400F329C))                            /*  pp.317      CAN 0 Memory Power Control */
#define SYSCTL_CAN1_PDS_R           (*((volatile uint32_t *)0x400F32A0))                            /*  pp.318      CAN 1 Power Domain Status */
#define SYSCTL_CAN1_MPC_R           (*((volatile uint32_t *)0x400F32A4))                            /*  pp.319      CAN 1 Memory Power Control */
#define SYSCTL_PPWD_R               (*((volatile uint32_t *)0x400FE300))                            /*  pp.320      Watchdog Timer Peripheral Present */
#define SYSCTL_PPTIMER_R            (*((volatile uint32_t *)0x400FE304))                            /*  pp.321      16/32-Bit General-Purpose Timer Peripheral Present */
#define SYSCTL_PPGPIO_R             (*((volatile uint32_t *)0x400FE308))                            /*  pp.323      General-Purpose Input/Output Peripheral Present */
#define SYSCTL_PPDMA_R              (*((volatile uint32_t *)0x400FE30C))                            /*  pp.326      Micro Direct Memory Access Peripheral Present */
#define SYSCTL_PPEPI_R              (*((volatile uint32_t *)0x400FE310))                            /*  pp.327      EPI Peripheral Present */
#define SYSCTL_PPHIB_R              (*((volatile uint32_t *)0x400FE314))                            /*  pp.328      Hibernation Peripheral Present */
#define SYSCTL_PPUART_R             (*((volatile uint32_t *)0x400FE318))                            /*  pp.329      Universal Asynchronous Receiver/Transmitter Peripheral Present */
#define SYSCTL_PPSSI_R              (*((volatile uint32_t *)0x400FE31C))                            /*  pp.331      Synchronous Serial Interface Peripheral Present */
#define SYSCTL_PPI2C_R              (*((volatile uint32_t *)0x400FE320))                            /*  pp.333      Inter-Integrated Circuit Peripheral Present */
#define SYSCTL_PPUSB_R              (*((volatile uint32_t *)0x400FE328))                            /*  pp.335      Universal Serial Bus Peripheral Present */
#define SYSCTL_PPEPHY_R             (*((volatile uint32_t *)0x400FE330))                            /*  pp.336      Ethernet PHY Peripheral Present */
#define SYSCTL_PPCAN_R              (*((volatile uint32_t *)0x400FE334))                            /*  pp.337      Controller Area Network Peripheral Present */
#define SYSCTL_PPADC_R              (*((volatile uint32_t *)0x400FE338))                            /*  pp.338      Analog-to-Digital Converter Peripheral Present */
#define SYSCTL_PPACMP_R             (*((volatile uint32_t *)0x400FE33C))                            /*  pp.339      Analog Comparator Peripheral Present */
#define SYSCTL_PPPWM_R              (*((volatile uint32_t *)0x400FE340))                            /*  pp.340      Pulse Width Modulator Peripheral Present */
#define SYSCTL_PPQEI_R              (*((volatile uint32_t *)0x400FE344))                            /*  pp.341      Quadrature Encoder Interface Peripheral Present */
#define SYSCTL_PPLPC_R              (*((volatile uint32_t *)0x400FE348))                            /*  pp.342      Low Pin Count Interface Peripheral Present */
#define SYSCTL_PPPECI_R             (*((volatile uint32_t *)0x400FE350))                            /*  pp.343      Platform Environment Control Interface Peripheral Present */
#define SYSCTL_PPFAN_R              (*((volatile uint32_t *)0x400FE354))                            /*  pp.344      Fan Control Peripheral Present */
#define SYSCTL_PPEEPROM_R           (*((volatile uint32_t *)0x400FE358))                            /*  pp.345      EEPROM Peripheral Present */
#define SYSCTL_PPWTIMER_R           (*((volatile uint32_t *)0x400FE35C))                            /*  pp.346      32/64-Bit General-Purpose Timer Peripheral Present */
#define SYSCTL_PPRTS_R              (*((volatile uint32_t *)0x400FE370))                            /*  pp.347      Remote Temperature Sensor Peripheral Present */
#define SYSCTL_PPCCM_R              (*((volatile uint32_t *)0x400FE374))                            /*  pp.348      CRC Module Peripheral Present */
#define SYSCTL_PPLCD_R              (*((volatile uint32_t *)0x400FE390))                            /*  pp.349      LCD Peripheral Present */
#define SYSCTL_PPOWIRE_R            (*((volatile uint32_t *)0x400FE398))                            /*  pp.350      1-Wire Peripheral Present */
#define SYSCTL_PPEMAC_R             (*((volatile uint32_t *)0x400FE39C))                            /*  pp.351      Ethernet MAC Peripheral Present */
#define SYSCTL_PPPRB_R              (*((volatile uint32_t *)0x400FE3A0))                            /*  pp.352      Power Regulator Bus Peripheral Present */
#define SYSCTL_PPHIM_R              (*((volatile uint32_t *)0x400FE3A4))                            /*  pp.353      Human Interface Master Peripheral Present */
#define SYSCTL_SRWD_R               (*((volatile uint32_t *)0x400FE500))                            /*  pp.354      Watchdog Timer Software Reset */
#define SYSCTL_SRTIMER_R            (*((volatile uint32_t *)0x400FE504))                            /*  pp.355      16/32-Bit General-Purpose Timer Software Reset */
#define SYSCTL_SRGPIO_R             (*((volatile uint32_t *)0x400FE508))                            /*  pp.357      General-Purpose Input/Output Software Reset */
#define SYSCTL_SRDMA_R              (*((volatile uint32_t *)0x400FE50C))                            /*  pp.360      Micro Direct Memory Access Software Reset */
#define SYSCTL_SREPI_R              (*((volatile uint32_t *)0x400FE510))                            /*  pp.361      EPI Software Reset */
#define SYSCTL_SRHIB_R              (*((volatile uint32_t *)0x400FE514))                            /*  pp.362      Hibernation Software Reset */
#define SYSCTL_SRUART_R             (*((volatile uint32_t *)0x400FE518))                            /*  pp.363      Universal Asynchronous Receiver/Transmitter Software Reset */
#define SYSCTL_SRSSI_R              (*((volatile uint32_t *)0x400FE51C))                            /*  pp.365      Synchronous Serial Interface Software Reset */
#define SYSCTL_SRI2C_R              (*((volatile uint32_t *)0x400FE520))                            /*  pp.367      Inter-Integrated Circuit Software Reset */
#define SYSCTL_SRUSB_R              (*((volatile uint32_t *)0x400FE528))                            /*  pp.369      Universal Serial Bus Software Reset */
#define SYSCTL_SREPHY_R             (*((volatile uint32_t *)0x400FE530))                            /*  pp.370      Ethernet PHY Software Reset */
#define SYSCTL_SRCAN_R              (*((volatile uint32_t *)0x400FE534))                            /*  pp.371      Controller Area Network Software Reset */
#define SYSCTL_SRADC_R              (*((volatile uint32_t *)0x400FE538))                            /*  pp.372      Analog-to-Digital Converter Software Reset */
#define SYSCTL_SRACMP_R             (*((volatile uint32_t *)0x400FE53C))                            /*  pp.373      Analog Comparator Software Reset */
#define SYSCTL_SRPWM_R              (*((volatile uint32_t *)0x400FE540))                            /*  pp.374      Pulse Width Modulator Software Reset */
#define SYSCTL_SRQEI_R              (*((volatile uint32_t *)0x400FE544))                            /*  pp.375      Quadrature Encoder Interface Software Reset */
#define SYSCTL_SREEPROM_R           (*((volatile uint32_t *)0x400FE558))                            /*  pp.376      EEPROM Software Reset */
#define SYSCTL_SRCCM_R              (*((volatile uint32_t *)0x400FE574))                            /*  pp.377      CRC Module Software Reset */
#define SYSCTL_SREMAC_R             (*((volatile uint32_t *)0x400FE59C))                            /*  pp.378      Ethernet MAC Software Reset */
#define SYSCTL_RCGCWD_R             (*((volatile uint32_t *)0x400FE600))                            /*  pp.379      Watchdog Timer Run Mode Clock Gating Control */
#define SYSCTL_RCGCTIMER_R          (*((volatile uint32_t *)0x400FE604))                            /*  pp.380      16/32-Bit General-Purpose Timer Run Mode Clock Gating Control */
#define SYSCTL_RCGCGPIO_R           (*((volatile uint32_t *)0x400FE608))                            /*  pp.382      General-Purpose Input/Output Run Mode Clock Gating Control */
#define SYSCTL_RCGCDMA_R            (*((volatile uint32_t *)0x400FE60C))                            /*  pp.385      Micro Direct Memory Access Run Mode Clock Gating Control */
#define SYSCTL_RCGCEPI_R            (*((volatile uint32_t *)0x400FE610))                            /*  pp.386      EPI Run Mode Clock Gating Control */
#define SYSCTL_RCGCHIB_R            (*((volatile uint32_t *)0x400FE614))                            /*  pp.387      Hibernation Run Mode Clock Gating Control */
#define SYSCTL_RCGCUART_R           (*((volatile uint32_t *)0x400FE618))                            /*  pp.388      Universal Asynchronous Receiver/Transmitter Run Mode Clock Gating Control */
#define SYSCTL_RCGCSSI_R            (*((volatile uint32_t *)0x400FE61C))                            /*  pp.390      Synchronous Serial Interface Run Mode Clock Gating Control */
#define SYSCTL_RCGCI2C_R            (*((volatile uint32_t *)0x400FE620))                            /*  pp.391      Inter-Integrated Circuit Run Mode Clock Gating Control */
#define SYSCTL_RCGCUSB_R            (*((volatile uint32_t *)0x400FE628))                            /*  pp.393      Universal Serial Bus Run Mode Clock Gating Control */
#define SYSCTL_RCGCEPHY_R           (*((volatile uint32_t *)0x400FE630))                            /*  pp.394      Ethernet PHY Run Mode Clock Gating Control */
#define SYSCTL_RCGCCAN_R            (*((volatile uint32_t *)0x400FE634))                            /*  pp.395      Controller Area Network Run Mode Clock Gating Control */
#define SYSCTL_RCGCADC_R            (*((volatile uint32_t *)0x400FE638))                            /*  pp.396      Analog-to-Digital Converter Run Mode Clock Gating Control */
#define SYSCTL_RCGCACMP_R           (*((volatile uint32_t *)0x400FE63C))                            /*  pp.397      Analog Comparator Run Mode Clock Gating Control */
#define SYSCTL_RCGCPWM_R            (*((volatile uint32_t *)0x400FE640))                            /*  pp.398      Pulse Width Modulator Run Mode Clock Gating Control */
#define SYSCTL_RCGCQEI_R            (*((volatile uint32_t *)0x400FE644))                            /*  pp.399      Quadrature Encoder Interface Run Mode Clock Gating Control */
#define SYSCTL_RCGCEEPROM_R         (*((volatile uint32_t *)0x400FE658))                            /*  pp.400      EEPROM Run Mode Clock Gating Control */
#define SYSCTL_RCGCCCM_R            (*((volatile uint32_t *)0x400FE674))                            /*  pp.401      CRC Module Run Mode Clock Gating Control */
#define SYSCTL_RCGCEMAC_R           (*((volatile uint32_t *)0x400FE69C))                            /*  pp.402      Ethernet MAC Run Mode Clock Gating Control */
#define SYSCTL_SCGCWD_R             (*((volatile uint32_t *)0x400FE700))                            /*  pp.403      Watchdog Timer Sleep Mode Clock Gating Control */
#define SYSCTL_SCGCTIMER_R          (*((volatile uint32_t *)0x400FE704))                            /*  pp.404      16/32-Bit General-Purpose Timer Sleep Mode Clock Gating Control */
#define SYSCTL_SCGCGPIO_R           (*((volatile uint32_t *)0x400FE708))                            /*  pp.406      General-Purpose Input/Output Sleep Mode Clock Gating Control */
#define SYSCTL_SCGCDMA_R            (*((volatile uint32_t *)0x400FE70C))                            /*  pp.409      Micro Direct Memory Access Sleep Mode Clock Gating Control */
#define SYSCTL_SCGCEPI_R            (*((volatile uint32_t *)0x400FE710))                            /*  pp.410      EPI Sleep Mode Clock Gating Control */
#define SYSCTL_SCGCHIB_R            (*((volatile uint32_t *)0x400FE714))                            /*  pp.411      Hibernation Sleep Mode Clock Gating Control */
#define SYSCTL_SCGCUART_R           (*((volatile uint32_t *)0x400FE718))                            /*  pp.412      Universal Asynchronous Receiver/Transmitter Sleep Mode Clock Gating Control */
#define SYSCTL_SCGCSSI_R            (*((volatile uint32_t *)0x400FE71C))                            /*  pp.414      Synchronous Serial Interface Sleep Mode Clock Gating Control */
#define SYSCTL_SCGCI2C_R            (*((volatile uint32_t *)0x400FE720))                            /*  pp.415      Inter-Integrated Circuit Sleep Mode Clock Gating Control */
#define SYSCTL_SCGCUSB_R            (*((volatile uint32_t *)0x400FE728))                            /*  pp.417      Universal Serial Bus Sleep Mode Clock Gating Control */
#define SYSCTL_SCGCEPHY_R           (*((volatile uint32_t *)0x400FE730))                            /*  pp.418      Ethernet PHY Sleep Mode Clock Gating Control */
#define SYSCTL_SCGCCAN_R            (*((volatile uint32_t *)0x400FE734))                            /*  pp.419      Controller Area Network Sleep Mode Clock Gating Control */
#define SYSCTL_SCGCADC_R            (*((volatile uint32_t *)0x400FE738))                            /*  pp.420      Analog-to-Digital Converter Sleep Mode Clock Gating Control */
#define SYSCTL_SCGCACMP_R           (*((volatile uint32_t *)0x400FE73C))                            /*  pp.421      Analog Comparator Sleep Mode Clock Gating Control */
#define SYSCTL_SCGCPWM_R            (*((volatile uint32_t *)0x400FE740))                            /*  pp.422      Pulse Width Modulator Sleep Mode Clock Gating Control */
#define SYSCTL_SCGCQEI_R            (*((volatile uint32_t *)0x400FE744))                            /*  pp.423      Quadrature Encoder Interface Sleep Mode Clock Gating Control */
#define SYSCTL_SCGCEEPROM_R         (*((volatile uint32_t *)0x400FE758))                            /*  pp.424      EEPROM Sleep Mode Clock Gating Control */
#define SYSCTL_SCGCCCM_R            (*((volatile uint32_t *)0x400FE774))                            /*  pp.425      CRC Module Sleep Mode Clock Gating Control */
#define SYSCTL_SCGCEMAC_R           (*((volatile uint32_t *)0x400FE79C))                            /*  pp.426      Ethernet MAC Sleep Mode Clock Gating Control */
#define SYSCTL_DCGCWD_R             (*((volatile uint32_t *)0x400FE800))                            /*  pp.427      Watchdog Timer Deep-Sleep Mode Clock Gating Control */
#define SYSCTL_DCGCTIMER_R          (*((volatile uint32_t *)0x400FE804))                            /*  pp.428      16/32-Bit General-Purpose Timer Deep-Sleep Mode Clock Gating Control */
#define SYSCTL_DCGCGPIO_R           (*((volatile uint32_t *)0x400FE808))                            /*  pp.430      General-Purpose Input/Output Deep-Sleep Mode Clock Gating Control */
#define SYSCTL_DCGCDMA_R            (*((volatile uint32_t *)0x400FE80C))                            /*  pp.433      Micro Direct Memory Access Deep-Sleep Mode Clock Gating Control */
#define SYSCTL_DCGCEPI_R            (*((volatile uint32_t *)0x400FE810))                            /*  pp.434      EPI Deep-Sleep Mode Clock Gating Control */
#define SYSCTL_DCGCHIB_R            (*((volatile uint32_t *)0x400FE814))                            /*  pp.435      Hibernation Deep-Sleep Mode Clock Gating Control */
#define SYSCTL_DCGCUART_R           (*((volatile uint32_t *)0x400FE818))                            /*  pp.436      Universal Asynchronous Receiver/Transmitter Deep-Sleep Mode Clock Gating Control */
#define SYSCTL_DCGCSSI_R            (*((volatile uint32_t *)0x400FE81C))                            /*  pp.438      Synchronous Serial Interface Deep-Sleep Mode Clock Gating Control */
#define SYSCTL_DCGCI2C_R            (*((volatile uint32_t *)0x400FE820))                            /*  pp.439      Inter-Integrated Circuit Deep-Sleep Mode Clock Gating Control */
#define SYSCTL_DCGCUSB_R            (*((volatile uint32_t *)0x400FE828))                            /*  pp.441      Universal Serial Bus Deep-Sleep Mode Clock Gating Control */
#define SYSCTL_DCGCEPHY_R           (*((volatile uint32_t *)0x400FE830))                            /*  pp.442      Ethernet PHY Deep-Sleep Mode Clock Gating Control */
#define SYSCTL_DCGCCAN_R            (*((volatile uint32_t *)0x400FE834))                            /*  pp.443      Controller Area Network Deep-Sleep Mode Clock Gating Control */
#define SYSCTL_DCGCADC_R            (*((volatile uint32_t *)0x400FE838))                            /*  pp.444      Analog-to-Digital Converter Deep-Sleep Mode Clock Gating Control */
#define SYSCTL_DCGCACMP_R           (*((volatile uint32_t *)0x400FE83C))                            /*  pp.445      Analog Comparator Deep-Sleep Mode Clock Gating Control */
#define SYSCTL_DCGCPWM_R            (*((volatile uint32_t *)0x400FE840))                            /*  pp.446      Pulse Width Modulator Deep-Sleep Mode Clock Gating Control */
#define SYSCTL_DCGCQEI_R            (*((volatile uint32_t *)0x400FE844))                            /*  pp.447      Quadrature Encoder Interface Deep-Sleep Mode Clock Gating Control */
#define SYSCTL_DCGCEEPROM_R         (*((volatile uint32_t *)0x400FE858))                            /*  pp.448      EEPROM Deep-Sleep Mode Clock Gating Control */
#define SYSCTL_DCGCCCM_R            (*((volatile uint32_t *)0x400FE874))                            /*  pp.449      CRC Module Deep-Sleep Mode Clock Gating Control */
#define SYSCTL_DCGCEMAC_R           (*((volatile uint32_t *)0x400FE89C))                            /*  pp.450      Ethernet MAC Deep-Sleep Mode Clock Gating Control */
#define SYSCTL_PCWD_R               (*((volatile uint32_t *)0x400FE900))                            /*  pp.451      Watchdog Timer Power Control */
#define SYSCTL_PCTIMER_R            (*((volatile uint32_t *)0x400FE904))                            /*  pp.453      16/32-Bit General-Purpose Timer Power Control */
#define SYSCTL_PCGPIO_R             (*((volatile uint32_t *)0x400FE908))                            /*  pp.456      General-Purpose Input/Output Power Control */
#define SYSCTL_PCDMA_R              (*((volatile uint32_t *)0x400FE90C))                            /*  pp.461      Micro Direct Memory Access Power Control */
#define SYSCTL_PCEPI_R              (*((volatile uint32_t *)0x400FE910))                            /*  pp.463      EPI Power Control */
#define SYSCTL_PCHIB_R              (*((volatile uint32_t *)0x400FE914))                            /*  pp.465      Hibernation Power Control */
#define SYSCTL_PCUART_R             (*((volatile uint32_t *)0x400FE918))                            /*  pp.467      Universal Asynchronous Receiver/Transmitter Power Control */
#define SYSCTL_PCSSI_R              (*((volatile uint32_t *)0x400FE91C))                            /*  pp.470      Synchronous Serial Interface Power Control */
#define SYSCTL_PCI2C_R              (*((volatile uint32_t *)0x400FE920))                            /*  pp.472      Inter-Integrated Circuit Power Control */
#define SYSCTL_PCUSB_R              (*((volatile uint32_t *)0x400FE928))                            /*  pp.476      Universal Serial Bus Power Control */
#define SYSCTL_PCEPHY_R             (*((volatile uint32_t *)0x400FE930))                            /*  pp.478      Ethernet PHY Power Control */
#define SYSCTL_PCCAN_R              (*((volatile uint32_t *)0x400FE934))                            /*  pp.480      Controller Area Network Power Control */
#define SYSCTL_PCADC_R              (*((volatile uint32_t *)0x400FE938))                            /*  pp.482      Analog-to-Digital Converter Power Control */
#define SYSCTL_PCACMP_R             (*((volatile uint32_t *)0x400FE93C))                            /*  pp.484      Analog Comparator Power Control */
#define SYSCTL_PCPWM_R              (*((volatile uint32_t *)0x400FE940))                            /*  pp.486      Pulse Width Modulator Power Control */
#define SYSCTL_PCQEI_R              (*((volatile uint32_t *)0x400FE944))                            /*  pp.488      Quadrature Encoder Interface Power Control */
#define SYSCTL_PCEEPROM_R           (*((volatile uint32_t *)0x400FE958))                            /*  pp.490      EEPROM Power Control */
#define SYSCTL_PCCCM_R              (*((volatile uint32_t *)0x400FE974))                            /*  pp.492      CRC Module Power Control */
#define SYSCTL_PCEMAC_R             (*((volatile uint32_t *)0x400FE99C))                            /*  pp.494      Ethernet MAC Power Control */
#define SYSCTL_PRWD_R               (*((volatile uint32_t *)0x400FEA00))                            /*  pp.496      Watchdog Timer Peripheral Ready */
#define SYSCTL_PRTIMER_R            (*((volatile uint32_t *)0x400FEA04))                            /*  pp.497      16/32-Bit General-Purpose Timer Peripheral Ready */
#define SYSCTL_PRGPIO_R             (*((volatile uint32_t *)0x400FEA08))                            /*  pp.499      General-Purpose Input/Output Peripheral Ready */
#define SYSCTL_PRDMA_R              (*((volatile uint32_t *)0x400FEA0C))                            /*  pp.502      Micro Direct Memory Access Peripheral Ready */
#define SYSCTL_PREPI_R              (*((volatile uint32_t *)0x400FEA10))                            /*  pp.503      EPI Peripheral Ready */
#define SYSCTL_PRHIB_R              (*((volatile uint32_t *)0x400FEA14))                            /*  pp.504      Hibernation Peripheral Ready */
#define SYSCTL_PRUART_R             (*((volatile uint32_t *)0x400FEA18))                            /*  pp.505      Universal Asynchronous Receiver/Transmitter Peripheral Ready */
#define SYSCTL_PRSSI_R              (*((volatile uint32_t *)0x400FEA1C))                            /*  pp.507      Synchronous Serial Interface Peripheral Ready */
#define SYSCTL_PRI2C_R              (*((volatile uint32_t *)0x400FEA20))                            /*  pp.509      Inter-Integrated Circuit Peripheral Ready */
#define SYSCTL_PRUSB_R              (*((volatile uint32_t *)0x400FEA28))                            /*  pp.512      Universal Serial Bus Peripheral Ready */
#define SYSCTL_PREPHY_R             (*((volatile uint32_t *)0x400FEA30))                            /*  pp.513      Ethernet PHY Peripheral Ready */
#define SYSCTL_PRCAN_R              (*((volatile uint32_t *)0x400FEA34))                            /*  pp.514      Controller Area Network Peripheral Ready */
#define SYSCTL_PRADC_R              (*((volatile uint32_t *)0x400FEA38))                            /*  pp.515      Analog-to-Digital Converter Peripheral Ready */
#define SYSCTL_PRACMP_R             (*((volatile uint32_t *)0x400FEA3C))                            /*  pp.516      Analog Comparator Peripheral Ready */
#define SYSCTL_PRPWM_R              (*((volatile uint32_t *)0x400FEA40))                            /*  pp.517      Pulse Width Modulator Peripheral Ready */
#define SYSCTL_PRQEI_R              (*((volatile uint32_t *)0x400FEA44))                            /*  pp.518      Quadrature Encoder Interface Peripheral Ready */
#define SYSCTL_PREEPROM_R           (*((volatile uint32_t *)0x400FEA58))                            /*  pp.519      EEPROM Peripheral Ready */
#define SYSCTL_PRCCM_R              (*((volatile uint32_t *)0x400FEA74))                            /*  pp.520      CRC Module Peripheral Ready */
#define SYSCTL_PREMAC_R             (*((volatile uint32_t *)0x400FEA9C))                            /*  pp.521      Ethernet MAC Peripheral Ready */


/**************************************************************************************************
 *  Macros de campos de configuración                                                                   pp.247      Register map
 */

    /** Bit fields in the SYSCTL_DID0 register                                                          pp.255 */
#define SYSCTL_DID0_VER_M           0x70000000                                                      /*  DID0 Version mask */
#define SYSCTL_DID0_VER_1           0x10000000                                                      /*  Second version of the DID0 register format. */
#define SYSCTL_DID0_CLASS_M         0x00FF0000                                                      /*  Device Class mask */
#define SYSCTL_DID0_CLASS_TM4C129   0x000A0000                                                      /*  Tiva(TM) TM4C129-class microcontrollers */
#define SYSCTL_DID0_MAJ_M           0x0000FF00                                                      /*  Major Revision mask */
#define SYSCTL_DID0_MAJ_REVA        0x00000000                                                      /*  Revision A (initial device) */
#define SYSCTL_DID0_MAJ_REVB        0x00000100                                                      /*  Revision B (first base layer revision) */
#define SYSCTL_DID0_MAJ_REVC        0x00000200                                                      /*  Revision C (second base layer revision) */
#define SYSCTL_DID0_MIN_M           0x000000FF                                                      /*  Minor Revision mask */
#define SYSCTL_DID0_MIN_0           0x00000000                                                      /*  Initial device, or a major revision update */
#define SYSCTL_DID0_MIN_1           0x00000001                                                      /*  First metal layer change */
#define SYSCTL_DID0_MIN_2           0x00000002                                                      /*  Second metal layer change */

    /** Bit fields in the SYSCTL_DID1 register                                                          pp.257 */
#define SYSCTL_DID1_VER_M           0xF0000000                                                      /*  DID1 Version mask */
#define SYSCTL_DID1_VER_1           0x10000000                                                      /*  fury_ib */
#define SYSCTL_DID1_FAM_M           0x0F000000                                                      /*  Family mask */
#define SYSCTL_DID1_FAM_TIVA        0x00000000                                                      /*  Tiva family of microcontrollers */
#define SYSCTL_DID1_PRTNO_M         0x00FF0000                                                      /*  Part Number mask */
#define SYSCTL_DID1_PRTNO_TM4C1294NCPDT 0x001F0000                                                  /*  TM4C1294NCPDT */
#define SYSCTL_DID1_PINCNT_M        0x0000E000                                                      /*  Package Pin Count mask */
#define SYSCTL_DID1_PINCNT_100      0x00004000                                                      /*  100-pin LQFP package */
#define SYSCTL_DID1_PINCNT_64       0x00006000                                                      /*  64-pin LQFP package */
#define SYSCTL_DID1_PINCNT_144      0x00008000                                                      /*  144-pin LQFP package */
#define SYSCTL_DID1_PINCNT_157      0x0000A000                                                      /*  157-pin BGA package */
#define SYSCTL_DID1_PINCNT_128      0x0000C000                                                      /*  128-pin TQFP package */
#define SYSCTL_DID1_TEMP_M          0x000000E0                                                      /*  Temperature Range mask */
#define SYSCTL_DID1_TEMP_C          0x00000000                                                      /*  Commercial temperature range */
#define SYSCTL_DID1_TEMP_I          0x00000020                                                      /*  Industrial temperature range */
#define SYSCTL_DID1_TEMP_E          0x00000040                                                      /*  Extended temperature range */
#define SYSCTL_DID1_PKG_M           0x00000018                                                      /*  Package Type mask */
#define SYSCTL_DID1_PKG_QFP         0x00000008                                                      /*  QFP package */
#define SYSCTL_DID1_PKG_BGA         0x00000010                                                      /*  BGA package */
#define SYSCTL_DID1_ROHS            0x00000004                                                      /*  RoHS-Compliance */
#define SYSCTL_DID1_QUAL_M          0x00000003                                                      /*  Qualification Status mask */
#define SYSCTL_DID1_QUAL_ES         0x00000000                                                      /*  Engineering Sample (unqualified) */
#define SYSCTL_DID1_QUAL_PP         0x00000001                                                      /*  Pilot Production (unqualified) */
#define SYSCTL_DID1_QUAL_FQ         0x00000002                                                      /*  Fully Qualified */

    /** Bit fields in the SYSCTL_PTBOCTL register                                                       pp.259 */
#define SYSCTL_PTBOCTL_VDDA_UBOR_M  0x00000300                                                      /*  VDDA under BOR Event Action mask */
#define SYSCTL_PTBOCTL_VDDA_UBOR_NONE   0x00000000                                                  /*  No Action */
#define SYSCTL_PTBOCTL_VDDA_UBOR_SYSINT 0x00000100                                                  /*  System control interrupt */
#define SYSCTL_PTBOCTL_VDDA_UBOR_NMI    0x00000200                                                  /*  NMI */
#define SYSCTL_PTBOCTL_VDDA_UBOR_RST    0x00000300                                                  /*  Reset */
#define SYSCTL_PTBOCTL_VDD_UBOR_M   0x00000003                                                      /*  VDD (VDDS) under BOR Event Action mask */
#define SYSCTL_PTBOCTL_VDD_UBOR_NONE    0x00000000                                                  /*  No Action */
#define SYSCTL_PTBOCTL_VDD_UBOR_SYSINT  0x00000001                                                  /*  System control interrupt */
#define SYSCTL_PTBOCTL_VDD_UBOR_NMI 0x00000002                                                      /*  NMI */
#define SYSCTL_PTBOCTL_VDD_UBOR_RST 0x00000003                                                      /*  Reset */

    /** Bit fields in the SYSCTL_RIS register                                                           pp.261 */
#define SYSCTL_RIS_MOSCPUPRIS       0x00000100                                                      /*  MOSC Power Up Raw Interrupt Status */
#define SYSCTL_RIS_PLLLRIS          0x00000040                                                      /*  PLL Lock Raw Interrupt Status */
#define SYSCTL_RIS_MOFRIS           0x00000008                                                      /*  Main Oscillator Failure Raw Interrupt Status */
#define SYSCTL_RIS_BORRIS           0x00000002                                                      /*  Brown-Out Reset Raw Interrupt Status */

    /** Bit fields in the SYSCTL_IMC register                                                           pp.263 */
#define SYSCTL_IMC_MOSCPUPIM        0x00000100                                                      /*  MOSC Power Up Interrupt Mask */
#define SYSCTL_IMC_PLLLIM           0x00000040                                                      /*  PLL Lock Interrupt Mask */
#define SYSCTL_IMC_MOFIM            0x00000008                                                      /*  Main Oscillator Failure Interrupt Mask */
#define SYSCTL_IMC_BORIM            0x00000002                                                      /*  Brown-Out Reset Interrupt Mask */

    /** Bit fields in the SYSCTL_MISC register                                                          pp.265 */
#define SYSCTL_MISC_MOSCPUPMIS      0x00000100                                                      /*  MOSC Power Up Masked Interrupt Status */
#define SYSCTL_MISC_PLLLMIS         0x00000040                                                      /*  PLL Lock Masked Interrupt Status */
#define SYSCTL_MISC_MOFMIS          0x00000008                                                      /*  Main Oscillator Failure Masked Interrupt Status */
#define SYSCTL_MISC_BORMIS          0x00000002                                                      /*  BOR Masked Interrupt Status */

    /** Bit fields in the SYSCTL_RESC register                                                          pp.267 */
#define SYSCTL_RESC_MOSCFAIL        0x00010000                                                      /*  MOSC Failure Reset */
#define SYSCTL_RESC_HSSR            0x00001000                                                      /*  HSSR Reset */
#define SYSCTL_RESC_WDT1            0x00000020                                                      /*  Watchdog Timer 1 Reset */
#define SYSCTL_RESC_SW              0x00000010                                                      /*  Software Reset */
#define SYSCTL_RESC_WDT0            0x00000008                                                      /*  Watchdog Timer 0 Reset */
#define SYSCTL_RESC_BOR             0x00000004                                                      /*  Brown-Out Reset */
#define SYSCTL_RESC_POR             0x00000002                                                      /*  Power-On Reset */
#define SYSCTL_RESC_EXT             0x00000001                                                      /*  External Reset */

    /** Bit fields in the SYSCTL_PWRTC register                                                         pp.270 */
#define SYSCTL_PWRTC_VDDA_UBOR      0x00000010                                                      /*  VDDA Under BOR Status */
#define SYSCTL_PWRTC_VDD_UBOR       0x00000001                                                      /*  VDD Under BOR Status */

    /** Bit fields in the SYSCTL_NMIC register                                                          pp.271 */
#define SYSCTL_NMIC_MOSCFAIL        0x00010000                                                      /*  MOSC Failure NMI */
#define SYSCTL_NMIC_TAMPER          0x00000200                                                      /*  Tamper Event NMI */
#define SYSCTL_NMIC_WDT1            0x00000020                                                      /*  Watch Dog Timer (WDT) 1 NMI */
#define SYSCTL_NMIC_WDT0            0x00000008                                                      /*  Watch Dog Timer (WDT) 0 NMI */
#define SYSCTL_NMIC_POWER           0x00000004                                                      /*  Power/Brown Out Event NMI */
#define SYSCTL_NMIC_EXTERNAL        0x00000001                                                      /*  External Pin NMI */

    /** Bit fields in the SYSCTL_MOSCCTL register                                                       pp.273 */
#define SYSCTL_MOSCCTL_OSCRNG       0x00000010                                                      /*  Oscillator Range */
#define SYSCTL_MOSCCTL_PWRDN        0x00000008                                                      /*  Power Down */
#define SYSCTL_MOSCCTL_NOXTAL       0x00000004                                                      /*  No Crystal Connected */
#define SYSCTL_MOSCCTL_MOSCIM       0x00000002                                                      /*  MOSC Failure Action */
#define SYSCTL_MOSCCTL_CVAL         0x00000001                                                      /*  Clock Validation for MOSC */

    /** Bit fields in the SYSCTL_RSCLKCFG register                                                      pp.275 */
#define SYSCTL_RSCLKCFG_MEMTIMU     0x80000000                                                      /*  Memory Timing Register Update */
#define SYSCTL_RSCLKCFG_NEWFREQ     0x40000000                                                      /*  New PLLFREQ Accept */
#define SYSCTL_RSCLKCFG_ACG         0x20000000                                                      /*  Auto Clock Gating */
#define SYSCTL_RSCLKCFG_USEPLL      0x10000000                                                      /*  Use PLL */
#define SYSCTL_RSCLKCFG_PLLSRC_M    0x0F000000                                                      /*  PLL Source mask */
#define SYSCTL_RSCLKCFG_PLLSRC_PIOSC    0x00000000                                                  /*  PIOSC is PLL input clock source */
#define SYSCTL_RSCLKCFG_PLLSRC_MOSC 0x03000000                                                      /*  MOSC is the PLL input clock source */
#define SYSCTL_RSCLKCFG_OSCSRC_M    0x00F00000                                                      /*  Oscillator Source mask */
#define SYSCTL_RSCLKCFG_OSCSRC_PIOSC    0x00000000                                                  /*  PIOSC is oscillator source */
#define SYSCTL_RSCLKCFG_OSCSRC_LFIOSC   0x00200000                                                  /*  LFIOSC is oscillator source */
#define SYSCTL_RSCLKCFG_OSCSRC_MOSC 0x00300000                                                      /*  MOSC is oscillator source */
#define SYSCTL_RSCLKCFG_OSCSRC_RTC  0x00400000                                                      /*  Hibernation Module RTC Oscillator (RTCOSC) */
#define SYSCTL_RSCLKCFG_OSYSDIV_M   0x000FFC00                                                      /*  Oscillator System Clock Divisor mask */
#define SYSCTL_RSCLKCFG_PSYSDIV_M   0x000003FF                                                      /*  PLL System Clock Divisor mask */
#define SYSCTL_RSCLKCFG_OSYSDIV_S   10                                                              /*  Oscillator System Clock Divisor shift */
#define SYSCTL_RSCLKCFG_PSYSDIV_S   0                                                               /*  PLL System Clock Divisor shift */

    /** Bit fields in the SYSCTL_MEMTIM0 register                                                       pp.277 */
#define SYSCTL_MEMTIM0_EBCHT_M      0x03C00000                                                      /*  EEPROM Clock High Time mask */
#define SYSCTL_MEMTIM0_EBCHT_0_5    0x00000000                                                      /*  1/2 system clock period */
#define SYSCTL_MEMTIM0_EBCHT_1      0x00400000                                                      /*  1 system clock period */
#define SYSCTL_MEMTIM0_EBCHT_1_5    0x00800000                                                      /*  1.5 system clock periods */
#define SYSCTL_MEMTIM0_EBCHT_2      0x00C00000                                                      /*  2 system clock periods */
#define SYSCTL_MEMTIM0_EBCHT_2_5    0x01000000                                                      /*  2.5 system clock periods */
#define SYSCTL_MEMTIM0_EBCHT_3      0x01400000                                                      /*  3 system clock periods */
#define SYSCTL_MEMTIM0_EBCHT_3_5    0x01800000                                                      /*  3.5 system clock periods */
#define SYSCTL_MEMTIM0_EBCHT_4      0x01C00000                                                      /*  4 system clock periods */
#define SYSCTL_MEMTIM0_EBCHT_4_5    0x02000000                                                      /*  4.5 system clock periods */
#define SYSCTL_MEMTIM0_EBCE         0x00200000                                                      /*  EEPROM Bank Clock Edge */
#define SYSCTL_MEMTIM0_EWS_M        0x000F0000                                                      /*  EEPROM Wait States mask */
#define SYSCTL_MEMTIM0_FBCHT_M      0x000003C0                                                      /*  Flash Bank Clock High Time mask */
#define SYSCTL_MEMTIM0_FBCHT_0_5    0x00000000                                                      /*  1/2 system clock period */
#define SYSCTL_MEMTIM0_FBCHT_1      0x00000040                                                      /*  1 system clock period */
#define SYSCTL_MEMTIM0_FBCHT_1_5    0x00000080                                                      /*  1.5 system clock periods */
#define SYSCTL_MEMTIM0_FBCHT_2      0x000000C0                                                      /*  2 system clock periods */
#define SYSCTL_MEMTIM0_FBCHT_2_5    0x00000100                                                      /*  2.5 system clock periods */
#define SYSCTL_MEMTIM0_FBCHT_3      0x00000140                                                      /*  3 system clock periods */
#define SYSCTL_MEMTIM0_FBCHT_3_5    0x00000180                                                      /*  3.5 system clock periods */
#define SYSCTL_MEMTIM0_FBCHT_4      0x000001C0                                                      /*  4 system clock periods */
#define SYSCTL_MEMTIM0_FBCHT_4_5    0x00000200                                                      /*  4.5 system clock periods */
#define SYSCTL_MEMTIM0_FBCE         0x00000020                                                      /*  Flash Bank Clock Edge */
#define SYSCTL_MEMTIM0_FWS_M        0x0000000F                                                      /*  Flash Wait State mask */
#define SYSCTL_MEMTIM0_EWS_S        16                                                              /*  EEPROM Wait States shift */
#define SYSCTL_MEMTIM0_FWS_S        0                                                               /*  Flash Wait State shift */

    /** Bit fields in the SYSCTL_ALTCLKCFG register                                                     pp.280 */
#define SYSCTL_ALTCLKCFG_ALTCLK_M   0x0000000F                                                      /*  Alternate Clock Source mask */
#define SYSCTL_ALTCLKCFG_ALTCLK_PIOSC   0x00000000                                                  /*  PIOSC */
#define SYSCTL_ALTCLKCFG_ALTCLK_RTCOSC  0x00000003                                                  /*  Hibernation Module Real-time clock output (RTCOSC) */
#define SYSCTL_ALTCLKCFG_ALTCLK_LFIOSC  0x00000004                                                  /*  Low-frequency internal oscillator (LFIOSC) */

    /** Bit fields in the SYSCTL_DSCLKCFG register                                                      pp.281 */
#define SYSCTL_DSCLKCFG_PIOSCPD     0x80000000                                                      /*  PIOSC Power Down */
#define SYSCTL_DSCLKCFG_MOSCDPD     0x40000000                                                      /*  MOSC Disable Power Down */
#define SYSCTL_DSCLKCFG_DSOSCSRC_M  0x00F00000                                                      /*  Deep Sleep Oscillator Source mask */
#define SYSCTL_DSCLKCFG_DSOSCSRC_PIOSC  0x00000000                                                  /*  PIOSC */
#define SYSCTL_DSCLKCFG_DSOSCSRC_LFIOSC 0x00200000                                                  /*  LFIOSC */
#define SYSCTL_DSCLKCFG_DSOSCSRC_MOSC   0x00300000                                                  /*  MOSC */
#define SYSCTL_DSCLKCFG_DSOSCSRC_RTC    0x00400000                                                  /*  Hibernation Module RTCOSC */
#define SYSCTL_DSCLKCFG_DSSYSDIV_M  0x000003FF                                                      /*  Deep Sleep Clock Divisor mask */
#define SYSCTL_DSCLKCFG_DSSYSDIV_S  0                                                               /*  Deep Sleep Clock Divisor shift */

    /** Bit fields in the SYSCTL_DIVSCLK register                                                       pp.284 */
#define SYSCTL_DIVSCLK_EN           0x80000000                                                      /*  DIVSCLK Enable */
#define SYSCTL_DIVSCLK_SRC_M        0x00030000                                                      /*  Clock Source mask */
#define SYSCTL_DIVSCLK_SRC_SYSCLK   0x00000000                                                      /*  System Clock */
#define SYSCTL_DIVSCLK_SRC_PIOSC    0x00010000                                                      /*  PIOSC */
#define SYSCTL_DIVSCLK_SRC_MOSC     0x00020000                                                      /*  MOSC */
#define SYSCTL_DIVSCLK_DIV_M        0x000000FF                                                      /*  Divisor Value mask */
#define SYSCTL_DIVSCLK_DIV_S        0                                                               /*  Divisor Value shift */

    /** Bit fields in the SYSCTL_SYSPROP register                                                       pp.286 */
#define SYSCTL_SYSPROP_FPU          0x00000001                                                      /*  FPU Present */

    /** Bit fields in the SYSCTL_PIOSCCAL register                                                      pp.289 */
#define SYSCTL_PIOSCCAL_UTEN        0x80000000                                                      /*  Use User Trim Value */
#define SYSCTL_PIOSCCAL_CAL         0x00000200                                                      /*  Start Calibration */
#define SYSCTL_PIOSCCAL_UPDATE      0x00000100                                                      /*  Update Trim */
#define SYSCTL_PIOSCCAL_UT_M        0x0000007F                                                      /*  User Trim Value mask */
#define SYSCTL_PIOSCCAL_UT_S        0                                                               /*  User Trim Value shift */

    /** Bit fields in the SYSCTL_PIOSCSTAT register                                                     pp.291 */
#define SYSCTL_PIOSCSTAT_DT_M       0x007F0000                                                      /*  Default Trim Value mask */
#define SYSCTL_PIOSCSTAT_CR_M       0x00000300                                                      /*  Calibration Result mask */
#define SYSCTL_PIOSCSTAT_CRNONE     0x00000000                                                      /*  Calibration has not been attempted */
#define SYSCTL_PIOSCSTAT_CRPASS     0x00000100                                                      /*  The last calibration operation completed to meet 1% accuracy */
#define SYSCTL_PIOSCSTAT_CRFAIL     0x00000200                                                      /*  The last calibration operation failed to meet 1% accuracy */
#define SYSCTL_PIOSCSTAT_CT_M       0x0000007F                                                      /*  Calibration Trim Value mask */
#define SYSCTL_PIOSCSTAT_DT_S       16                                                              /*  Default Trim Value shift */
#define SYSCTL_PIOSCSTAT_CT_S       0                                                               /*  Calibration Trim Value shift */

    /** Bit fields in the SYSCTL_PLLFREQ0 register                                                      pp.292 */
#define SYSCTL_PLLFREQ0_PLLPWR      0x00800000                                                      /*  PLL Power */
#define SYSCTL_PLLFREQ0_MFRAC_M     0x000FFC00                                                      /*  PLL M Fractional Value mask */
#define SYSCTL_PLLFREQ0_MINT_M      0x000003FF                                                      /*  PLL M Integer Value mask */
#define SYSCTL_PLLFREQ0_MFRAC_S     10                                                              /*  PLL M Fractional Value shift */
#define SYSCTL_PLLFREQ0_MINT_S      0                                                               /*  PLL M Integer Value shift */

    /** Bit fields in the SYSCTL_PLLFREQ1 register                                                      pp.293 */
#define SYSCTL_PLLFREQ1_Q_M         0x00001F00                                                      /*  PLL Q Value mask */
#define SYSCTL_PLLFREQ1_N_M         0x0000001F                                                      /*  PLL N Value mask */
#define SYSCTL_PLLFREQ1_Q_S         8                                                               /*  PLL Q Value shift */
#define SYSCTL_PLLFREQ1_N_S         0                                                               /*  PLL N Value shift */

    /** Bit fields in the SYSCTL_PLLSTAT register                                                       pp.294 */
#define SYSCTL_PLLSTAT_LOCK         0x00000001                                                      /*  PLL Lock */

    /** Bit fields in the SYSCTL_SLPPWRCFG register                                                     pp.295 */
#define SYSCTL_SLPPWRCFG_FLASHPM_M  0x00000030                                                      /*  Flash Power Modes mask */
#define SYSCTL_SLPPWRCFG_FLASHPM_NRM    0x00000000                                                  /*  Active Mode */
#define SYSCTL_SLPPWRCFG_FLASHPM_SLP    0x00000020                                                  /*  Low Power Mode */
#define SYSCTL_SLPPWRCFG_SRAMPM_M   0x00000003                                                      /*  SRAM Power Modes mask */
#define SYSCTL_SLPPWRCFG_SRAMPM_NRM 0x00000000                                                      /*  Active Mode */
#define SYSCTL_SLPPWRCFG_SRAMPM_SBY 0x00000001                                                      /*  Standby Mode */
#define SYSCTL_SLPPWRCFG_SRAMPM_LP  0x00000003                                                      /*  Low Power Mode */

    /** Bit fields in the SYSCTL_DSLPPWRCFG register                                                    pp.297 */
#define SYSCTL_DSLPPWRCFG_LDOSM     0x00000200                                                      /*  LDO Sleep Mode */
#define SYSCTL_DSLPPWRCFG_TSPD      0x00000100                                                      /*  Temperature Sense Power Down */
#define SYSCTL_DSLPPWRCFG_FLASHPM_M 0x00000030                                                      /*  Flash Power Modes mask */
#define SYSCTL_DSLPPWRCFG_FLASHPM_NRM   0x00000000                                                  /*  Active Mode */
#define SYSCTL_DSLPPWRCFG_FLASHPM_SLP   0x00000020                                                  /*  Low Power Mode */
#define SYSCTL_DSLPPWRCFG_SRAMPM_M  0x00000003                                                      /*  SRAM Power Modes mask */
#define SYSCTL_DSLPPWRCFG_SRAMPM_NRM    0x00000000                                                  /*  Active Mode */
#define SYSCTL_DSLPPWRCFG_SRAMPM_SBY    0x00000001                                                  /*  Standby Mode */
#define SYSCTL_DSLPPWRCFG_SRAMPM_LP 0x00000003                                                      /*  Low Power Mode */

    /** Bit fields in the SYSCTL_NVMSTAT register                                                       pp.299 */
#define SYSCTL_NVMSTAT_FWB          0x00000001                                                      /*  32 Word Flash Write Buffer Available */

    /** Bit fields in the SYSCTL_LDOSPCTL register                                                      pp.300 */
#define SYSCTL_LDOSPCTL_VADJEN      0x80000000                                                      /*  Voltage Adjust Enable */
#define SYSCTL_LDOSPCTL_VLDO_M      0x000000FF                                                      /*  LDO Output Voltage mask */
#define SYSCTL_LDOSPCTL_VLDO_0_90V  0x00000012                                                      /*  0.90 V */
#define SYSCTL_LDOSPCTL_VLDO_0_95V  0x00000013                                                      /*  0.95 V */
#define SYSCTL_LDOSPCTL_VLDO_1_00V  0x00000014                                                      /*  1.00 V */
#define SYSCTL_LDOSPCTL_VLDO_1_05V  0x00000015                                                      /*  1.05 V */
#define SYSCTL_LDOSPCTL_VLDO_1_10V  0x00000016                                                      /*  1.10 V */
#define SYSCTL_LDOSPCTL_VLDO_1_15V  0x00000017                                                      /*  1.15 V */
#define SYSCTL_LDOSPCTL_VLDO_1_20V  0x00000018                                                      /*  1.20 V */

    /** Bit fields in the SYSCTL_LDODPCTL register                                                      pp.303 */
#define SYSCTL_LDODPCTL_VADJEN      0x80000000                                                      /*  Voltage Adjust Enable */
#define SYSCTL_LDODPCTL_VLDO_M      0x000000FF                                                      /*  LDO Output Voltage mask */
#define SYSCTL_LDODPCTL_VLDO_0_90V  0x00000012                                                      /*  0.90 V */
#define SYSCTL_LDODPCTL_VLDO_0_95V  0x00000013                                                      /*  0.95 V */
#define SYSCTL_LDODPCTL_VLDO_1_00V  0x00000014                                                      /*  1.00 V */
#define SYSCTL_LDODPCTL_VLDO_1_05V  0x00000015                                                      /*  1.05 V */
#define SYSCTL_LDODPCTL_VLDO_1_10V  0x00000016                                                      /*  1.10 V */
#define SYSCTL_LDODPCTL_VLDO_1_15V  0x00000017                                                      /*  1.15 V */
#define SYSCTL_LDODPCTL_VLDO_1_20V  0x00000018                                                      /*  1.20 V */
#define SYSCTL_LDODPCTL_VLDO_1_25V  0x00000019                                                      /*  1.25 V */
#define SYSCTL_LDODPCTL_VLDO_1_30V  0x0000001A                                                      /*  1.30 V */
#define SYSCTL_LDODPCTL_VLDO_1_35V  0x0000001B                                                      /*  1.35 V */

    /** Bit fields in the SYSCTL_RESBEHAVCTL register                                                   pp.309 */
#define SYSCTL_RESBEHAVCTL_WDOG1_M  0x000000C0                                                      /*  Watchdog 1 Reset Operation mask */
#define SYSCTL_RESBEHAVCTL_WDOG1_SYSRST 0x00000080                                                  /*  Watchdog 1 issues a system reset. The application starts within 10 us */
#define SYSCTL_RESBEHAVCTL_WDOG1_POR    0x000000C0                                                  /*  Watchdog 1 issues a simulated POR sequence. Application starts less than 500 us after deassertion (Default) */
#define SYSCTL_RESBEHAVCTL_WDOG0_M  0x00000030                                                      /*  Watchdog 0 Reset Operation mask */
#define SYSCTL_RESBEHAVCTL_WDOG0_SYSRST 0x00000020                                                  /*  Watchdog 0 issues a system reset. The application starts within 10 us */
#define SYSCTL_RESBEHAVCTL_WDOG0_POR    0x00000030                                                  /*  Watchdog 0 issues a simulated POR sequence. Application starts less than 500 us after deassertion (Default) */
#define SYSCTL_RESBEHAVCTL_BOR_M    0x0000000C                                                      /*  BOR Reset operation mask */
#define SYSCTL_RESBEHAVCTL_BOR_SYSRST   0x00000008                                                  /*  Brown Out Reset issues system reset. The application starts within 10 us */
#define SYSCTL_RESBEHAVCTL_BOR_POR  0x0000000C                                                      /*  Brown Out Reset issues a simulated POR sequence. The application starts less than 500 us after deassertion (Default) */
#define SYSCTL_RESBEHAVCTL_EXTRES_M 0x00000003                                                      /*  External RST Pin Operation mask */
#define SYSCTL_RESBEHAVCTL_EXTRES_SYSRST    0x00000002                                              /*  External RST assertion issues a system reset. The application starts within 10 us */
#define SYSCTL_RESBEHAVCTL_EXTRES_POR   0x00000003                                                  /*  External RST assertion issues a simulated POR sequence. Application starts less than 500 us after deassertion (Default) */

    /** Bit fields in the SYSCTL_HSSR register                                                          pp.311 */
#define SYSCTL_HSSR_KEY_M           0xFF000000                                                      /*  Write Key mask */
#define SYSCTL_HSSR_CDOFF_M         0x00FFFFFF                                                      /*  Command Descriptor Pointer mask */
#define SYSCTL_HSSR_KEY_S           24                                                              /*  Write Key shift */
#define SYSCTL_HSSR_CDOFF_S         0                                                               /*  Command Descriptor Pointer shift */

    /** Bit fields in the SYSCTL_USBPDS register                                                        pp.312 */
#define SYSCTL_USBPDS_MEMSTAT_M     0x0000000C                                                      /*  Memory Array Power Status mask */
#define SYSCTL_USBPDS_MEMSTAT_OFF   0x00000000                                                      /*  Array OFF */
#define SYSCTL_USBPDS_MEMSTAT_RETAIN    0x00000004                                                  /*  SRAM Retention */
#define SYSCTL_USBPDS_MEMSTAT_ON    0x0000000C                                                      /*  Array On */
#define SYSCTL_USBPDS_PWRSTAT_M     0x00000003                                                      /*  Power Domain Status mask */
#define SYSCTL_USBPDS_PWRSTAT_OFF   0x00000000                                                      /*  OFF */
#define SYSCTL_USBPDS_PWRSTAT_ON    0x00000003                                                      /*  ON */

    /** Bit fields in the SYSCTL_USBMPC register                                                        pp.313 */
#define SYSCTL_USBMPC_PWRCTL_M      0x00000003                                                      /*  Memory Array Power Control mask */
#define SYSCTL_USBMPC_PWRCTL_OFF    0x00000000                                                      /*  Array OFF */
#define SYSCTL_USBMPC_PWRCTL_RETAIN 0x00000001                                                      /*  SRAM Retention */
#define SYSCTL_USBMPC_PWRCTL_ON     0x00000003                                                      /*  Array On */

    /** Bit fields in the SYSCTL_EMACPDS register                                                       pp.314 */
#define SYSCTL_EMACPDS_MEMSTAT_M    0x0000000C                                                      /*  Memory Array Power Status mask */
#define SYSCTL_EMACPDS_MEMSTAT_OFF  0x00000000                                                      /*  Array OFF */
#define SYSCTL_EMACPDS_MEMSTAT_ON   0x0000000C                                                      /*  Array On */
#define SYSCTL_EMACPDS_PWRSTAT_M    0x00000003                                                      /*  Power Domain Status mask */
#define SYSCTL_EMACPDS_PWRSTAT_OFF  0x00000000                                                      /*  OFF */
#define SYSCTL_EMACPDS_PWRSTAT_ON   0x00000003                                                      /*  ON */

    /** Bit fields in the SYSCTL_EMACMPC register                                                       pp.315 */
#define SYSCTL_EMACMPC_PWRCTL_M     0x00000003                                                      /*  Memory Array Power Control mask */
#define SYSCTL_EMACMPC_PWRCTL_OFF   0x00000000                                                      /*  Array OFF */
#define SYSCTL_EMACMPC_PWRCTL_ON    0x00000003                                                      /*  Array On */

    /** Bit fields in the SYSCTL_PPWD register                                                          pp.320 */
#define SYSCTL_PPWD_P1              0x00000002                                                      /*  Watchdog Timer 1 Present */
#define SYSCTL_PPWD_P0              0x00000001                                                      /*  Watchdog Timer 0 Present */

    /** Bit fields in the SYSCTL_PPTIMER register                                                       pp.321 */
#define SYSCTL_PPTIMER_P7           0x00000080                                                      /*  16/32-Bit General-Purpose Timer 7 Present */
#define SYSCTL_PPTIMER_P6           0x00000040                                                      /*  16/32-Bit General-Purpose Timer 6 Present */
#define SYSCTL_PPTIMER_P5           0x00000020                                                      /*  16/32-Bit General-Purpose Timer 5 Present */
#define SYSCTL_PPTIMER_P4           0x00000010                                                      /*  16/32-Bit General-Purpose Timer 4 Present */
#define SYSCTL_PPTIMER_P3           0x00000008                                                      /*  16/32-Bit General-Purpose Timer 3 Present */
#define SYSCTL_PPTIMER_P2           0x00000004                                                      /*  16/32-Bit General-Purpose Timer 2 Present */
#define SYSCTL_PPTIMER_P1           0x00000002                                                      /*  16/32-Bit General-Purpose Timer 1 Present */
#define SYSCTL_PPTIMER_P0           0x00000001                                                      /*  16/32-Bit General-Purpose Timer 0 Present */

    /** Bit fields in the SYSCTL_PPGPIO register                                                        pp.323 */
#define SYSCTL_PPGPIO_P14           0x00004000                                                      /*  GPIO Port Q Present */
#define SYSCTL_PPGPIO_P13           0x00002000                                                      /*  GPIO Port P Present */
#define SYSCTL_PPGPIO_P12           0x00001000                                                      /*  GPIO Port N Present */
#define SYSCTL_PPGPIO_P11           0x00000800                                                      /*  GPIO Port M Present */
#define SYSCTL_PPGPIO_P10           0x00000400                                                      /*  GPIO Port L Present */
#define SYSCTL_PPGPIO_P9            0x00000200                                                      /*  GPIO Port K Present */
#define SYSCTL_PPGPIO_P8            0x00000100                                                      /*  GPIO Port J Present */
#define SYSCTL_PPGPIO_P7            0x00000080                                                      /*  GPIO Port H Present */
#define SYSCTL_PPGPIO_P6            0x00000040                                                      /*  GPIO Port G Present */
#define SYSCTL_PPGPIO_P5            0x00000020                                                      /*  GPIO Port F Present */
#define SYSCTL_PPGPIO_P4            0x00000010                                                      /*  GPIO Port E Present */
#define SYSCTL_PPGPIO_P3            0x00000008                                                      /*  GPIO Port D Present */
#define SYSCTL_PPGPIO_P2            0x00000004                                                      /*  GPIO Port C Present */
#define SYSCTL_PPGPIO_P1            0x00000002                                                      /*  GPIO Port B Present */
#define SYSCTL_PPGPIO_P0            0x00000001                                                      /*  GPIO Port A Present */

    /** Bit fields in the SYSCTL_PPDMA register                                                         pp.326 */
#define SYSCTL_PPDMA_P0             0x00000001                                                      /*  uDMA Module Present */

    /** Bit fields in the SYSCTL_PPEPI register                                                         pp.327 */
#define SYSCTL_PPEPI_P0             0x00000001                                                      /*  EPI Module Present */

    /** Bit fields in the SYSCTL_PPHIB register                                                         pp.328 */
#define SYSCTL_PPHIB_P0             0x00000001                                                      /*  Hibernation Module Present */

    /** Bit fields in the SYSCTL_PPUART register                                                        pp.329 */
#define SYSCTL_PPUART_P7            0x00000080                                                      /*  UART Module 7 Present */
#define SYSCTL_PPUART_P6            0x00000040                                                      /*  UART Module 6 Present */
#define SYSCTL_PPUART_P5            0x00000020                                                      /*  UART Module 5 Present */
#define SYSCTL_PPUART_P4            0x00000010                                                      /*  UART Module 4 Present */
#define SYSCTL_PPUART_P3            0x00000008                                                      /*  UART Module 3 Present */
#define SYSCTL_PPUART_P2            0x00000004                                                      /*  UART Module 2 Present */
#define SYSCTL_PPUART_P1            0x00000002                                                      /*  UART Module 1 Present */
#define SYSCTL_PPUART_P0            0x00000001                                                      /*  UART Module 0 Present */

    /** Bit fields in the SYSCTL_PPSSI register                                                         pp.331 */
#define SYSCTL_PPSSI_P3             0x00000008                                                      /*  SSI Module 3 Present */
#define SYSCTL_PPSSI_P2             0x00000004                                                      /*  SSI Module 2 Present */
#define SYSCTL_PPSSI_P1             0x00000002                                                      /*  SSI Module 1 Present */
#define SYSCTL_PPSSI_P0             0x00000001                                                      /*  SSI Module 0 Present */

    /** Bit fields in the SYSCTL_PPI2C register                                                         pp.333 */
#define SYSCTL_PPI2C_P9             0x00000200                                                      /*  I2C Module 9 Present */
#define SYSCTL_PPI2C_P8             0x00000100                                                      /*  I2C Module 8 Present */
#define SYSCTL_PPI2C_P7             0x00000080                                                      /*  I2C Module 7 Present */
#define SYSCTL_PPI2C_P6             0x00000040                                                      /*  I2C Module 6 Present */
#define SYSCTL_PPI2C_P5             0x00000020                                                      /*  I2C Module 5 Present */
#define SYSCTL_PPI2C_P4             0x00000010                                                      /*  I2C Module 4 Present */
#define SYSCTL_PPI2C_P3             0x00000008                                                      /*  I2C Module 3 Present */
#define SYSCTL_PPI2C_P2             0x00000004                                                      /*  I2C Module 2 Present */
#define SYSCTL_PPI2C_P1             0x00000002                                                      /*  I2C Module 1 Present */
#define SYSCTL_PPI2C_P0             0x00000001                                                      /*  I2C Module 0 Present */

    /** Bit fields in the SYSCTL_PPUSB register                                                         pp.335 */
#define SYSCTL_PPUSB_P0             0x00000001                                                      /*  USB Module Present */

    /** Bit fields in the SYSCTL_PPEPHY register                                                        pp.336 */
#define SYSCTL_PPEPHY_P0            0x00000001                                                      /*  Ethernet PHY Module Present */

    /** Bit fields in the SYSCTL_PPCAN register                                                         pp.337 */
#define SYSCTL_PPCAN_P1             0x00000002                                                      /*  CAN Module 1 Present */
#define SYSCTL_PPCAN_P0             0x00000001                                                      /*  CAN Module 0 Present */

    /** Bit fields in the SYSCTL_PPADC register                                                         pp.338 */
#define SYSCTL_PPADC_P1             0x00000002                                                      /*  ADC Module 1 Present */
#define SYSCTL_PPADC_P0             0x00000001                                                      /*  ADC Module 0 Present */

    /** Bit fields in the SYSCTL_PPACMP register                                                        pp.339 */
#define SYSCTL_PPACMP_P0            0x00000001                                                      /*  Analog Comparator Module Present */

    /** Bit fields in the SYSCTL_PPPWM register                                                         pp.340 */
#define SYSCTL_PPPWM_P0             0x00000001                                                      /*  PWM Module 0 Present */

    /** Bit fields in the SYSCTL_PPQEI register                                                         pp.341 */
#define SYSCTL_PPQEI_P0             0x00000001                                                      /*  QEI Module 0 Present */

    /** Bit fields in the SYSCTL_PPLPC register                                                         pp.342 */
#define SYSCTL_PPLPC_P0             0x00000001                                                      /*  LPC Module Present */

    /** Bit fields in the SYSCTL_PPPECI register                                                        pp.343 */
#define SYSCTL_PPPECI_P0            0x00000001                                                      /*  PECI Module Present */

    /** Bit fields in the SYSCTL_PPFAN register                                                         pp.344 */
#define SYSCTL_PPFAN_P0             0x00000001                                                      /*  FAN Module 0 Present */

    /** Bit fields in the SYSCTL_PPEEPROM register                                                      pp.345 */
#define SYSCTL_PPEEPROM_P0          0x00000001                                                      /*  EEPROM Module Present */

    /** Bit fields in the SYSCTL_PPWTIMER register                                                      pp.346 */
#define SYSCTL_PPWTIMER_P0          0x00000001                                                      /*  32/64-Bit Wide General-Purpose Timer 0 Present */

    /** Bit fields in the SYSCTL_PPRTS register                                                         pp.347 */
#define SYSCTL_PPRTS_P0             0x00000001                                                      /*  RTS Module Present */

    /** Bit fields in the SYSCTL_PPCCM register                                                         pp.348 */
#define SYSCTL_PPCCM_P0             0x00000001                                                      /*  CRC and Cryptographic Modules Present */

    /** Bit fields in the SYSCTL_PPLCD register                                                         pp.349 */
#define SYSCTL_PPLCD_P0             0x00000001                                                      /*  LCD Module Present */

    /** Bit fields in the SYSCTL_PPOWIRE register                                                       pp.350 */
#define SYSCTL_PPOWIRE_P0           0x00000001                                                      /*  1-Wire Module Present */

    /** Bit fields in the SYSCTL_PPEMAC register                                                        pp.351 */
#define SYSCTL_PPEMAC_P0            0x00000001                                                      /*  Ethernet Controller Module Present */

    /** Bit fields in the SYSCTL_PPHIM register                                                         pp.353 */
#define SYSCTL_PPHIM_P0             0x00000001                                                      /*  HIM Module Present */

    /** Bit fields in the SYSCTL_SRWD register                                                          pp.354 */
#define SYSCTL_SRWD_R1              0x00000002                                                      /*  Watchdog Timer 1 Software Reset */
#define SYSCTL_SRWD_R0              0x00000001                                                      /*  Watchdog Timer 0 Software Reset */

    /** Bit fields in the SYSCTL_SRTIMER register                                                       pp.355 */
#define SYSCTL_SRTIMER_R7           0x00000080                                                      /*  16/32-Bit General-Purpose Timer 7 Software Reset */
#define SYSCTL_SRTIMER_R6           0x00000040                                                      /*  16/32-Bit General-Purpose Timer 6 Software Reset */
#define SYSCTL_SRTIMER_R5           0x00000020                                                      /*  16/32-Bit General-Purpose Timer 5 Software Reset */
#define SYSCTL_SRTIMER_R4           0x00000010                                                      /*  16/32-Bit General-Purpose Timer 4 Software Reset */
#define SYSCTL_SRTIMER_R3           0x00000008                                                      /*  16/32-Bit General-Purpose Timer 3 Software Reset */
#define SYSCTL_SRTIMER_R2           0x00000004                                                      /*  16/32-Bit General-Purpose Timer 2 Software Reset */
#define SYSCTL_SRTIMER_R1           0x00000002                                                      /*  16/32-Bit General-Purpose Timer 1 Software Reset */
#define SYSCTL_SRTIMER_R0           0x00000001                                                      /*  16/32-Bit General-Purpose Timer 0 Software Reset */

    /** Bit fields in the SYSCTL_SRGPIO register                                                        pp.357 */
#define SYSCTL_SRGPIO_R14           0x00004000                                                      /*  GPIO Port Q Software Reset */
#define SYSCTL_SRGPIO_R13           0x00002000                                                      /*  GPIO Port P Software Reset */
#define SYSCTL_SRGPIO_R12           0x00001000                                                      /*  GPIO Port N Software Reset */
#define SYSCTL_SRGPIO_R11           0x00000800                                                      /*  GPIO Port M Software Reset */
#define SYSCTL_SRGPIO_R10           0x00000400                                                      /*  GPIO Port L Software Reset */
#define SYSCTL_SRGPIO_R9            0x00000200                                                      /*  GPIO Port K Software Reset */
#define SYSCTL_SRGPIO_R8            0x00000100                                                      /*  GPIO Port J Software Reset */
#define SYSCTL_SRGPIO_R7            0x00000080                                                      /*  GPIO Port H Software Reset */
#define SYSCTL_SRGPIO_R6            0x00000040                                                      /*  GPIO Port G Software Reset */
#define SYSCTL_SRGPIO_R5            0x00000020                                                      /*  GPIO Port F Software Reset */
#define SYSCTL_SRGPIO_R4            0x00000010                                                      /*  GPIO Port E Software Reset */
#define SYSCTL_SRGPIO_R3            0x00000008                                                      /*  GPIO Port D Software Reset */
#define SYSCTL_SRGPIO_R2            0x00000004                                                      /*  GPIO Port C Software Reset */
#define SYSCTL_SRGPIO_R1            0x00000002                                                      /*  GPIO Port B Software Reset */
#define SYSCTL_SRGPIO_R0            0x00000001                                                      /*  GPIO Port A Software Reset */

    /** Bit fields in the SYSCTL_SRDMA register                                                         pp.360 */
#define SYSCTL_SRDMA_R0             0x00000001                                                      /*  uDMA Module Software Reset */

    /** Bit fields in the SYSCTL_SREPI register                                                         pp.361 */
#define SYSCTL_SREPI_R0             0x00000001                                                      /*  EPI Module Software Reset */

    /** Bit fields in the SYSCTL_SRHIB register                                                         pp.362 */
#define SYSCTL_SRHIB_R0             0x00000001                                                      /*  Hibernation Module Software Reset */

    /** Bit fields in the SYSCTL_SRUART register                                                        pp.363 */
#define SYSCTL_SRUART_R7            0x00000080                                                      /*  UART Module 7 Software Reset */
#define SYSCTL_SRUART_R6            0x00000040                                                      /*  UART Module 6 Software Reset */
#define SYSCTL_SRUART_R5            0x00000020                                                      /*  UART Module 5 Software Reset */
#define SYSCTL_SRUART_R4            0x00000010                                                      /*  UART Module 4 Software Reset */
#define SYSCTL_SRUART_R3            0x00000008                                                      /*  UART Module 3 Software Reset */
#define SYSCTL_SRUART_R2            0x00000004                                                      /*  UART Module 2 Software Reset */
#define SYSCTL_SRUART_R1            0x00000002                                                      /*  UART Module 1 Software Reset */
#define SYSCTL_SRUART_R0            0x00000001                                                      /*  UART Module 0 Software Reset */

    /** Bit fields in the SYSCTL_SRSSI register                                                         pp.365 */
#define SYSCTL_SRSSI_R3             0x00000008                                                      /*  SSI Module 3 Software Reset */
#define SYSCTL_SRSSI_R2             0x00000004                                                      /*  SSI Module 2 Software Reset */
#define SYSCTL_SRSSI_R1             0x00000002                                                      /*  SSI Module 1 Software Reset */
#define SYSCTL_SRSSI_R0             0x00000001                                                      /*  SSI Module 0 Software Reset */

    /** Bit fields in the SYSCTL_SRI2C register                                                         pp.367 */
#define SYSCTL_SRI2C_R9             0x00000200                                                      /*  I2C Module 9 Software Reset */
#define SYSCTL_SRI2C_R8             0x00000100                                                      /*  I2C Module 8 Software Reset */
#define SYSCTL_SRI2C_R7             0x00000080                                                      /*  I2C Module 7 Software Reset */
#define SYSCTL_SRI2C_R6             0x00000040                                                      /*  I2C Module 6 Software Reset */
#define SYSCTL_SRI2C_R5             0x00000020                                                      /*  I2C Module 5 Software Reset */
#define SYSCTL_SRI2C_R4             0x00000010                                                      /*  I2C Module 4 Software Reset */
#define SYSCTL_SRI2C_R3             0x00000008                                                      /*  I2C Module 3 Software Reset */
#define SYSCTL_SRI2C_R2             0x00000004                                                      /*  I2C Module 2 Software Reset */
#define SYSCTL_SRI2C_R1             0x00000002                                                      /*  I2C Module 1 Software Reset */
#define SYSCTL_SRI2C_R0             0x00000001                                                      /*  I2C Module 0 Software Reset */

    /** Bit fields in the SYSCTL_SRUSB register                                                         pp.369 */
#define SYSCTL_SRUSB_R0             0x00000001                                                      /*  USB Module Software Reset */

    /** Bit fields in the SYSCTL_SREPHY register                                                        pp.370 */
#define SYSCTL_SREPHY_R0            0x00000001                                                      /*  Ethernet PHY Module Software Reset */

    /** Bit fields in the SYSCTL_SRCAN register                                                         pp.371 */
#define SYSCTL_SRCAN_R1             0x00000002                                                      /*  CAN Module 1 Software Reset */
#define SYSCTL_SRCAN_R0             0x00000001                                                      /*  CAN Module 0 Software Reset */

    /** Bit fields in the SYSCTL_SRADC register                                                         pp.372 */
#define SYSCTL_SRADC_R1             0x00000002                                                      /*  ADC Module 1 Software Reset */
#define SYSCTL_SRADC_R0             0x00000001                                                      /*  ADC Module 0 Software Reset */

    /** Bit fields in the SYSCTL_SRACMP register                                                        pp.373 */
#define SYSCTL_SRACMP_R0            0x00000001                                                      /*  Analog Comparator Module 0 Software Reset */

    /** Bit fields in the SYSCTL_SRPWM register                                                         pp.374 */
#define SYSCTL_SRPWM_R0             0x00000001                                                      /*  PWM Module 0 Software Reset */

    /** Bit fields in the SYSCTL_SRQEI register                                                         pp.375 */
#define SYSCTL_SRQEI_R0             0x00000001                                                      /*  QEI Module 0 Software Reset */

    /** Bit fields in the SYSCTL_SREEPROM register                                                      pp.376 */
#define SYSCTL_SREEPROM_R0          0x00000001                                                      /*  EEPROM Module Software Reset */

    /** Bit fields in the SYSCTL_SRCCM register                                                         pp.377 */
#define SYSCTL_SRCCM_R0             0x00000001                                                      /*  CRC and Cryptographic Modules Software Reset */

    /** Bit fields in the SYSCTL_SREMAC register                                                        pp.378 */
#define SYSCTL_SREMAC_R0            0x00000001                                                      /*  Ethernet Controller MAC Module 0 Software Reset */

    /** Bit fields in the SYSCTL_RCGCWD register                                                        pp.379 */
#define SYSCTL_RCGCWD_R1            0x00000002                                                      /*  Watchdog Timer 1 Run Mode Clock Gating Control */
#define SYSCTL_RCGCWD_R0            0x00000001                                                      /*  Watchdog Timer 0 Run Mode Clock Gating Control */

    /** Bit fields in the SYSCTL_RCGCTIMER register                                                     pp.380 */
#define SYSCTL_RCGCTIMER_R7         0x00000080                                                      /*  16/32-Bit General-Purpose Timer 7 Run Mode Clock Gating Control */
#define SYSCTL_RCGCTIMER_R6         0x00000040                                                      /*  16/32-Bit General-Purpose Timer 6 Run Mode Clock Gating Control */
#define SYSCTL_RCGCTIMER_R5         0x00000020                                                      /*  16/32-Bit General-Purpose Timer 5 Run Mode Clock Gating Control */
#define SYSCTL_RCGCTIMER_R4         0x00000010                                                      /*  16/32-Bit General-Purpose Timer 4 Run Mode Clock Gating Control */
#define SYSCTL_RCGCTIMER_R3         0x00000008                                                      /*  16/32-Bit General-Purpose Timer 3 Run Mode Clock Gating Control */
#define SYSCTL_RCGCTIMER_R2         0x00000004                                                      /*  16/32-Bit General-Purpose Timer 2 Run Mode Clock Gating Control */
#define SYSCTL_RCGCTIMER_R1         0x00000002                                                      /*  16/32-Bit General-Purpose Timer 1 Run Mode Clock Gating Control */
#define SYSCTL_RCGCTIMER_R0         0x00000001                                                      /*  16/32-Bit General-Purpose Timer 0 Run Mode Clock Gating Control */

    /** Bit fields in the SYSCTL_RCGCGPIO register                                                      pp.382 */
#define SYSCTL_RCGCGPIO_R14         0x00004000                                                      /*  GPIO Port Q Run Mode Clock Gating Control */
#define SYSCTL_RCGCGPIO_R13         0x00002000                                                      /*  GPIO Port P Run Mode Clock Gating Control */
#define SYSCTL_RCGCGPIO_R12         0x00001000                                                      /*  GPIO Port N Run Mode Clock Gating Control */
#define SYSCTL_RCGCGPIO_R11         0x00000800                                                      /*  GPIO Port M Run Mode Clock Gating Control */
#define SYSCTL_RCGCGPIO_R10         0x00000400                                                      /*  GPIO Port L Run Mode Clock Gating Control */
#define SYSCTL_RCGCGPIO_R9          0x00000200                                                      /*  GPIO Port K Run Mode Clock Gating Control */
#define SYSCTL_RCGCGPIO_R8          0x00000100                                                      /*  GPIO Port J Run Mode Clock Gating Control */
#define SYSCTL_RCGCGPIO_R7          0x00000080                                                      /*  GPIO Port H Run Mode Clock Gating Control */
#define SYSCTL_RCGCGPIO_R6          0x00000040                                                      /*  GPIO Port G Run Mode Clock Gating Control */
#define SYSCTL_RCGCGPIO_R5          0x00000020                                                      /*  GPIO Port F Run Mode Clock Gating Control */
#define SYSCTL_RCGCGPIO_R4          0x00000010                                                      /*  GPIO Port E Run Mode Clock Gating Control */
#define SYSCTL_RCGCGPIO_R3          0x00000008                                                      /*  GPIO Port D Run Mode Clock Gating Control */
#define SYSCTL_RCGCGPIO_R2          0x00000004                                                      /*  GPIO Port C Run Mode Clock Gating Control */
#define SYSCTL_RCGCGPIO_R1          0x00000002                                                      /*  GPIO Port B Run Mode Clock Gating Control */
#define SYSCTL_RCGCGPIO_R0          0x00000001                                                      /*  GPIO Port A Run Mode Clock Gating Control */

    /** Bit fields in the SYSCTL_RCGCDMA register                                                       pp.385 */
#define SYSCTL_RCGCDMA_R0           0x00000001                                                      /*  uDMA Module Run Mode Clock Gating Control */

    /** Bit fields in the SYSCTL_RCGCEPI register                                                       pp.386 */
#define SYSCTL_RCGCEPI_R0           0x00000001                                                      /*  EPI Module Run Mode Clock Gating Control */

    /** Bit fields in the SYSCTL_RCGCHIB register                                                       pp.387 */
#define SYSCTL_RCGCHIB_R0           0x00000001                                                      /*  Hibernation Module Run Mode Clock Gating Control */

    /** Bit fields in the SYSCTL_RCGCUART register                                                      pp.388 */
#define SYSCTL_RCGCUART_R7          0x00000080                                                      /*  UART Module 7 Run Mode Clock Gating Control */
#define SYSCTL_RCGCUART_R6          0x00000040                                                      /*  UART Module 6 Run Mode Clock Gating Control */
#define SYSCTL_RCGCUART_R5          0x00000020                                                      /*  UART Module 5 Run Mode Clock Gating Control */
#define SYSCTL_RCGCUART_R4          0x00000010                                                      /*  UART Module 4 Run Mode Clock Gating Control */
#define SYSCTL_RCGCUART_R3          0x00000008                                                      /*  UART Module 3 Run Mode Clock Gating Control */
#define SYSCTL_RCGCUART_R2          0x00000004                                                      /*  UART Module 2 Run Mode Clock Gating Control */
#define SYSCTL_RCGCUART_R1          0x00000002                                                      /*  UART Module 1 Run Mode Clock Gating Control */
#define SYSCTL_RCGCUART_R0          0x00000001                                                      /*  UART Module 0 Run Mode Clock Gating Control */

    /** Bit fields in the SYSCTL_RCGCSSI register                                                       pp.390 */
#define SYSCTL_RCGCSSI_R3           0x00000008                                                      /*  SSI Module 3 Run Mode Clock Gating Control */
#define SYSCTL_RCGCSSI_R2           0x00000004                                                      /*  SSI Module 2 Run Mode Clock Gating Control */
#define SYSCTL_RCGCSSI_R1           0x00000002                                                      /*  SSI Module 1 Run Mode Clock Gating Control */
#define SYSCTL_RCGCSSI_R0           0x00000001                                                      /*  SSI Module 0 Run Mode Clock Gating Control */

    /** Bit fields in the SYSCTL_RCGCI2C register                                                       pp.391 */
#define SYSCTL_RCGCI2C_R9           0x00000200                                                      /*  I2C Module 9 Run Mode Clock Gating Control */
#define SYSCTL_RCGCI2C_R8           0x00000100                                                      /*  I2C Module 8 Run Mode Clock Gating Control */
#define SYSCTL_RCGCI2C_R7           0x00000080                                                      /*  I2C Module 7 Run Mode Clock Gating Control */
#define SYSCTL_RCGCI2C_R6           0x00000040                                                      /*  I2C Module 6 Run Mode Clock Gating Control */
#define SYSCTL_RCGCI2C_R5           0x00000020                                                      /*  I2C Module 5 Run Mode Clock Gating Control */
#define SYSCTL_RCGCI2C_R4           0x00000010                                                      /*  I2C Module 4 Run Mode Clock Gating Control */
#define SYSCTL_RCGCI2C_R3           0x00000008                                                      /*  I2C Module 3 Run Mode Clock Gating Control */
#define SYSCTL_RCGCI2C_R2           0x00000004                                                      /*  I2C Module 2 Run Mode Clock Gating Control */
#define SYSCTL_RCGCI2C_R1           0x00000002                                                      /*  I2C Module 1 Run Mode Clock Gating Control */
#define SYSCTL_RCGCI2C_R0           0x00000001                                                      /*  I2C Module 0 Run Mode Clock Gating Control */

    /** Bit fields in the SYSCTL_RCGCUSB register                                                       pp.393 */
#define SYSCTL_RCGCUSB_R0           0x00000001                                                      /*  USB Module Run Mode Clock Gating Control */

    /** Bit fields in the SYSCTL_RCGCEPHY register                                                      pp.394 */
#define SYSCTL_RCGCEPHY_R0          0x00000001                                                      /*  Ethernet PHY Module Run Mode Clock Gating Control */

    /** Bit fields in the SYSCTL_RCGCCAN register                                                       pp.395 */
#define SYSCTL_RCGCCAN_R1           0x00000002                                                      /*  CAN Module 1 Run Mode Clock Gating Control */
#define SYSCTL_RCGCCAN_R0           0x00000001                                                      /*  CAN Module 0 Run Mode Clock Gating Control */

    /** Bit fields in the SYSCTL_RCGCADC register                                                       pp.396 */
#define SYSCTL_RCGCADC_R1           0x00000002                                                      /*  ADC Module 1 Run Mode Clock Gating Control */
#define SYSCTL_RCGCADC_R0           0x00000001                                                      /*  ADC Module 0 Run Mode Clock Gating Control */

    /** Bit fields in the SYSCTL_RCGCACMP register                                                      pp.397 */
#define SYSCTL_RCGCACMP_R0          0x00000001                                                      /*  Analog Comparator Module 0 Run Mode Clock Gating Control */

    /** Bit fields in the SYSCTL_RCGCPWM register                                                       pp.398 */
#define SYSCTL_RCGCPWM_R0           0x00000001                                                      /*  PWM Module 0 Run Mode Clock Gating Control */

    /** Bit fields in the SYSCTL_RCGCQEI register                                                       pp.399 */
#define SYSCTL_RCGCQEI_R0           0x00000001                                                      /*  QEI Module 0 Run Mode Clock Gating Control */

    /** Bit fields in the SYSCTL_RCGCEEPROM register                                                    pp.400 */
#define SYSCTL_RCGCEEPROM_R0        0x00000001                                                      /*  EEPROM Module Run Mode Clock Gating Control */

    /** Bit fields in the SYSCTL_RCGCCCM register                                                       pp.401 */
#define SYSCTL_RCGCCCM_R0           0x00000001                                                      /*  CRC and Cryptographic Modules Run Mode Clock Gating Control */

    /** Bit fields in the SYSCTL_RCGCEMAC register                                                      pp.402 */
#define SYSCTL_RCGCEMAC_R0          0x00000001                                                      /*  Ethernet MAC Module 0 Run Mode Clock Gating Control */

    /** Bit fields in the SYSCTL_SCGCWD register                                                        pp.403 */
#define SYSCTL_SCGCWD_S1            0x00000002                                                      /*  Watchdog Timer 1 Sleep Mode Clock Gating Control */
#define SYSCTL_SCGCWD_S0            0x00000001                                                      /*  Watchdog Timer 0 Sleep Mode Clock Gating Control */

    /** Bit fields in the SYSCTL_SCGCTIMER register                                                     pp.404 */
#define SYSCTL_SCGCTIMER_S7         0x00000080                                                      /*  16/32-Bit General-Purpose Timer 7 Sleep Mode Clock Gating Control */
#define SYSCTL_SCGCTIMER_S6         0x00000040                                                      /*  16/32-Bit General-Purpose Timer 6 Sleep Mode Clock Gating Control */
#define SYSCTL_SCGCTIMER_S5         0x00000020                                                      /*  16/32-Bit General-Purpose Timer 5 Sleep Mode Clock Gating Control */
#define SYSCTL_SCGCTIMER_S4         0x00000010                                                      /*  16/32-Bit General-Purpose Timer 4 Sleep Mode Clock Gating Control */
#define SYSCTL_SCGCTIMER_S3         0x00000008                                                      /*  16/32-Bit General-Purpose Timer 3 Sleep Mode Clock Gating Control */
#define SYSCTL_SCGCTIMER_S2         0x00000004                                                      /*  16/32-Bit General-Purpose Timer 2 Sleep Mode Clock Gating Control */
#define SYSCTL_SCGCTIMER_S1         0x00000002                                                      /*  16/32-Bit General-Purpose Timer 1 Sleep Mode Clock Gating Control */
#define SYSCTL_SCGCTIMER_S0         0x00000001                                                      /*  16/32-Bit General-Purpose Timer 0 Sleep Mode Clock Gating Control */

    /** Bit fields in the SYSCTL_SCGCGPIO register                                                      pp.406 */
#define SYSCTL_SCGCGPIO_S14         0x00004000                                                      /*  GPIO Port Q Sleep Mode Clock Gating Control */
#define SYSCTL_SCGCGPIO_S13         0x00002000                                                      /*  GPIO Port P Sleep Mode Clock Gating Control */
#define SYSCTL_SCGCGPIO_S12         0x00001000                                                      /*  GPIO Port N Sleep Mode Clock Gating Control */
#define SYSCTL_SCGCGPIO_S11         0x00000800                                                      /*  GPIO Port M Sleep Mode Clock Gating Control */
#define SYSCTL_SCGCGPIO_S10         0x00000400                                                      /*  GPIO Port L Sleep Mode Clock Gating Control */
#define SYSCTL_SCGCGPIO_S9          0x00000200                                                      /*  GPIO Port K Sleep Mode Clock Gating Control */
#define SYSCTL_SCGCGPIO_S8          0x00000100                                                      /*  GPIO Port J Sleep Mode Clock Gating Control */
#define SYSCTL_SCGCGPIO_S7          0x00000080                                                      /*  GPIO Port H Sleep Mode Clock Gating Control */
#define SYSCTL_SCGCGPIO_S6          0x00000040                                                      /*  GPIO Port G Sleep Mode Clock Gating Control */
#define SYSCTL_SCGCGPIO_S5          0x00000020                                                      /*  GPIO Port F Sleep Mode Clock Gating Control */
#define SYSCTL_SCGCGPIO_S4          0x00000010                                                      /*  GPIO Port E Sleep Mode Clock Gating Control */
#define SYSCTL_SCGCGPIO_S3          0x00000008                                                      /*  GPIO Port D Sleep Mode Clock Gating Control */
#define SYSCTL_SCGCGPIO_S2          0x00000004                                                      /*  GPIO Port C Sleep Mode Clock Gating Control */
#define SYSCTL_SCGCGPIO_S1          0x00000002                                                      /*  GPIO Port B Sleep Mode Clock Gating Control */
#define SYSCTL_SCGCGPIO_S0          0x00000001                                                      /*  GPIO Port A Sleep Mode Clock Gating Control */

    /** Bit fields in the SYSCTL_SCGCDMA register                                                       pp.409 */
#define SYSCTL_SCGCDMA_S0           0x00000001                                                      /*  uDMA Module Sleep Mode Clock Gating Control */

    /** Bit fields in the SYSCTL_SCGCEPI register                                                       pp.410 */
#define SYSCTL_SCGCEPI_S0           0x00000001                                                      /*  EPI Module Sleep Mode Clock Gating Control */

    /** Bit fields in the SYSCTL_SCGCHIB register                                                       pp.411 */
#define SYSCTL_SCGCHIB_S0           0x00000001                                                      /*  Hibernation Module Sleep Mode Clock Gating Control */

    /** Bit fields in the SYSCTL_SCGCUART register                                                      pp.412 */
#define SYSCTL_SCGCUART_S7          0x00000080                                                      /*  UART Module 7 Sleep Mode Clock Gating Control */
#define SYSCTL_SCGCUART_S6          0x00000040                                                      /*  UART Module 6 Sleep Mode Clock Gating Control */
#define SYSCTL_SCGCUART_S5          0x00000020                                                      /*  UART Module 5 Sleep Mode Clock Gating Control */
#define SYSCTL_SCGCUART_S4          0x00000010                                                      /*  UART Module 4 Sleep Mode Clock Gating Control */
#define SYSCTL_SCGCUART_S3          0x00000008                                                      /*  UART Module 3 Sleep Mode Clock Gating Control */
#define SYSCTL_SCGCUART_S2          0x00000004                                                      /*  UART Module 2 Sleep Mode Clock Gating Control */
#define SYSCTL_SCGCUART_S1          0x00000002                                                      /*  UART Module 1 Sleep Mode Clock Gating Control */
#define SYSCTL_SCGCUART_S0          0x00000001                                                      /*  UART Module 0 Sleep Mode Clock Gating Control */

    /** Bit fields in the SYSCTL_SCGCSSI register                                                       pp.414 */
#define SYSCTL_SCGCSSI_S3           0x00000008                                                      /*  SSI Module 3 Sleep Mode Clock Gating Control */
#define SYSCTL_SCGCSSI_S2           0x00000004                                                      /*  SSI Module 2 Sleep Mode Clock Gating Control */
#define SYSCTL_SCGCSSI_S1           0x00000002                                                      /*  SSI Module 1 Sleep Mode Clock Gating Control */
#define SYSCTL_SCGCSSI_S0           0x00000001                                                      /*  SSI Module 0 Sleep Mode Clock Gating Control */

    /** Bit fields in the SYSCTL_SCGCI2C register                                                       pp.415 */
#define SYSCTL_SCGCI2C_S9           0x00000200                                                      /*  I2C Module 9 Sleep Mode Clock Gating Control */
#define SYSCTL_SCGCI2C_S8           0x00000100                                                      /*  I2C Module 8 Sleep Mode Clock Gating Control */
#define SYSCTL_SCGCI2C_S7           0x00000080                                                      /*  I2C Module 7 Sleep Mode Clock Gating Control */
#define SYSCTL_SCGCI2C_S6           0x00000040                                                      /*  I2C Module 6 Sleep Mode Clock Gating Control */
#define SYSCTL_SCGCI2C_S5           0x00000020                                                      /*  I2C Module 5 Sleep Mode Clock Gating Control */
#define SYSCTL_SCGCI2C_S4           0x00000010                                                      /*  I2C Module 4 Sleep Mode Clock Gating Control */
#define SYSCTL_SCGCI2C_S3           0x00000008                                                      /*  I2C Module 3 Sleep Mode Clock Gating Control */
#define SYSCTL_SCGCI2C_S2           0x00000004                                                      /*  I2C Module 2 Sleep Mode Clock Gating Control */
#define SYSCTL_SCGCI2C_S1           0x00000002                                                      /*  I2C Module 1 Sleep Mode Clock Gating Control */
#define SYSCTL_SCGCI2C_S0           0x00000001                                                      /*  I2C Module 0 Sleep Mode Clock Gating Control */

    /** Bit fields in the SYSCTL_SCGCUSB register                                                       pp.417 */
#define SYSCTL_SCGCUSB_S0           0x00000001                                                      /*  USB Module Sleep Mode Clock Gating Control */

    /** Bit fields in the SYSCTL_SCGCEPHY register                                                      pp.418 */
#define SYSCTL_SCGCEPHY_S0          0x00000001                                                      /*  PHY Module Sleep Mode Clock Gating Control */

    /** Bit fields in the SYSCTL_SCGCCAN register                                                       pp.419 */
#define SYSCTL_SCGCCAN_S1           0x00000002                                                      /*  CAN Module 1 Sleep Mode Clock Gating Control */
#define SYSCTL_SCGCCAN_S0           0x00000001                                                      /*  CAN Module 0 Sleep Mode Clock Gating Control */

    /** Bit fields in the SYSCTL_SCGCADC register                                                       pp.420 */
#define SYSCTL_SCGCADC_S1           0x00000002                                                      /*  ADC Module 1 Sleep Mode Clock Gating Control */
#define SYSCTL_SCGCADC_S0           0x00000001                                                      /*  ADC Module 0 Sleep Mode Clock Gating Control */

    /** Bit fields in the SYSCTL_SCGCACMP register                                                      pp.421 */
#define SYSCTL_SCGCACMP_S0          0x00000001                                                      /*  Analog Comparator Module 0 Sleep Mode Clock Gating Control */

    /** Bit fields in the SYSCTL_SCGCPWM register                                                       pp.422 */
#define SYSCTL_SCGCPWM_S0           0x00000001                                                      /*  PWM Module 0 Sleep Mode Clock Gating Control */

    /** Bit fields in the SYSCTL_SCGCQEI register                                                       pp.423 */
#define SYSCTL_SCGCQEI_S0           0x00000001                                                      /*  QEI Module 0 Sleep Mode Clock Gating Control */

    /** Bit fields in the SYSCTL_SCGCEEPROM register                                                    pp.424 */
#define SYSCTL_SCGCEEPROM_S0        0x00000001                                                      /*  EEPROM Module Sleep Mode Clock Gating Control */

    /** Bit fields in the SYSCTL_SCGCCCM register                                                       pp.425 */
#define SYSCTL_SCGCCCM_S0           0x00000001                                                      /*  CRC and Cryptographic Modules Sleep Mode Clock Gating Control */

    /** Bit fields in the SYSCTL_SCGCEMAC register                                                      pp.426 */
#define SYSCTL_SCGCEMAC_S0          0x00000001                                                      /*  Ethernet MAC Module 0 Sleep Mode Clock Gating Control */

    /** Bit fields in the SYSCTL_DCGCWD register                                                        pp.427 */
#define SYSCTL_DCGCWD_D1            0x00000002                                                      /*  Watchdog Timer 1 Deep-Sleep Mode Clock Gating Control */
#define SYSCTL_DCGCWD_D0            0x00000001                                                      /*  Watchdog Timer 0 Deep-Sleep Mode Clock Gating Control */

    /** Bit fields in the SYSCTL_DCGCTIMER register                                                     pp.428 */
#define SYSCTL_DCGCTIMER_D7         0x00000080                                                      /*  16/32-Bit General-Purpose Timer 7 Deep-Sleep Mode Clock Gating Control */
#define SYSCTL_DCGCTIMER_D6         0x00000040                                                      /*  16/32-Bit General-Purpose Timer 6 Deep-Sleep Mode Clock Gating Control */
#define SYSCTL_DCGCTIMER_D5         0x00000020                                                      /*  16/32-Bit General-Purpose Timer 5 Deep-Sleep Mode Clock Gating Control */
#define SYSCTL_DCGCTIMER_D4         0x00000010                                                      /*  16/32-Bit General-Purpose Timer 4 Deep-Sleep Mode Clock Gating Control */
#define SYSCTL_DCGCTIMER_D3         0x00000008                                                      /*  16/32-Bit General-Purpose Timer 3 Deep-Sleep Mode Clock Gating Control */
#define SYSCTL_DCGCTIMER_D2         0x00000004                                                      /*  16/32-Bit General-Purpose Timer 2 Deep-Sleep Mode Clock Gating Control */
#define SYSCTL_DCGCTIMER_D1         0x00000002                                                      /*  16/32-Bit General-Purpose Timer 1 Deep-Sleep Mode Clock Gating Control */
#define SYSCTL_DCGCTIMER_D0         0x00000001                                                      /*  16/32-Bit General-Purpose Timer 0 Deep-Sleep Mode Clock Gating Control */

    /** Bit fields in the SYSCTL_DCGCGPIO register                                                      pp.430 */
#define SYSCTL_DCGCGPIO_D14         0x00004000                                                      /*  GPIO Port Q Deep-Sleep Mode Clock Gating Control */
#define SYSCTL_DCGCGPIO_D13         0x00002000                                                      /*  GPIO Port P Deep-Sleep Mode Clock Gating Control */
#define SYSCTL_DCGCGPIO_D12         0x00001000                                                      /*  GPIO Port N Deep-Sleep Mode Clock Gating Control */
#define SYSCTL_DCGCGPIO_D11         0x00000800                                                      /*  GPIO Port M Deep-Sleep Mode Clock Gating Control */
#define SYSCTL_DCGCGPIO_D10         0x00000400                                                      /*  GPIO Port L Deep-Sleep Mode Clock Gating Control */
#define SYSCTL_DCGCGPIO_D9          0x00000200                                                      /*  GPIO Port K Deep-Sleep Mode Clock Gating Control */
#define SYSCTL_DCGCGPIO_D8          0x00000100                                                      /*  GPIO Port J Deep-Sleep Mode Clock Gating Control */
#define SYSCTL_DCGCGPIO_D7          0x00000080                                                      /*  GPIO Port H Deep-Sleep Mode Clock Gating Control */
#define SYSCTL_DCGCGPIO_D6          0x00000040                                                      /*  GPIO Port G Deep-Sleep Mode Clock Gating Control */
#define SYSCTL_DCGCGPIO_D5          0x00000020                                                      /*  GPIO Port F Deep-Sleep Mode Clock Gating Control */
#define SYSCTL_DCGCGPIO_D4          0x00000010                                                      /*  GPIO Port E Deep-Sleep Mode Clock Gating Control */
#define SYSCTL_DCGCGPIO_D3          0x00000008                                                      /*  GPIO Port D Deep-Sleep Mode Clock Gating Control */
#define SYSCTL_DCGCGPIO_D2          0x00000004                                                      /*  GPIO Port C Deep-Sleep Mode Clock Gating Control */
#define SYSCTL_DCGCGPIO_D1          0x00000002                                                      /*  GPIO Port B Deep-Sleep Mode Clock Gating Control */
#define SYSCTL_DCGCGPIO_D0          0x00000001                                                      /*  GPIO Port A Deep-Sleep Mode Clock Gating Control */

    /** Bit fields in the SYSCTL_DCGCDMA register                                                       pp.433 */
#define SYSCTL_DCGCDMA_D0           0x00000001                                                      /*  uDMA Module Deep-Sleep Mode Clock Gating Control */

    /** Bit fields in the SYSCTL_DCGCEPI register                                                       pp.434 */
#define SYSCTL_DCGCEPI_D0           0x00000001                                                      /*  EPI Module Deep-Sleep Mode Clock Gating Control */

    /** Bit fields in the SYSCTL_DCGCHIB register                                                       pp.435 */
#define SYSCTL_DCGCHIB_D0           0x00000001                                                      /*  Hibernation Module Deep-Sleep Mode Clock Gating Control */

    /** Bit fields in the SYSCTL_DCGCUART register                                                      pp.436 */
#define SYSCTL_DCGCUART_D7          0x00000080                                                      /*  UART Module 7 Deep-Sleep Mode Clock Gating Control */
#define SYSCTL_DCGCUART_D6          0x00000040                                                      /*  UART Module 6 Deep-Sleep Mode Clock Gating Control */
#define SYSCTL_DCGCUART_D5          0x00000020                                                      /*  UART Module 5 Deep-Sleep Mode Clock Gating Control */
#define SYSCTL_DCGCUART_D4          0x00000010                                                      /*  UART Module 4 Deep-Sleep Mode Clock Gating Control */
#define SYSCTL_DCGCUART_D3          0x00000008                                                      /*  UART Module 3 Deep-Sleep Mode Clock Gating Control */
#define SYSCTL_DCGCUART_D2          0x00000004                                                      /*  UART Module 2 Deep-Sleep Mode Clock Gating Control */
#define SYSCTL_DCGCUART_D1          0x00000002                                                      /*  UART Module 1 Deep-Sleep Mode Clock Gating Control */
#define SYSCTL_DCGCUART_D0          0x00000001                                                      /*  UART Module 0 Deep-Sleep Mode Clock Gating Control */

    /** Bit fields in the SYSCTL_DCGCSSI register                                                       pp.438 */
#define SYSCTL_DCGCSSI_D3           0x00000008                                                      /*  SSI Module 3 Deep-Sleep Mode Clock Gating Control */
#define SYSCTL_DCGCSSI_D2           0x00000004                                                      /*  SSI Module 2 Deep-Sleep Mode Clock Gating Control */
#define SYSCTL_DCGCSSI_D1           0x00000002                                                      /*  SSI Module 1 Deep-Sleep Mode Clock Gating Control */
#define SYSCTL_DCGCSSI_D0           0x00000001                                                      /*  SSI Module 0 Deep-Sleep Mode Clock Gating Control */

    /** Bit fields in the SYSCTL_DCGCI2C register                                                       pp.439 */
#define SYSCTL_DCGCI2C_D9           0x00000200                                                      /*  I2C Module 9 Deep-Sleep Mode Clock Gating Control */
#define SYSCTL_DCGCI2C_D8           0x00000100                                                      /*  I2C Module 8 Deep-Sleep Mode Clock Gating Control */
#define SYSCTL_DCGCI2C_D7           0x00000080                                                      /*  I2C Module 7 Deep-Sleep Mode Clock Gating Control */
#define SYSCTL_DCGCI2C_D6           0x00000040                                                      /*  I2C Module 6 Deep-Sleep Mode Clock Gating Control */
#define SYSCTL_DCGCI2C_D5           0x00000020                                                      /*  I2C Module 5 Deep-Sleep Mode Clock Gating Control */
#define SYSCTL_DCGCI2C_D4           0x00000010                                                      /*  I2C Module 4 Deep-Sleep Mode Clock Gating Control */
#define SYSCTL_DCGCI2C_D3           0x00000008                                                      /*  I2C Module 3 Deep-Sleep Mode Clock Gating Control */
#define SYSCTL_DCGCI2C_D2           0x00000004                                                      /*  I2C Module 2 Deep-Sleep Mode Clock Gating Control */
#define SYSCTL_DCGCI2C_D1           0x00000002                                                      /*  I2C Module 1 Deep-Sleep Mode Clock Gating Control */
#define SYSCTL_DCGCI2C_D0           0x00000001                                                      /*  I2C Module 0 Deep-Sleep Mode Clock Gating Control */

    /** Bit fields in the SYSCTL_DCGCUSB register                                                       pp.441 */
#define SYSCTL_DCGCUSB_D0           0x00000001                                                      /*  USB Module Deep-Sleep Mode Clock Gating Control */

    /** Bit fields in the SYSCTL_DCGCEPHY register                                                      pp.442 */
#define SYSCTL_DCGCEPHY_D0          0x00000001                                                      /*  PHY Module Deep-Sleep Mode Clock Gating Control */

    /** Bit fields in the SYSCTL_DCGCCAN register                                                       pp.443 */
#define SYSCTL_DCGCCAN_D1           0x00000002                                                      /*  CAN Module 1 Deep-Sleep Mode Clock Gating Control */
#define SYSCTL_DCGCCAN_D0           0x00000001                                                      /*  CAN Module 0 Deep-Sleep Mode Clock Gating Control */

    /** Bit fields in the SYSCTL_DCGCADC register                                                       pp.444 */
#define SYSCTL_DCGCADC_D1           0x00000002                                                      /*  ADC Module 1 Deep-Sleep Mode Clock Gating Control */
#define SYSCTL_DCGCADC_D0           0x00000001                                                      /*  ADC Module 0 Deep-Sleep Mode Clock Gating Control */

    /** Bit fields in the SYSCTL_DCGCACMP register                                                      pp.445 */
#define SYSCTL_DCGCACMP_D0          0x00000001                                                      /*  Analog Comparator Module 0 Deep-Sleep Mode Clock Gating Control */

    /** Bit fields in the SYSCTL_DCGCPWM register                                                       pp.446 */
#define SYSCTL_DCGCPWM_D0           0x00000001                                                      /*  PWM Module 0 Deep-Sleep Mode Clock Gating Control */

    /** Bit fields in the SYSCTL_DCGCQEI register                                                       pp.447 */
#define SYSCTL_DCGCQEI_D0           0x00000001                                                      /*  QEI Module 0 Deep-Sleep Mode Clock Gating Control */

    /** Bit fields in the SYSCTL_DCGCEEPROM register                                                    pp.448 */
#define SYSCTL_DCGCEEPROM_D0        0x00000001                                                      /*  EEPROM Module Deep-Sleep Mode Clock Gating Control */

    /** Bit fields in the SYSCTL_DCGCCCM register                                                       pp.449 */
#define SYSCTL_DCGCCCM_D0           0x00000001                                                      /*  CRC and Cryptographic Modules Deep-Sleep Mode Clock Gating Control */

    /** Bit fields in the SYSCTL_DCGCEMAC register                                                      pp.450 */
#define SYSCTL_DCGCEMAC_D0          0x00000001                                                      /*  Ethernet MAC Module 0 Deep-Sleep Mode Clock Gating Control */

    /** Bit fields in the SYSCTL_PCWD register                                                          pp.451 */
#define SYSCTL_PCWD_P1              0x00000002                                                      /*  Watchdog Timer 1 Power Control */
#define SYSCTL_PCWD_P0              0x00000001                                                      /*  Watchdog Timer 0 Power Control */

    /** Bit fields in the SYSCTL_PCTIMER register                                                       pp.453 */
#define SYSCTL_PCTIMER_P7           0x00000080                                                      /*  General-Purpose Timer 7 Power Control */
#define SYSCTL_PCTIMER_P6           0x00000040                                                      /*  General-Purpose Timer 6 Power Control */
#define SYSCTL_PCTIMER_P5           0x00000020                                                      /*  General-Purpose Timer 5 Power Control */
#define SYSCTL_PCTIMER_P4           0x00000010                                                      /*  General-Purpose Timer 4 Power Control */
#define SYSCTL_PCTIMER_P3           0x00000008                                                      /*  General-Purpose Timer 3 Power Control */
#define SYSCTL_PCTIMER_P2           0x00000004                                                      /*  General-Purpose Timer 2 Power Control */
#define SYSCTL_PCTIMER_P1           0x00000002                                                      /*  General-Purpose Timer 1 Power Control */
#define SYSCTL_PCTIMER_P0           0x00000001                                                      /*  General-Purpose Timer 0 Power Control */

    /** Bit fields in the SYSCTL_PCGPIO register                                                        pp.456 */
#define SYSCTL_PCGPIO_P14           0x00004000                                                      /*  GPIO Port Q Power Control */
#define SYSCTL_PCGPIO_P13           0x00002000                                                      /*  GPIO Port P Power Control */
#define SYSCTL_PCGPIO_P12           0x00001000                                                      /*  GPIO Port N Power Control */
#define SYSCTL_PCGPIO_P11           0x00000800                                                      /*  GPIO Port M Power Control */
#define SYSCTL_PCGPIO_P10           0x00000400                                                      /*  GPIO Port L Power Control */
#define SYSCTL_PCGPIO_P9            0x00000200                                                      /*  GPIO Port K Power Control */
#define SYSCTL_PCGPIO_P8            0x00000100                                                      /*  GPIO Port J Power Control */
#define SYSCTL_PCGPIO_P7            0x00000080                                                      /*  GPIO Port H Power Control */
#define SYSCTL_PCGPIO_P6            0x00000040                                                      /*  GPIO Port G Power Control */
#define SYSCTL_PCGPIO_P5            0x00000020                                                      /*  GPIO Port F Power Control */
#define SYSCTL_PCGPIO_P4            0x00000010                                                      /*  GPIO Port E Power Control */
#define SYSCTL_PCGPIO_P3            0x00000008                                                      /*  GPIO Port D Power Control */
#define SYSCTL_PCGPIO_P2            0x00000004                                                      /*  GPIO Port C Power Control */
#define SYSCTL_PCGPIO_P1            0x00000002                                                      /*  GPIO Port B Power Control */
#define SYSCTL_PCGPIO_P0            0x00000001                                                      /*  GPIO Port A Power Control */

    /** Bit fields in the SYSCTL_PCDMA register                                                         pp.461 */
#define SYSCTL_PCDMA_P0             0x00000001                                                      /*  uDMA Module Power Control */

    /** Bit fields in the SYSCTL_PCEPI register                                                         pp.463 */
#define SYSCTL_PCEPI_P0             0x00000001                                                      /*  EPI Module Power Control */

    /** Bit fields in the SYSCTL_PCHIB register                                                         pp.465 */
#define SYSCTL_PCHIB_P0             0x00000001                                                      /*  Hibernation Module Power Control */

    /** Bit fields in the SYSCTL_PCUART register                                                        pp.467 */
#define SYSCTL_PCUART_P7            0x00000080                                                      /*  UART Module 7 Power Control */
#define SYSCTL_PCUART_P6            0x00000040                                                      /*  UART Module 6 Power Control */
#define SYSCTL_PCUART_P5            0x00000020                                                      /*  UART Module 5 Power Control */
#define SYSCTL_PCUART_P4            0x00000010                                                      /*  UART Module 4 Power Control */
#define SYSCTL_PCUART_P3            0x00000008                                                      /*  UART Module 3 Power Control */
#define SYSCTL_PCUART_P2            0x00000004                                                      /*  UART Module 2 Power Control */
#define SYSCTL_PCUART_P1            0x00000002                                                      /*  UART Module 1 Power Control */
#define SYSCTL_PCUART_P0            0x00000001                                                      /*  UART Module 0 Power Control */

    /** Bit fields in the SYSCTL_PCSSI register                                                         pp.470 */
#define SYSCTL_PCSSI_P3             0x00000008                                                      /*  SSI Module 3 Power Control */
#define SYSCTL_PCSSI_P2             0x00000004                                                      /*  SSI Module 2 Power Control */
#define SYSCTL_PCSSI_P1             0x00000002                                                      /*  SSI Module 1 Power Control */
#define SYSCTL_PCSSI_P0             0x00000001                                                      /*  SSI Module 0 Power Control */

    /** Bit fields in the SYSCTL_PCI2C register                                                         pp.472 */
#define SYSCTL_PCI2C_P9             0x00000200                                                      /*  I2C Module 9 Power Control */
#define SYSCTL_PCI2C_P8             0x00000100                                                      /*  I2C Module 8 Power Control */
#define SYSCTL_PCI2C_P7             0x00000080                                                      /*  I2C Module 7 Power Control */
#define SYSCTL_PCI2C_P6             0x00000040                                                      /*  I2C Module 6 Power Control */
#define SYSCTL_PCI2C_P5             0x00000020                                                      /*  I2C Module 5 Power Control */
#define SYSCTL_PCI2C_P4             0x00000010                                                      /*  I2C Module 4 Power Control */
#define SYSCTL_PCI2C_P3             0x00000008                                                      /*  I2C Module 3 Power Control */
#define SYSCTL_PCI2C_P2             0x00000004                                                      /*  I2C Module 2 Power Control */
#define SYSCTL_PCI2C_P1             0x00000002                                                      /*  I2C Module 1 Power Control */
#define SYSCTL_PCI2C_P0             0x00000001                                                      /*  I2C Module 0 Power Control */

    /** Bit fields in the SYSCTL_PCUSB register                                                         pp.476 */
#define SYSCTL_PCUSB_P0             0x00000001                                                      /*  USB Module Power Control */

    /** Bit fields in the SYSCTL_PCEPHY register                                                        pp.478 */
#define SYSCTL_PCEPHY_P0            0x00000001                                                      /*  Ethernet PHY Module Power Control */

    /** Bit fields in the SYSCTL_PCCAN register                                                         pp.480 */
#define SYSCTL_PCCAN_P1             0x00000002                                                      /*  CAN Module 1 Power Control */
#define SYSCTL_PCCAN_P0             0x00000001                                                      /*  CAN Module 0 Power Control */

    /** Bit fields in the SYSCTL_PCADC register                                                         pp.482 */
#define SYSCTL_PCADC_P1             0x00000002                                                      /*  ADC Module 1 Power Control */
#define SYSCTL_PCADC_P0             0x00000001                                                      /*  ADC Module 0 Power Control */

    /** Bit fields in the SYSCTL_PCACMP register                                                        pp.484 */
#define SYSCTL_PCACMP_P0            0x00000001                                                      /*  Analog Comparator Module 0 Power Control */

    /** Bit fields in the SYSCTL_PCPWM register                                                         pp.486 */
#define SYSCTL_PCPWM_P0             0x00000001                                                      /*  PWM Module 0 Power Control */

    /** Bit fields in the SYSCTL_PCQEI register                                                         pp.488 */
#define SYSCTL_PCQEI_P0             0x00000001                                                      /*  QEI Module 0 Power Control */

    /** Bit fields in the SYSCTL_PCEEPROM register                                                      pp.490 */
#define SYSCTL_PCEEPROM_P0          0x00000001                                                      /*  EEPROM Module 0 Power Control */

    /** Bit fields in the SYSCTL_PCCCM register                                                         pp.492 */
#define SYSCTL_PCCCM_P0             0x00000001                                                      /*  CRC and Cryptographic Modules Power Control */

    /** Bit fields in the SYSCTL_PCEMAC register                                                        pp.494 */
#define SYSCTL_PCEMAC_P0            0x00000001                                                      /*  Ethernet MAC Module 0 Power Control */

    /** Bit fields in the SYSCTL_PRWD register                                                          pp.496 */
#define SYSCTL_PRWD_R1              0x00000002                                                      /*  Watchdog Timer 1 Peripheral Ready */
#define SYSCTL_PRWD_R0              0x00000001                                                      /*  Watchdog Timer 0 Peripheral Ready */

    /** Bit fields in the SYSCTL_PRTIMER register                                                       pp.497 */
#define SYSCTL_PRTIMER_R7           0x00000080                                                      /*  16/32-Bit General-Purpose Timer 7 Peripheral Ready */
#define SYSCTL_PRTIMER_R6           0x00000040                                                      /*  16/32-Bit General-Purpose Timer 6 Peripheral Ready */
#define SYSCTL_PRTIMER_R5           0x00000020                                                      /*  16/32-Bit General-Purpose Timer 5 Peripheral Ready */
#define SYSCTL_PRTIMER_R4           0x00000010                                                      /*  16/32-Bit General-Purpose Timer 4 Peripheral Ready */
#define SYSCTL_PRTIMER_R3           0x00000008                                                      /*  16/32-Bit General-Purpose Timer 3 Peripheral Ready */
#define SYSCTL_PRTIMER_R2           0x00000004                                                      /*  16/32-Bit General-Purpose Timer 2 Peripheral Ready */
#define SYSCTL_PRTIMER_R1           0x00000002                                                      /*  16/32-Bit General-Purpose Timer 1 Peripheral Ready */
#define SYSCTL_PRTIMER_R0           0x00000001                                                      /*  16/32-Bit General-Purpose Timer 0 Peripheral Ready */

    /** Bit fields in the SYSCTL_PRGPIO register                                                        pp.499 */
#define SYSCTL_PRGPIO_R14           0x00004000                                                      /*  GPIO Port Q Peripheral Ready */
#define SYSCTL_PRGPIO_R13           0x00002000                                                      /*  GPIO Port P Peripheral Ready */
#define SYSCTL_PRGPIO_R12           0x00001000                                                      /*  GPIO Port N Peripheral Ready */
#define SYSCTL_PRGPIO_R11           0x00000800                                                      /*  GPIO Port M Peripheral Ready */
#define SYSCTL_PRGPIO_R10           0x00000400                                                      /*  GPIO Port L Peripheral Ready */
#define SYSCTL_PRGPIO_R9            0x00000200                                                      /*  GPIO Port K Peripheral Ready */
#define SYSCTL_PRGPIO_R8            0x00000100                                                      /*  GPIO Port J Peripheral Ready */
#define SYSCTL_PRGPIO_R7            0x00000080                                                      /*  GPIO Port H Peripheral Ready */
#define SYSCTL_PRGPIO_R6            0x00000040                                                      /*  GPIO Port G Peripheral Ready */
#define SYSCTL_PRGPIO_R5            0x00000020                                                      /*  GPIO Port F Peripheral Ready */
#define SYSCTL_PRGPIO_R4            0x00000010                                                      /*  GPIO Port E Peripheral Ready */
#define SYSCTL_PRGPIO_R3            0x00000008                                                      /*  GPIO Port D Peripheral Ready */
#define SYSCTL_PRGPIO_R2            0x00000004                                                      /*  GPIO Port C Peripheral Ready */
#define SYSCTL_PRGPIO_R1            0x00000002                                                      /*  GPIO Port B Peripheral Ready */
#define SYSCTL_PRGPIO_R0            0x00000001                                                      /*  GPIO Port A Peripheral Ready */

    /** Bit fields in the SYSCTL_PRDMA register                                                         pp.502 */
#define SYSCTL_PRDMA_R0             0x00000001                                                      /*  uDMA Module Peripheral Ready */

    /** Bit fields in the SYSCTL_PREPI register                                                         pp.503 */
#define SYSCTL_PREPI_R0             0x00000001                                                      /*  EPI Module Peripheral Ready */

    /** Bit fields in the SYSCTL_PRHIB register                                                         pp.504 */
#define SYSCTL_PRHIB_R0             0x00000001                                                      /*  Hibernation Module Peripheral Ready */

    /** Bit fields in the SYSCTL_PRUART register                                                        pp.505 */
#define SYSCTL_PRUART_R7            0x00000080                                                      /*  UART Module 7 Peripheral Ready */
#define SYSCTL_PRUART_R6            0x00000040                                                      /*  UART Module 6 Peripheral Ready */
#define SYSCTL_PRUART_R5            0x00000020                                                      /*  UART Module 5 Peripheral Ready */
#define SYSCTL_PRUART_R4            0x00000010                                                      /*  UART Module 4 Peripheral Ready */
#define SYSCTL_PRUART_R3            0x00000008                                                      /*  UART Module 3 Peripheral Ready */
#define SYSCTL_PRUART_R2            0x00000004                                                      /*  UART Module 2 Peripheral Ready */
#define SYSCTL_PRUART_R1            0x00000002                                                      /*  UART Module 1 Peripheral Ready */
#define SYSCTL_PRUART_R0            0x00000001                                                      /*  UART Module 0 Peripheral Ready */

    /** Bit fields in the SYSCTL_PRSSI register                                                         pp.507 */
#define SYSCTL_PRSSI_R3             0x00000008                                                      /*  SSI Module 3 Peripheral Ready */
#define SYSCTL_PRSSI_R2             0x00000004                                                      /*  SSI Module 2 Peripheral Ready */
#define SYSCTL_PRSSI_R1             0x00000002                                                      /*  SSI Module 1 Peripheral Ready */
#define SYSCTL_PRSSI_R0             0x00000001                                                      /*  SSI Module 0 Peripheral Ready */

    /** Bit fields in the SYSCTL_PRI2C register                                                         pp.509 */
#define SYSCTL_PRI2C_R9             0x00000200                                                      /*  I2C Module 9 Peripheral Ready */
#define SYSCTL_PRI2C_R8             0x00000100                                                      /*  I2C Module 8 Peripheral Ready */
#define SYSCTL_PRI2C_R7             0x00000080                                                      /*  I2C Module 7 Peripheral Ready */
#define SYSCTL_PRI2C_R6             0x00000040                                                      /*  I2C Module 6 Peripheral Ready */
#define SYSCTL_PRI2C_R5             0x00000020                                                      /*  I2C Module 5 Peripheral Ready */
#define SYSCTL_PRI2C_R4             0x00000010                                                      /*  I2C Module 4 Peripheral Ready */
#define SYSCTL_PRI2C_R3             0x00000008                                                      /*  I2C Module 3 Peripheral Ready */
#define SYSCTL_PRI2C_R2             0x00000004                                                      /*  I2C Module 2 Peripheral Ready */
#define SYSCTL_PRI2C_R1             0x00000002                                                      /*  I2C Module 1 Peripheral Ready */
#define SYSCTL_PRI2C_R0             0x00000001                                                      /*  I2C Module 0 Peripheral Ready */

    /** Bit fields in the SYSCTL_PRUSB register                                                         pp.512 */
#define SYSCTL_PRUSB_R0             0x00000001                                                      /*  USB Module Peripheral Ready */

    /** Bit fields in the SYSCTL_PREPHY register                                                        pp.513 */
#define SYSCTL_PREPHY_R0            0x00000001                                                      /*  Ethernet PHY Module Peripheral Ready */

    /** Bit fields in the SYSCTL_PRCAN register                                                         pp.514 */
#define SYSCTL_PRCAN_R1             0x00000002                                                      /*  CAN Module 1 Peripheral Ready */
#define SYSCTL_PRCAN_R0             0x00000001                                                      /*  CAN Module 0 Peripheral Ready */

    /** Bit fields in the SYSCTL_PRADC register                                                         pp.515 */
#define SYSCTL_PRADC_R1             0x00000002                                                      /*  ADC Module 1 Peripheral Ready */
#define SYSCTL_PRADC_R0             0x00000001                                                      /*  ADC Module 0 Peripheral Ready */

    /** Bit fields in the SYSCTL_PRACMP register                                                        pp.516 */
#define SYSCTL_PRACMP_R0            0x00000001                                                      /*  Analog Comparator Module 0 Peripheral Ready */

    /** Bit fields in the SYSCTL_PRPWM register                                                         pp.517 */
#define SYSCTL_PRPWM_R0             0x00000001                                                      /*  PWM Module 0 Peripheral Ready */

    /** Bit fields in the SYSCTL_PRQEI register                                                         pp.518 */
#define SYSCTL_PRQEI_R0             0x00000001                                                      /*  QEI Module 0 Peripheral Ready */

    /** Bit fields in the SYSCTL_PREEPROM register                                                      pp.519 */
#define SYSCTL_PREEPROM_R0          0x00000001                                                      /*  EEPROM Module Peripheral Ready */

    /** Bit fields in the SYSCTL_PRCCM register                                                         pp.520 */
#define SYSCTL_PRCCM_R0             0x00000001                                                      /*  CRC and Cryptographic Modules Peripheral Ready */

    /** Bit fields in the SYSCTL_PREMAC register                                                        pp.521 */
#define SYSCTL_PREMAC_R0            0x00000001                                                      /*  Ethernet MAC Module 0 Peripheral Ready */


/**************************************************************************************************
 *  Prototipos de funciones
 */


#endif                                                                                              /*  SYSCTL_H */
