/*****************************************************************************************
                                PIC16F193x位定义文件                                  

*****************************************************************************************/
#ifndef __PIC16F193X_BIT_H
#define __PIC16F193X_BIT_H

//PICB = PIC+BIT
// Register: STATUS
#define  PICB_CARRY             0x01
#define  PICB_DC                0x02
#define  PICB_ZERO              0x04
#define  PICB_nPD               0x08
#define  PICB_nTO               0x10

// Register: BSR
#define  PICB_BSR0              0x01
#define  PICB_BSR1              0x02
#define  PICB_BSR2              0x04
#define  PICB_BSR3              0x08
#define  PICB_BSR4              0x10

// Register: INTCON
// bit and bitfield definitions
#define  PICB_IOCIF             0x01
#define  PICB_INTF              0x02
#define  PICB_TMR0IF            0x04
#define  PICB_IOCIE             0x08
#define  PICB_INTE              0x10
#define  PICB_TMR0IE            0x20  
#define  PICB_PEIE              0x40
#define  PICB_GIE               0x80
#define  PICB_T0IF              0x04
#define  PICB_T0IE               

// Register: PORTA
#define  PICB_RA0               0x01
#define  PICB_RA1               0x02
#define  PICB_RA2               0x04
#define  PICB_RA3               0x08
#define  PICB_RA4               0x10
#define  PICB_RA5               0x20
#define  PICB_RA6               0x40
#define  PICB_RA7               0x80

// Register: PORTB
#define  PICB_RB0             0x01
#define  PICB_RB1             0x02
#define  PICB_RB2             0x04
#define  PICB_RB3             0x08
#define  PICB_RB4             0x10
#define  PICB_RB5             0x20
#define  PICB_RB6             0x40
#define  PICB_RB7             0x80

// Register: PORTC
#define  PICB_RC0                   0x01
#define  PICB_RC1                   0x02
#define  PICB_RC2                   0x04
#define  PICB_RC3                   0x08
#define  PICB_RC4                   0x10
#define  PICB_RC5                   0x20
#define  PICB_RC6                   0x40
#define  PICB_RC7                   0x80
// Register: PORTE
#define  PICB_RE3                   0x08

// Register: PIR1
// TMR1 Overflow Interrupt Flag bit
#define  PICB_TMR1IF                0x01
// TMR2 to PR2 Match Interrupt Flag bit
#define  PICB_TMR2IF                0x02
// CCP1 Interrupt Flag bit
#define  PICB_CCP1IF                0x04
// Master Synchronous Serial Port (MSSP) Interrupt Flag bit
#define  PICB_SSPIF                 0x08
// EUSART Transmit Interrupt Flag bit
#define  PICB_TXIF                  0x10
// EUSART Receive Interrupt Flag bit
#define  PICB_RCIF                  0x20
// /D Converter Interrupt Flag bit
#define  PICB_ADIF                  0x40
// Timer1 Gate Interrupt Flag bit
#define  PICB_TMR1GIF               0x80

// Register: PIR2
#define  PICB_CCP2IF                0x01
#define  PICB_LCDIF                 0x04
#define  PICB_BCLIF                 0x08
#define  PICB_EEIF                  0x10
#define  PICB_C1IF                  0x20
#define  PICB_C2IF                  0x40
#define  PICB_OSFIF                 0x80

// Register: PIR3
#define  PICB_TMR4IF                0x02
#define  PICB_TMR6IF                0x08
#define  PICB_CCP3IF                0x10
#define  PICB_CCP4IF                0x20
#define  PICB_CCP5IF                0x40

// Register: T1CON
#define  PICB_TMR1ON                0x01
#define  PICB_nT1SYNC               0x04
#define  PICB_T1OSCEN               0x08
#define  PICB_T1CKPS0               0x10
#define  PICB_T1CKPS1               0x20
#define  PICB_TMR1CS0               0x40
#define  PICB_TMR1CS1               0x80

// Register: T1GCON
#define  PICB_T1GSS0                0x01
#define  PICB_T1GSS1                0x02
#define  PICB_T1GVAL                0x04
#define  PICB_T1GGO_nDONE           0x08
#define  PICB_T1GSPM                0x10
#define  PICB_T1GTM                 0x20
#define  PICB_T1GPOL                0x40
#define  PICB_TMR1GE                0x80
#define  PICB_T1GGO                 0x08

// Register: T2CON
#define  PICB_T2CKPS0               0x01
#define  PICB_T2CKPS1               0x02
#define  PICB_TMR2ON                0x04
#define  PICB_T2OUTPS0              0x08
#define  PICB_T2OUTPS1              0x10
#define  PICB_T2OUTPS2              0x20
#define  PICB_T2OUTPS3              0x40

// Register: CPSCON0
#define  PICB_T0XCS                 0x01
#define  PICB_CPSOUT                0x02
#define  PICB_CPSRNG0               0x04
#define  PICB_CPSRNG1               0x08
#define  PICB_CPSON                 0x80

// Register: CPSCON1
#define  PICB_CPSCH0                0x01
#define  PICB_CPSCH1                0x02
#define  PICB_CPSCH2                0x04

// Register: TRISA
// PORTA Data Direction Control Register
#define  PICB_TRISA0                0x01
#define  PICB_TRISA1                0x02
#define  PICB_TRISA2                0x04
#define  PICB_TRISA3                0x08
#define  PICB_TRISA4                0x10
#define  PICB_TRISA5                0x20
#define  PICB_TRISA6                0x40
#define  PICB_TRISA7                0x80

// Register: TRISB
// bit and bitfield definitions
#define  PICB_TRISB0               0x01
#define  PICB_TRISB1               0x02
#define  PICB_TRISB2               0x04
#define  PICB_TRISB3               0x08
#define  PICB_TRISB4               0x10
#define  PICB_TRISB5               0x20
#define  PICB_TRISB6               0x40
#define  PICB_TRISB7               0x80

// Register: TRISC
// PORTC Data Direction Control Register
#define  PICB_TRISC0                0x01
#define  PICB_TRISC1                0x02
#define  PICB_TRISC2                0x04
#define  PICB_TRISC3                0x08
#define  PICB_TRISC4                0x10
#define  PICB_TRISC5                0x20
#define  PICB_TRISC6                0x40
#define  PICB_TRISC7                0x80

