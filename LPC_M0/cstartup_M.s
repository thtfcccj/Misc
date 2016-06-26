/**************************************************
 *
 * Part one of the system initialization code, contains low-level
 * initialization, plain thumb variant.
 *
 * Copyright 2009 IAR Systems. All rights reserved.
 *
 * $Revision: 39306 $
 *
 **************************************************/

;
; The modules in this file are included in the libraries, and may be replaced
; by any user-defined modules that define the PUBLIC symbol _program_start or
; a user defined start symbol.
; To override the cstartup defined in the library, simply add your modified
; version to the workbench project.
;
; The vector table is normally located at address 0.
; When debugging in RAM, it can be located in RAM, aligned to at least 2^6.
; The name "__vector_table" has special meaning for C-SPY:
; it is where the SP start value is found, and the NVIC vector
; table register (VTOR) is initialized to this address if != 0.
;
; Cortex-M version
;

        MODULE  ?cstartup

        ;; Forward declaration of sections.
        SECTION CSTACK:DATA:NOROOT(3)

        SECTION .intvec:CODE:NOROOT(2)

        EXTERN  __iar_program_start

        PUBLIC  __vector_table
        PUBLIC  __vector_table_0x1c
        DATA
__vector_table
        DCD     sfe(CSTACK)                 ; Top of Stack
        DCD     __iar_program_start         ; Reset Handler
        DCD     NMI_Handler                 ; NMI Handler
        DCD     HardFault_Handler           ; Hard Fault Handler
        DCD     MemManage_Handler           ; MPU Fault Handler
        DCD     BusFault_Handler            ; Bus Fault Handler
        DCD     UsageFault_Handler          ; Usage Fault Handler