// Register: TRISE
#define  PICB_TRISE3                0x08

// Register: PIE1
// bit and bitfield definitions
// TMR1 Overflow Interrupt Enable bit
#define  PICB_TMR1IE                0x01
// TMR2 to PR2 Match Interrupt Enable bit
#define  PICB_TMR2IE                0x02
// CCP1 Interrupt Enable bit
#define  PICB_CCP1IE                0x04
// Master Synchronous Serial Port (MSSP) Interrupt Enable bit
#define  PICB_SSPIE                 0x08
// EUSART Transmit Interrupt Enable bit
#define  PICB_TXIE                  0x10
// EUSART Receive Interrupt Enable bit
#define  PICB_RCIE                  0x20
// /D Converter Interrupt Enable bit
#define  PICB_ADIE                  0x40
// Timer1 Gate Interrupt Enable bit
#define  PICB_TMR1GIE               0x80


// Register: PIE2
// bit and bitfield definitions
// CCP2 Interrupt Enable bit
#define  PICB_CCP2IE                0x01
// LCD Module Interrupt Enable bit
#define  PICB_LCDIE                 0x04
// MSSP Bus Collision Interrupt Interrupt Enable bit
#define  PICB_BCLIE                 0x08
// EEPROM Write Completion Interrupt Enable bit
#define  PICB_EEIE                  0x10
// Comparator C1 Interrupt Enable bit
#define  PICB_C1IE                  0x20
// Comparator C2 Interrupt Enable bit
#define  PICB_C2IE                  0x40
// CCP2 Interrupt Enable bit
#define  PICB_OSFIE                 0x80

// Register: PIE3
// bit and bitfield definitions
// TMR4 to PR4 Match Interrupt Enable bit
#define  PICB_TMR4IE                0x02
// TMR6 to PR6 Match Interrupt Enable bit
#define  PICB_TMR6IE                0x08
// CCP3 Interrupt Enable bit
#define  PICB_CCP3IE                0x10
// CCP4 Interrupt Enable bit
#define  PICB_CCP4IE                0x20
// CCP5 Interrupt Enable bit
#define  PICB_CCP5IE                0x40

// Register: OPTION_REG
// Option Register
// Prescaler Rate Select bits
#define  PICB_PS0                   0x01
// Prescaler Rate Select bits
#define  PICB_PS1                   0x02
// Prescaler Rate Select bits
#define  PICB_PS2                   0x04
// Prescaler Active bit
#define  PICB_PSA                   0x08
// TMR0 Source Edge Select bit
#define  PICB_TMR0SE                0x10
// TMR0 Clock Source Select bit
#define  PICB_TMR0CS                0x20
// Interrupt Edge Select bit
#define  PICB_INTEDG                0x40
// Weak Pull-up Enable bit
#define  PICB_nWPUEN                0x80
#define  PICB_T0SE                  0x10
#define  PICB_T0CS                  

// Register: PCON
// bit and bitfield definitions
// Brown-out Reset Status bit
#define  PICB_nBOR                  0x01
// Power-on Reset Status bit
#define  PICB_nPOR                  0x02
// RESET Instruction Flag bit
#define  PICB_nRI                   0x04
// MCLR Reset Flag bit
#define  PICB_nRMCLR                0x08
// Stack Underflow Flag bit
#define  PICB_STKUNF                0x40
// Stack Overflow Flag bit
#define  PICB_STKOVF                0x80

// Register: WDTCON
// Watchdog Timer Control Register
// Software Enable/Disable for Watch Dog Timer bit
#define  PICB_SWDTEN                0x01
// Watchdog Timer Period Select bits
#define  PICB_WDTPS0                0x02
// Watchdog Timer Period Select bits
#define  PICB_WDTPS1                0x04
// Watchdog Timer Period Select bits
#define  PICB_WDTPS2                0x08
// Watchdog Timer Period Select bits
#define  PICB_WDTPS3                0x10
// Watchdog Timer Period Select bits
#define  PICB_WDTPS4                

// Register: OSCTUNE
// bit and bitfield definitions
// Frequency Tuning bits
#define  PICB_TUN0                  0x01
// Frequency Tuning bits
#define  PICB_TUN1                  0x02
// Frequency Tuning bits
#define  PICB_TUN2                  0x04
// Frequency Tuning bits
#define  PICB_TUN3                  0x08
// Frequency Tuning bits
#define  PICB_TUN4                  0x10
// Frequency Tuning bits
#define  PICB_TUN5                  

// Register: OSCCON
// bit and bitfield definitions
// System clock select bit
#define  PICB_SCS0                  0x01
// System clock select bit
#define  PICB_SCS1                  0x02
// Internal Oscillator Frequency Select bits
#define  PICB_IRCF0                 0x08
// Internal Oscillator Frequency Select bits
#define  PICB_IRCF1                 0x10
// Internal Oscillator Frequency Select bits
#define  PICB_IRCF2                 0x20
// Internal Oscillator Frequency Select bits
#define  PICB_IRCF3                 0x40
// Software PLL Enable bit
#define  PICB_SPLLEN                0x80

// Register: OSCSTAT
// Oscillator Status Register
// bit and bitfield definitions
// Low Freqency Internal Oscillator Ready bit
#define  PICB_HFIOFS                0x01
// Low Freqency Internal Oscillator Ready bit
#define  PICB_LFIOFR                0x02
// Medium Freqency Internal Oscillator Ready bit
#define  PICB_MFIOFR                0x04
// High Freqency Internal Oscillator Status Locked bit
#define  PICB_HFIOFL                0x08
// High Freqency Internal Oscillator Ready bit
#define  PICB_HFIOFR                0x10
// Oscillator Start-up Time-out Status bit
#define  PICB_OSTS                  0x20
// 4x PLL Ready bit
#define  PICB_PLLR                  0x40
// Timer1 Oscillator Ready bit
#define  PICB_T1OSCR                0x80

// bit and bitfield definitions
// /D Module Enable bit
#define  PICB_ADON                  0x01
// /D Conversion Status bit
#define  PICB_GO_nDONE              0x02
// Analog Channel Select bits
#define  PICB_CHS0                  0x04
// Analog Channel Select bits
#define  PICB_CHS1                  0x08
// Analog Channel Select bits
#define  PICB_CHS2                  0x10
// Analog Channel Select bits
#define  PICB_CHS3                  
// Analog Channel Select bits
#define  PICB_CHS4                  0x40
// /D Conversion Status bit
#define  PICB_ADGO                  0x02
// /D Conversion Status bit
#define  PICB_GO                    0x02
// /D Conversion Status bit
#define  PICB_nDONE                 0x02

// Register: ADCON1
// Analog-to-Digital Control Register 1
// /D Positive Voltage Reference Configuration
#define  PICB_ADPREF0               0x01
// /D Positive Voltage Reference Configuration
#define  PICB_ADPREF1               0x02
// /D Negative Voltage Reference Configuration
#define  PICB_ADNREF                0x04
// /D Conversion Clock Select bits
#define  PICB_ADCS0                 0x10
// /D Conversion Clock Select bits
#define  PICB_ADCS1                 0x20
// /D Conversion Clock Select bits
#define  PICB_ADCS2                 0x40
// /D Result Format Select bit
#define  PICB_ADFM                  0x80

//
// Special function register definitions: Bank 2
//


// Register: LATA
#define  PICB_LATA0                 0x01
#define  PICB_LATA1                 0x02
#define  PICB_LATA2                 0x04
#define  PICB_LATA3                 0x08
#define  PICB_LATA4                 0x10
#define  PICB_LATA5                 0x20
#define  PICB_LATA6                 0x40
#define  PICB_LATA7                 0x80

// Register: LATB
#define  PICB_LATB0                 0x01
#define  PICB_LATB1                 0x02
#define  PICB_LATB2                 0x04
#define  PICB_LATB3                 0x08
#define  PICB_LATB4                 0x10
#define  PICB_LATB5                 0x20
#define  PICB_LATB6                 0x40
#define  PICB_LATB7                 0x80


// Register: LATC
#define  PICB_LATC0                 0x01
#define  PICB_LATC1                 0x02
#define  PICB_LATC2                 0x04
#define  PICB_LATC3                 0x08
#define  PICB_LATC4                 0x10
#define  PICB_LATC5                 0x20
#define  PICB_LATC6                 0x40
#define  PICB_LATC7                 0x80

// Register: LATE
#define  PICB_LATE3                 0x08

// Register: CM1CON0
// Comparator Output Synchronous Mode bit
#define  PICB_C1SYNC                0x01
// Comparator Hysteresis Enable bit
#define  PICB_C1HYS                 0x02
// Comparator Speed/Power Select bit
#define  PICB_C1SP                  0x04
// Comparator Output Polarity Select bit
#define  PICB_C1POL                 0x10
// Comparator Output Enable bit
#define  PICB_C1OE                  0x20
// Comparator Output bit
#define  PICB_C1OUT                 0x40
// Comparator Enable bit
#define  PICB_C1ON                  0x80

// Register: CM1CON1
// bit and bitfield definitions
// Comparator Negative Input Channel Select bits
#define  PICB_C1NCH0                0x01
// Comparator Negative Input Channel Select bits
#define  PICB_C1NCH1                0x02
// Comparator Positive Input Channel Select bits
#define  PICB_C1PCH0                0x10
// Comparator Positive Input Channel Select bits
#define  PICB_C1PCH1                0x20
// Comparator Interrupt on Negative going edge Enable bits
#define  PICB_C1INTN                0x40
// Comparator Interrupt on Positive going edge Enable bits
#define  PICB_C1INTP                0x80

// Register: CM2CON0
#define  PICB_C2SYNC                0x01
#define  PICB_C2HYS                 0x02
#define  PICB_C2SP                  0x04
#define  PICB_C2POL                 0x10
#define  PICB_C2OE                  0x20
#define  PICB_C2OUT                 0x40
#define  PICB_C2ON                  0x80

// Register: CM2CON1
// Comparator Negative Input Channel Select bits
#define  PICB_C2NCH0                0x01
// Comparator Negative Input Channel Select bits
#define  PICB_C2NCH1                0x02
// Comparator Positive Input Channel Select bits
#define  PICB_C2PCH0                0x10
// Comparator Positive Input Channel Select bits
#define  PICB_C2PCH1                0x20
// Comparator Interrupt on Negative going edge Enable bits
#define  PICB_C2INTN                0x40
// Comparator Interrupt on Positive going edge Enable bits
#define  PICB_C2INTP                0x80

// Register: CMOUT
// bit and bitfield definitions
#define  PICB_MC1OUT                0x01
#define  PICB_MC2OUT                0x02

// Register: BORCON
// Brown-out Reset Control Register
// Brown-out Reset Circuit Ready Status bit
#define  PICB_BORRDY                0x01
// Software Brown Out Reset Enable bit
#define  PICB_SBOREN                0x80

// Register: FVRCON
// Voltage Reference Control Register 0
// /D Converter Fixed Voltage Reference Selection
#define  PICB_ADFVR0                0x01
// /D Converter Fixed Voltage Reference Selection
#define  PICB_ADFVR1                0x02
// Comparator and D/ Converter Fixed Voltage Reference Selection
#define  PICB_CDAFVR0               0x04
// Comparator and D/ Converter Fixed Voltage Reference Selection
#define  PICB_CDAFVR1               0x08
// Temperature Indicator Range Selection
#define  PICB_TSRNG                 0x10
// Temperature Indicator Enable
#define  PICB_TSEN                  0x20
// Fixed Voltage Reference Ready Flag
#define  PICB_FVRRDY                0x40
// Fixed Voltage Reference Enable
#define  PICB_FVREN                 0x80

// Register: DACCON0
// Voltage Reference Control Register 1
// DAC1 Negative Source Select bits
#define  PICB_DACNSS                0x01
// DAC1 Positive Source Select bits
#define  PICB_DACPSS0               0x04
// DAC1 Positive Source Select bits
#define  PICB_DACPSS1               0x08
// DAC1 Voltage Output Enable bit
#define  PICB_DACOE                 0x20
// DAC 1 Low Power Voltage State Select bit
#define  PICB_DACLPS                0x40
// DAC 1 Enable bit
#define  PICB_DACEN                 0x80