__vector_table_0x1c
        DCD     0                           ; Reserved
        DCD     0                           ; Reserved
        DCD     0                           ; Reserved
        DCD     0                           ; Reserved
        DCD     SVC_Handler                 ; SVCall Handler
        DCD     DebugMon_Handler            ; Debug Monitor Handler
        DCD     0                           ; Reserved
        DCD     PendSV_Handler              ; PendSV Handler
        DCD     SysTick_Handler             ; SysTick Handler
        DCD     WAKE_UP0_IRQHandler         ; WAKE_UP0 Handler
        DCD     WAKE_UP1_IRQHandler         ; WAKE_UP1 Handler
        DCD     WAKE_UP2_IRQHandler         ; WAKE_UP2 Handler
        DCD     WAKE_UP3_IRQHandler         ; WAKE_UP3 Handler
        DCD     WAKE_UP4_IRQHandler         ; WAKE_UP4 Handler
        DCD     WAKE_UP5_IRQHandler         ; WAKE_UP5 Handler
        DCD     WAKE_UP6_IRQHandler         ; WAKE_UP6 Handler
        DCD     WAKE_UP7_IRQHandler         ; WAKE_UP7 Handler
        DCD     WAKE_UP8_IRQHandler         ; WAKE_UP8 Handler
        DCD     WAKE_UP9_IRQHandler         ; WAKE_UP9 Handler
        DCD     WAKE_UP10_IRQHandler        ; WAKE_UP10 Handler
        DCD     WAKE_UP11_IRQHandler        ; WAKE_UP11 Handler
        DCD     I2C0_IRQHandler             ; I2C0 Handler
        DCD     CT16B1_IRQHandler           ; CT16B0 Handler
        DCD     CT16B0_IRQHandler           ; CT16B1 Handler
        DCD     CT32B0_IRQHandler           ; CT32B0 Handler
        DCD     CT32B1_IRQHandler           ; CT32B1 Handler
        DCD     SSP0_IRQHandler             ; SSP0 Handler
        DCD     UART0_IRQHandler            ; UART0 Handler
        DCD     UART1_IRQHandler            ; UART0 Handler
        DCD     CMP_IRQHandler              ; CMP Handler
        DCD     ADC_IRQHandler              ; ADC Handler
        DCD     WDT_IRQHandler              ; WDT Handler
        DCD     BOD_IRQHandler              ; BOD Handler
        DCD     FLASH_IRQHandler            ; FLASH Handler
        DCD     PIO0_IRQHandler             ; PIO0 Interupt Handler
        DCD     PIO1_IRQHandler             ; PIO1 Interupt Handler
        DCD     PIO2_IRQHandler             ; PIO2 Interupt Handler
        DCD     PMU_IRQHandler              ; Power management unit Handler
        DCD     DMA_IRQHandler              ; DMA Handler
        DCD     RTC_IRQHandler              ; RTC Interupt Handler

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;
;; Default interrupt handlers.
;;
        THUMB
        SECTION .text:CODE:REORDER:NOROOT(1)

        PUBWEAK NMI_Handler
        PUBWEAK HardFault_Handler
        PUBWEAK MemManage_Handler
        PUBWEAK BusFault_Handler
        PUBWEAK UsageFault_Handler
        PUBWEAK SVC_Handler
        PUBWEAK DebugMon_Handler
        PUBWEAK PendSV_Handler
        PUBWEAK SysTick_Handler
        PUBWEAK WAKE_UP0_IRQHandler 
        PUBWEAK WAKE_UP1_IRQHandler 
        PUBWEAK WAKE_UP2_IRQHandler 
        PUBWEAK WAKE_UP3_IRQHandler 
        PUBWEAK WAKE_UP4_IRQHandler 
        PUBWEAK WAKE_UP5_IRQHandler 
        PUBWEAK WAKE_UP6_IRQHandler 
        PUBWEAK WAKE_UP7_IRQHandler 
        PUBWEAK WAKE_UP8_IRQHandler 
        PUBWEAK WAKE_UP9_IRQHandler 
        PUBWEAK WAKE_UP10_IRQHandler
        PUBWEAK WAKE_UP11_IRQHandler
        PUBWEAK I2C0_IRQHandler     
        PUBWEAK CT16B1_IRQHandler   
        PUBWEAK CT16B0_IRQHandler   
        PUBWEAK CT32B0_IRQHandler   
        PUBWEAK CT32B1_IRQHandler   
        PUBWEAK SSP0_IRQHandler     
        PUBWEAK UART0_IRQHandler    
        PUBWEAK UART1_IRQHandler    
        PUBWEAK CMP_IRQHandler      
        PUBWEAK ADC_IRQHandler      
        PUBWEAK WDT_IRQHandler      
        PUBWEAK BOD_IRQHandler      
        PUBWEAK FLASH_IRQHandler    
        PUBWEAK PIO0_IRQHandler     
        PUBWEAK PIO1_IRQHandler     
        PUBWEAK PIO2_IRQHandler          
        PUBWEAK PMU_IRQHandler      
        PUBWEAK DMA_IRQHandler      
        PUBWEAK RTC_IRQHandler      
        
NMI_Handler:
HardFault_Handler:
MemManage_Handler:
BusFault_Handler:
UsageFault_Handler:
SVC_Handler:
DebugMon_Handler:
PendSV_Handler:
SysTick_Handler:
WAKE_UP0_IRQHandler:
WAKE_UP1_IRQHandler:
WAKE_UP2_IRQHandler:
WAKE_UP3_IRQHandler:
WAKE_UP4_IRQHandler:
WAKE_UP5_IRQHandler:
WAKE_UP6_IRQHandler:
WAKE_UP7_IRQHandler:
WAKE_UP8_IRQHandler:
WAKE_UP9_IRQHandler:
WAKE_UP10_IRQHandler:
WAKE_UP11_IRQHandler:
I2C0_IRQHandler:
CT16B1_IRQHandler:
CT16B0_IRQHandler:
CT32B0_IRQHandler:
CT32B1_IRQHandler:
SSP0_IRQHandler:
UART0_IRQHandler:
UART1_IRQHandler:
CMP_IRQHandler:
ADC_IRQHandler:
WDT_IRQHandler:
BOD_IRQHandler:
FLASH_IRQHandler:
PIO0_IRQHandler:
PIO1_IRQHandler:
PIO2_IRQHandler:
PMU_IRQHandler:
DMA_IRQHandler:
RTC_IRQHandler:
Default_Handler:
        B Default_Handler

        END