// Register: DACCON1
// bit and bitfield definitions
// DAC1 Voltage Output Select bits
#define  PICB_DACR0                 0x01
// DAC1 Voltage Output Select bits
#define  PICB_DACR1                 0x02
// DAC1 Voltage Output Select bits
#define  PICB_DACR2                 0x04
// DAC1 Voltage Output Select bits
#define  PICB_DACR3                 0x08
// DAC1 Voltage Output Select bits
#define  PICB_DACR4                 0x10

// Register: SRCON0
// SR Latch Control Register 0
// Pulse Reset Input of the SR Latch
#define  PICB_SRPR                  0x01
// Pulse Set Input of the SR Latch
#define  PICB_SRPS                  0x02
// SR Latch Q Output Enable bit
#define  PICB_SRNQEN                0x04
// SR Latch Q Output Enable bit
#define  PICB_SRQEN                 0x08
// SR Latch Clock divider bits
#define  PICB_SRCLK0                0x10
// SR Latch Clock divider bits
#define  PICB_SRCLK1                0x20
// SR Latch Clock divider bits
#define  PICB_SRCLK2                0x40
// SR Latch Enable bit
#define  PICB_SRLEN                 0x80

// Register: SRCON1
// SR Latch Control Register 1
// SR Latch C1 Reset Enable bit
#define  PICB_SRRC1E                0x01
// SR Latch C2 Reset Enable bit
#define  PICB_SRRC2E                0x02
// SR Latch Reset Clock Enable bit
#define  PICB_SRRCKE                0x04
// SR Latch Peripheral Reset Enable bit
#define  PICB_SRRPE                 0x08
// SR Latch C1 Set Enable bit
#define  PICB_SRSC1E                0x10
// SR Latch C2 Set Enable bit
#define  PICB_SRSC2E                0x20
// SR Latch Set Clock Enable bit
#define  PICB_SRSCKE                0x40
// SR Latch Peripheral Set Enable bit
#define  PICB_SRSPE                 0x80

// Register: APFCON
// bit and bitfield definitions
// CCP2 Input/Output Pin Selection
//注：193x与194x位定义不同，下为193X的位定义
#define  PICB_CCP2SEL               0x01
// SS Input Pin Selection
#define  PICB_SSSEL                 0x02
// Comparator 2 Output Pin Selection
#define  PICB_C2OUTSEL              0x04
// SR Latch nQ Output Pin Selection
#define  PICB_SRNQSEL               0x08
// CCP2 PWM B Output Pin Selection
#define  PICB_P2BSEL                0x10
// Timer1 Gate Input Pin Selection
#define  PICB_T1GSEL                0x20
// CCP3 Input/Output Pin Selection
#define  PICB_CCP3SEL               0x40

//
// Special function register definitions: Bank 3
//


// Register: ANSELA
#define  PICB_ANSA0                 0x01
#define  PICB_ANSA1                 0x02
#define  PICB_ANSA2                 0x04
#define  PICB_ANSA3                 0x08
#define  PICB_ANSA4                 0x10
#define  PICB_ANSA5                 0x20

// Register: ANSELB
#define  PICB_ANSB0             0x01
#define  PICB_ANSB1             0x02
#define  PICB_ANSB2             0x04
#define  PICB_ANSB3             0x08
#define  PICB_ANSB4             0x10
#define  PICB_ANSB5             0x20

// Register: EECON1
// Read Control bit
#define  PICB_RD                    0x01
// Write Control bit
#define  PICB_WR                    0x02
// Program/Erase Enable bit
#define  PICB_WREN                  0x04
// Sequence Error Flag bit
#define  PICB_WRERR                 0x08
// Program FLASH Erase Enable bit
#define  PICB_FREE                  0x10
// Load Write Latches Only bit
#define  PICB_LWLO                  0x20
// FLASH Program / Data EEPROM or Configuration Select bit
#define  PICB_CFGS                  0x40
// FLASH Program / Data EEPROM Memory Select bit
#define  PICB_EEPGD                 0x80

// Register: RCSTA
// Receive Status and Control Register
// 9th bit of received data (can be parity bit)
#define  PICB_RX9D                  0x01
// Overrun Error bit
#define  PICB_OERR                  0x02
// Framing Error bit
#define  PICB_FERR                  0x04
// Address Detect Enable bit
#define  PICB_ADDEN                 0x08
// Continuous Receive Enable bit
#define  PICB_CREN                  0x10
// Single Receive Enable bit
#define  PICB_SREN                  0x20
// 9-bit Receive Enable bit
#define  PICB_RX9                   0x40
// Serial Port Enable bit
#define  PICB_SPEN                  0x80

// Register: TXSTA
// Transmit Status and Control Register
// 9th bit of transmit data can be used as parity bit
#define  PICB_TX9D                  0x01
// Transmit Operation Idle Status bit
#define  PICB_TRMT                  0x02
// High Baud Rate Select bit
#define  PICB_BRGH                  0x04
// Send BREAK character bit
#define  PICB_SENDB                 0x08
// USART Mode Select bit
#define  PICB_SYNC                  0x10
// Transmit Enable bit
#define  PICB_TXEN                  0x20
// 9-bit Transmit Enable bit
#define  PICB_TX9                   0x40
// Clock Source Select bit
#define  PICB_CSRC                  0x80

// Register: BAUDCON
// Baud Rate Control Register
// Auto-Baud Detect Enable bit
#define  PICB_ABDEN                 0x01
// Wake-Up Enable bit
#define  PICB_WUE                   0x02
// 16-bit Baud Rate Register enable bit
#define  PICB_BRG16                 0x08
// Clock/Transmit Polarity Select bit
#define  PICB_SCKP                  0x10
// Receive Operation Idle Status bit
#define  PICB_RCIDL                 0x40
// BRG Rollover Status bit
#define  PICB_ABDOVF                0x80

//
// Special function register definitions: Bank 4
//


// Register: WPUB
#define  PICB_WPUB0                 0x01
#define  PICB_WPUB1                 0x02
#define  PICB_WPUB2                 0x04
#define  PICB_WPUB3                 0x08
#define  PICB_WPUB4                 0x10
#define  PICB_WPUB5                 0x20
#define  PICB_WPUB6                 0x40
#define  PICB_WPUB7                 0x80

// Register: WPUE
#define  PICB_WPUE3                 0x08

// Register: SSPSTAT
#define  PICB_BF                    0x01
#define  PICB_UA                    0x02
#define  PICB_R_nW                  0x04
#define  PICB_S                     0x08
#define  PICB_P                     0x10
#define  PICB_D_nA                  0x20
#define  PICB_CKE                   0x40
#define  PICB_SMP                   0x80

// Register: SSPCON1
#define  PICB_SSPM0                 0x01
#define  PICB_SSPM1                 0x02
#define  PICB_SSPM2                 0x04
#define  PICB_SSPM3                 0x08
#define  PICB_CKP                   0x10
#define  PICB_SSPEN                 0x20
#define  PICB_SSPOV                 0x40
#define  PICB_WCOL                  0x80

// Register: SSPCON2
#define  PICB_SEN                   0x01
#define  PICB_RSEN                  0x02
#define  PICB_PEN                   0x04
#define  PICB_RCEN                  0x08
#define  PICB_ACKEN                 0x10
#define  PICB_ACKDT                 0x20
#define  PICB_ACKSTAT               0x40
#define  PICB_GCEN                  0x80


// Register: SSPCON3
#define  PICB_DHEN                  0x01
#define  PICB_AHEN                  0x02
#define  PICB_SBCDE                 0x04
#define  PICB_SDAHT                 0x08
#define  PICB_BOEN                  0x10
#define  PICB_SCIE                  0x20
#define  PICB_PCIE                  0x40
#define  PICB_ACKTIM                0x80

//
// Special function register definitions: Bank 5
//

#define  PICB_CCP1M0                0x01
#define  PICB_CCP1M1                0x02
#define  PICB_CCP1M2                0x04
#define  PICB_CCP1M3                0x08
#define  PICB_DC1B0                 0x10
#define  PICB_DC1B1                 0x20
#define  PICB_P1M0                  0x40
#define  PICB_P1M1                  0x80

// Register: PWM1CON
#define  PICB_P1DC0                 0x01
#define  PICB_P1DC1                 0x02
#define  PICB_P1DC2                 0x04
#define  PICB_P1DC3                 0x08
#define  PICB_P1DC4                 0x10
#define  PICB_P1DC5                 0x20
#define  PICB_P1DC6                 0x40
#define  PICB_P1RSEN                0x80

// Register: CCP1AS
#define  PICB_PSS1BD0               0x01
#define  PICB_PSS1BD1               0x02
#define  PICB_PSS1AC0               0x04
#define  PICB_PSS1AC1               0x08
#define  PICB_CCP1AS0               0x10
#define  PICB_CCP1AS1               0x20
#define  PICB_CCP1AS2               0x40
#define  PICB_CCP1ASE               0x80

// Register: PSTR1CON
#define  PICB_STR1A                 0x01
#define  PICB_STR1B                 0x02
#define  PICB_STR1C                 0x04
#define  PICB_STR1D                 0x08
#define  PICB_STR1SYNC              0x10

// bit and bitfield definitions
#define  PICB_CCP2M0                0x01
#define  PICB_CCP2M1                0x02
#define  PICB_CCP2M2                0x04
#define  PICB_CCP2M3                0x08
#define  PICB_DC2B0                 0x10
#define  PICB_DC2B1                 0x20
#define  PICB_P2M0                  0x40
#define  PICB_P2M1                  0x80


// Register: PWM2CON
#define  PICB_P2DC0                 0x01
#define  PICB_P2DC1                 0x02
#define  PICB_P2DC2                 0x04
#define  PICB_P2DC3                 0x08
#define  PICB_P2DC4                 0x10
#define  PICB_P2DC5                 0x20
#define  PICB_P2DC6                 0x40
#define  PICB_P2RSEN                0x80


// Register: CCP2AS
#define  PICB_PSS2BD0               0x01
#define  PICB_PSS2BD1               0x02
#define  PICB_PSS2AC0               0x04
#define  PICB_PSS2AC1               0x08
#define  PICB_CCP2AS0               0x10
#define  PICB_CCP2AS1               0x20
#define  PICB_CCP2AS2               0x40
#define  PICB_CCP2ASE               0x80

// Register: PSTR2CON
#define  PICB_STR2A                 0x01
#define  PICB_STR2B                 0x02
#define  PICB_STR2C                 0x04
#define  PICB_STR2D                 0x08
#define  PICB_STR2SYNC              0x10


// Register: CCPTMRS0
#define  PICB_C1TSEL0               0x01
#define  PICB_C1TSEL1               0x02
#define  PICB_C2TSEL0               0x04
#define  PICB_C2TSEL1               0x08
#define  PICB_C3TSEL0               0x10
#define  PICB_C3TSEL1               0x20
#define  PICB_C4TSEL0               0x40
#define  PICB_C4TSEL1               0x80


// Register: CCPTMRS1
#define  PICB_C5TSEL0               0x01
#define  PICB_C5TSEL1               0x02

//
// Special function register definitions: Bank 6
//

// Register: CCP3CON
#define  PICB_CCP3M0                0x01
#define  PICB_CCP3M1                0x02
#define  PICB_CCP3M2                0x04
#define  PICB_CCP3M3                0x08
#define  PICB_DC3B0                 0x10
#define  PICB_DC3B1                 0x20
#define  PICB_P3M0                  0x40
#define  PICB_P3M1                  0x80

// Register: PWM3CON
#define  PICB_P3DC0                 0x01
#define  PICB_P3DC1                 0x02
#define  PICB_P3DC2                 0x04
#define  PICB_P3DC3                 0x08
#define  PICB_P3DC4                 0x10
#define  PICB_P3DC5                 0x20
#define  PICB_P3DC6                 0x40
#define  PICB_P3RSEN                0x80

// Register: CCP3AS
#define  PICB_PSS3BD0               0x01
#define  PICB_PSS3BD1               0x02
#define  PICB_PSS3AC0               0x04
#define  PICB_PSS3AC1               0x08
#define  PICB_CCP3AS0               0x10
#define  PICB_CCP3AS1               0x20
#define  PICB_CCP3AS2               0x40
#define  PICB_CCP3ASE               0x80

// Register: PSTR3CON
#define  PICB_STR3A                 0x01
#define  PICB_STR3B                 0x02
#define  PICB_STR3C                 0x04
#define  PICB_STR3D                 0x08
#define  PICB_STR3SYNC              0x10

// Register: CCP4CON
#define  PICB_CCP4M0                0x01
#define  PICB_CCP4M1                0x02
#define  PICB_CCP4M2                0x04
#define  PICB_CCP4M3                0x08
#define  PICB_DC4B0                 0x10
#define  PICB_DC4B1                 0x20

// Register: CCP5CON
#define  PICB_CCP5M0                0x01
#define  PICB_CCP5M1                0x02
#define  PICB_CCP5M2                0x04
#define  PICB_CCP5M3                0x08
#define  PICB_DC5B0                 0x10
#define  PICB_DC5B1                 0x20

//
// Special function register definitions: Bank 7
//


// Register: IOCBP
// Interrupt-On-Change Positive Edge Register
#define  PICB_IOCBP0                0x01
#define  PICB_IOCBP1                0x02
#define  PICB_IOCBP2                0x04
#define  PICB_IOCBP3                0x08
#define  PICB_IOCBP4                0x10
#define  PICB_IOCBP5                0x20
#define  PICB_IOCBP6                0x40
#define  PICB_IOCBP7                0x80

// Register: IOCBN
// Interrupt-On-Change Negative Edge Register
#define  PICB_IOCBN0                0x01
#define  PICB_IOCBN1                0x02
#define  PICB_IOCBN2                0x04
#define  PICB_IOCBN3                0x08
#define  PICB_IOCBN4                0x10
#define  PICB_IOCBN5                0x20
#define  PICB_IOCBN6                0x40
#define  PICB_IOCBN7                0x80

// Register: IOCBF
// Interrupt-On-Change Flag Register
#define  PICB_IOCBF0                0x01
#define  PICB_IOCBF1                0x02
#define  PICB_IOCBF2                0x04
#define  PICB_IOCBF3                0x08
#define  PICB_IOCBF4                0x10
#define  PICB_IOCBF5                0x20
#define  PICB_IOCBF6                0x40
#define  PICB_IOCBF7                0x80
//
// Special function register definitions: Bank 8
//

// bit and bitfield definitions
// Timer2 Clock Prescale Select bits
#define  PICB_T4CKPS0               0x01
// Timer2 Clock Prescale Select bits
#define  PICB_T4CKPS1               0x02
// Timer2 On bit
#define  PICB_TMR4ON                0x04
// Timer2 Output Postscaler Select bits
#define  PICB_T4OUTPS0              0x08
// Timer2 Output Postscaler Select bits
#define  PICB_T4OUTPS1              0x10
// Timer2 Output Postscaler Select bits
#define  PICB_T4OUTPS2              0x20
// Timer2 Output Postscaler Select bits
#define  PICB_T4OUTPS3              0x40

// Register: T6CON
// Timer2 Control Register
// Timer2 Clock Prescale Select bits
#define  PICB_T6CKPS0               0x01
// Timer2 Clock Prescale Select bits
#define  PICB_T6CKPS1               0x02
// Timer2 On bit
#define  PICB_TMR6ON                0x04
// Timer2 Output Postscaler Select bits
#define  PICB_T6OUTPS0              0x08
// Timer2 Output Postscaler Select bits
#define  PICB_T6OUTPS1              0x10
// Timer2 Output Postscaler Select bits
#define  PICB_T6OUTPS2              0x20
// Timer2 Output Postscaler Select bits
#define  PICB_T6OUTPS3              0x40

//
// Special function register definitions: Bank 15
//


// Register: LCDCON（LCD模块控制寄存器）
// LCD Control Register
// Commons Selection bits
#define  PICB_LMUX0                 0x01
// Commons Selection bits
#define  PICB_LMUX1                 0x02
// Clock Source bits
#define  PICB_CS0                   0x04
// Clock Source bits
#define  PICB_CS1                   0x08
// Write Failed Error bit
#define  PICB_WERR                  0x20
// LCD Display Sleep-Enabled bit
#define  PICB_SLPEN                 0x40
// LCD Module Enable bit
#define  PICB_LCDEN                 0x80

// Register: LCDPS（LCD模块时钟源配置寄存器）
// bit and bitfield definitions
// LCD Prescaler Selection bits
#define  PICB_LP0                   0x01
// LCD Prescaler Selection bits
#define  PICB_LP1                   0x02
// LCD Prescaler Selection bits
#define  PICB_LP2                   0x04
// LCD Prescaler Selection bits
#define  PICB_LP3                   0x08
// Write Allow bit
#define  PICB_WA                    0x10
// LCD Active bit
#define  PICB_LCDA                  0x20
// Bias Mode Selection bit
#define  PICB_BIASMD                0x40
// Waveform Type bit
#define  PICB_WFT                   0x80


// Register: LCDREF（LCD模块参考电压控制寄存器）
// bit and bitfield definitions
// VLCD1 pin enable bit
#define  PICB_VLCD1PE               0x02
// VLCD2 pin enable bit
#define  PICB_VLCD2PE               0x04
// VLCD3 pin enable bit
#define  PICB_VLCD3PE               0x08
// LCD Internal Reference Ladder Idle Enable bit
#define  PICB_LCDIRI                0x20
// LCD Internal Reference Source bit
#define  PICB_LCDIRS                0x40
// LCD Internal Reference Enable bit
#define  PICB_LCDIRE                0x80

// Register: LCDCST（LCD模块对比度控制寄存器）
// LCD Contrast Control Register
// LCD Contrast Control bits
#define  PICB_LCDCST0               0x01
// LCD Contrast Control bits
#define  PICB_LCDCST1               0x02
// LCD Contrast Control bits
#define  PICB_LCDCST2               0x04

// Register: LCDRL（LCD模块参考电压梯形电阻网络控制寄存器）
// LCD Reference Voltage Control Register
// LCD Reference Ladder  Time interval control bits
#define  PICB_LRLAT0                0x01
// LCD Reference Ladder  Time interval control bits
#define  PICB_LRLAT1                0x02
// LCD Reference Ladder  Time interval control bits
#define  PICB_LRLAT2                0x04
// LCD Reference Ladder B Time Power Control bits
#define  PICB_LRLBP0                0x10
// LCD Reference Ladder B Time Power Control bits
#define  PICB_LRLBP1                0x20
// LCD Reference Ladder  Time Power Control bits
#define  PICB_LRLAP0                0x40
// LCD Reference Ladder  Time Power Control bits
#define  PICB_LRLAP1                0x80

//LCDSEN(n= 0、1、2、3、4、5)：LCD 段使能寄存器
// Register: LCDSE0
#define  PICB_SE0                   0x01
#define  PICB_SE1                   0x02
#define  PICB_SE2                   0x04
#define  PICB_SE3                   0x08
#define  PICB_SE4                   0x10
#define  PICB_SE5                   0x20
#define  PICB_SE6                   0x40
#define  PICB_SE7                   0x80

// Register: LCDSE1
#define  PICB_SE8                   0x01
#define  PICB_SE9                   0x02
#define  PICB_SE10                  0x04
#define  PICB_SE11                  0x08
#define  PICB_SE12                  0x10
#define  PICB_SE13                  0x20
#define  PICB_SE14                  0x40
#define  PICB_SE15                  0x80

// Register: LCDSE2（PIC1947新增加的）
#define  PICB_SE16                  0x01
#define  PICB_SE17                  0x02
#define  PICB_SE18                  0x04
#define  PICB_SE19                  0x08
#define  PICB_SE20                  0x10
#define  PICB_SE21                  0x20
#define  PICB_SE22                  0x40
#define  PICB_SE23                  0x80

// Register: LCDSE3（PIC1947新增加的）
#define  PICB_SE24                  0x01
#define  PICB_SE25                  0x02
#define  PICB_SE26                  0x04
#define  PICB_SE27                  0x08
#define  PICB_SE28                  0x10
#define  PICB_SE29                  0x20
#define  PICB_SE30                  0x40
#define  PICB_SE31                  0x80

// Register: LCDSE4（PIC1947新增加的）
#define  PICB_SE32                  0x01
#define  PICB_SE33                  0x02
#define  PICB_SE34                  0x04
#define  PICB_SE35                  0x08
#define  PICB_SE36                  0x10
#define  PICB_SE37                  0x20
#define  PICB_SE38                  0x40
#define  PICB_SE39                  0x80

// Register: LCDSE5（PIC1947新增加的）
#define  PICB_SE40                  0x01
#define  PICB_SE41                  0x02
#define  PICB_SE42                  0x04
#define  PICB_SE43                  0x08
#define  PICB_SE44                  0x10
#define  PICB_SE45                  0x20

//LCDDATAn : LCD 数据寄存器
// Register: LCDDATA0
#define  PICB_SEG0COM0              0x01
#define  PICB_SEG1COM0              0x02
#define  PICB_SEG2COM0              0x04
#define  PICB_SEG3COM0              0x08
#define  PICB_SEG4COM0              0x10
#define  PICB_SEG5COM0              0x20
#define  PICB_SEG6COM0              0x40
#define  PICB_SEG7COM0              0x80

// Register: LCDDATA1
#define  PICB_SEG8COM0              0x01
#define  PICB_SEG9COM0              0x02
#define  PICB_SEG10COM0             0x04
#define  PICB_SEG11COM0             0x08
#define  PICB_SEG12COM0             0x10
#define  PICB_SEG13COM0             0x20
#define  PICB_SEG14COM0             0x40
#define  PICB_SEG15COM0             0x80

// Register: LCDDATA2（PIC1947新增加的）
#define  PICB_SEG16COM0             0x01
#define  PICB_SEG17COM0             0x02
#define  PICB_SEG18COM0             0x04
#define  PICB_SEG19COM0             0x08
#define  PICB_SEG20COM0             0x10
#define  PICB_SEG21COM0             0x20
#define  PICB_SEG22COM0             0x40
#define  PICB_SEG23COM0             0x80

// Register: LCDDATA3
#define  PICB_SEG0COM1              0x01
#define  PICB_SEG1COM1              0x02
#define  PICB_SEG2COM1              0x04
#define  PICB_SEG3COM1              0x08
#define  PICB_SEG4COM1              0x10
#define  PICB_SEG5COM1              0x20
#define  PICB_SEG6COM1              0x40
#define  PICB_SEG7COM1              0x80

// Register: LCDDATA4
#define  PICB_SEG8COM1              0x01
#define  PICB_SEG9COM1              0x02
#define  PICB_SEG10COM1             0x04
#define  PICB_SEG11COM1             0x08
#define  PICB_SEG12COM1             0x10
#define  PICB_SEG13COM1             0x20
#define  PICB_SEG14COM1             0x40
#define  PICB_SEG15COM1             0x80

// Register: LCDDATA5（PIC1947新增加的）
#define  PICB_SEG16COM1             0x01
#define  PICB_SEG17COM1             0x02
#define  PICB_SEG18COM1             0x04
#define  PICB_SEG19COM1             0x08
#define  PICB_SEG20COM1             0x10
#define  PICB_SEG21COM1             0x20
#define  PICB_SEG22COM1             0x40
#define  PICB_SEG23COM1             0x80

// Register: LCDDATA6
#define  PICB_SEG0COM2              0x01
#define  PICB_SEG1COM2              0x02
#define  PICB_SEG2COM2              0x04
#define  PICB_SEG3COM2              0x08
#define  PICB_SEG4COM2              0x10
#define  PICB_SEG5COM2              0x20
#define  PICB_SEG6COM2              0x40
#define  PICB_SEG7COM2              0x80

// Register: LCDDATA7
#define  PICB_SEG8COM2              0x01
#define  PICB_SEG9COM2              0x02
#define  PICB_SEG10COM2             0x04
#define  PICB_SEG11COM2             0x08
#define  PICB_SEG12COM2             0x10
#define  PICB_SEG13COM2             0x20
#define  PICB_SEG14COM2             0x40
#define  PICB_SEG15COM2             0x80


// Register: LCDDATA8（PIC1947新增加的）
#define  PICB_SEG16COM2             0x01
#define  PICB_SEG17COM2             0x02
#define  PICB_SEG18COM2             0x04
#define  PICB_SEG19COM2             0x08
#define  PICB_SEG20COM2             0x10
#define  PICB_SEG21COM2             0x20
#define  PICB_SEG22COM2             0x40
#define  PICB_SEG23COM2             0x80

// Register: LCDDATA9
#define  PICB_SEG0COM3              0x01
#define  PICB_SEG1COM3              0x02
#define  PICB_SEG2COM3              0x04
#define  PICB_SEG3COM3              0x08
#define  PICB_SEG4COM3              0x10
#define  PICB_SEG5COM3              0x20
#define  PICB_SEG6COM3              0x40
#define  PICB_SEG7COM3              0x80

// Register: LCDDATA10
#define  PICB_SEG8COM3              0x01
#define  PICB_SEG9COM3              0x02
#define  PICB_SEG10COM3             0x04
#define  PICB_SEG11COM3             0x08
#define  PICB_SEG12COM3             0x10
#define  PICB_SEG13COM3             0x20
#define  PICB_SEG14COM3             0x40
#define  PICB_SEG15COM3             0x80

// Register: LCDDATA11（PIC1947新增加的）
#define  PICB_SEG16COM3             0x01
#define  PICB_SEG17COM3             0x02
#define  PICB_SEG18COM3             0x04
#define  PICB_SEG19COM3             0x08
#define  PICB_SEG20COM3             0x10
#define  PICB_SEG21COM3             0x20
#define  PICB_SEG22COM3             0x40
#define  PICB_SEG23COM3             0x80

// Register: LCDDATA12（PIC1947新增加的）
#define  PICB_SEG24COM0             0x01
#define  PICB_SEG25COM0             0x02
#define  PICB_SEG26COM0             0x04
#define  PICB_SEG27COM0             0x08
#define  PICB_SEG28COM0             0x10
#define  PICB_SEG29COM0             0x20
#define  PICB_SEG30COM0             0x40
#define  PICB_SEG31COM0             0x80

// Register: LCDDATA13（PIC1947新增加的）
#define  PICB_SEG32COM0             0x01
#define  PICB_SEG33COM0             0x02
#define  PICB_SEG34COM0             0x04
#define  PICB_SEG35COM0             0x08
#define  PICB_SEG36COM0             0x10
#define  PICB_SEG37COM0             0x20
#define  PICB_SEG38COM0             0x40
#define  PICB_SEG39COM0             0x80

// Register: LCDDATA14（PIC1947新增加的）
#define  PICB_SEG40COM0             0x01
#define  PICB_SEG41COM0             0x02
#define  PICB_SEG42COM0             0x04
#define  PICB_SEG43COM0             0x08
#define  PICB_SEG44COM0             0x10
#define  PICB_SEG45COM0             0x20

// Register: LCDDATA15（PIC1947新增加的）
#define  PICB_SEG24COM1             0x01
#define  PICB_SEG25COM1             0x02
#define  PICB_SEG26COM1             0x04
#define  PICB_SEG27COM1             0x08
#define  PICB_SEG28COM1             0x10
#define  PICB_SEG29COM1             0x20
#define  PICB_SEG30COM1             0x40
#define  PICB_SEG31COM1             0x80

// Register: LCDDATA16（PIC1947新增加的）
#define  PICB_SEG32COM1             0x01
#define  PICB_SEG33COM1             0x02
#define  PICB_SEG34COM1             0x04
#define  PICB_SEG35COM1             0x08
#define  PICB_SEG36COM1             0x10
#define  PICB_SEG37COM1             0x20
#define  PICB_SEG38COM1             0x40
#define  PICB_SEG39COM1             0x80

// Register: LCDDATA17（PIC1947新增加的）
#define  PICB_SEG40COM1             0x01
#define  PICB_SEG41COM1             0x02
#define  PICB_SEG42COM1             0x04
#define  PICB_SEG43COM1             0x08
#define  PICB_SEG44COM1             0x10
#define  PICB_SEG45COM1             0x20

// Register: LCDDATA18（PIC1947新增加的）
#define  PICB_SEG24COM2             0x01
#define  PICB_SEG25COM2             0x02
#define  PICB_SEG26COM2             0x04
#define  PICB_SEG27COM2             0x08
#define  PICB_SEG28COM2             0x10
#define  PICB_SEG29COM2             0x20
#define  PICB_SEG30COM2             0x40
#define  PICB_SEG31COM2             0x80

// Register: LCDDATA19（PIC1947新增加的）
#define  PICB_SEG32COM2             0x01
#define  PICB_SEG33COM2             0x02
#define  PICB_SEG34COM2             0x04
#define  PICB_SEG35COM2             0x08
#define  PICB_SEG36COM2             0x10
#define  PICB_SEG37COM2             0x20
#define  PICB_SEG38COM2             0x40
#define  PICB_SEG39COM2             0x80

// Register: LCDDATA20（PIC1947新增加的）
#define  PICB_SEG40COM2             0x01
#define  PICB_SEG41COM2             0x02
#define  PICB_SEG42COM2             0x04
#define  PICB_SEG43COM2             0x08
#define  PICB_SEG44COM2             0x10
#define  PICB_SEG45COM2             0x20

// Register: LCDDATA21（PIC1947新增加的）
#define  PICB_SEG24COM3             0x01
#define  PICB_SEG25COM3             0x02
#define  PICB_SEG26COM3             0x04
#define  PICB_SEG27COM3             0x08
#define  PICB_SEG28COM3             0x10
#define  PICB_SEG29COM3             0x20
#define  PICB_SEG30COM3             0x40
#define  PICB_SEG31COM3             0x80

// Register: LCDDATA22（PIC1947新增加的）
#define  PICB_SEG32COM3             0x01
#define  PICB_SEG33COM3             0x02
#define  PICB_SEG34COM3             0x04
#define  PICB_SEG35COM3             0x08
#define  PICB_SEG36COM3             0x10
#define  PICB_SEG37COM3             0x20
#define  PICB_SEG38COM3             0x40
#define  PICB_SEG39COM3             0x80

// Register: LCDDATA23（PIC1947新增加的）
#define  PICB_SEG40COM3             0x01
#define  PICB_SEG41COM3             0x02
#define  PICB_SEG42COM3             0x04
#define  PICB_SEG43COM3             0x08
#define  PICB_SEG44COM3             0x10
#define  PICB_SEG45COM3             0x20
//
// Special function register definitions: Bank 31
//


// Register: STATUS_SHAD
#define  PICB_C_SHAD                0x01
#define  PICB_DC_SHAD               0x02
#define  PICB_Z_SHAD                0x04

#endif //#ifndef __PIC16F193X_BIT_H
