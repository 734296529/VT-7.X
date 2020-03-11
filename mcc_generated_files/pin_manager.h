/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.65.2
        Device            :  PIC16LF15354
        Driver Version    :  2.01
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.45
        MPLAB 	          :  MPLAB X 4.15	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set STAT_IN aliases
#define STAT_IN_TRIS                 TRISAbits.TRISA0
#define STAT_IN_LAT                  LATAbits.LATA0
#define STAT_IN_PORT                 PORTAbits.RA0
#define STAT_IN_WPU                  WPUAbits.WPUA0
#define STAT_IN_OD                   ODCONAbits.ODCA0
#define STAT_IN_ANS                  ANSELAbits.ANSA0
#define STAT_IN_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define STAT_IN_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define STAT_IN_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define STAT_IN_GetValue()           PORTAbits.RA0
#define STAT_IN_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define STAT_IN_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define STAT_IN_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define STAT_IN_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define STAT_IN_SetPushPull()        do { ODCONAbits.ODCA0 = 0; } while(0)
#define STAT_IN_SetOpenDrain()       do { ODCONAbits.ODCA0 = 1; } while(0)
#define STAT_IN_SetAnalogMode()      do { ANSELAbits.ANSA0 = 1; } while(0)
#define STAT_IN_SetDigitalMode()     do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set USB_BOOT aliases
#define USB_BOOT_TRIS                 TRISAbits.TRISA1
#define USB_BOOT_LAT                  LATAbits.LATA1
#define USB_BOOT_PORT                 PORTAbits.RA1
#define USB_BOOT_WPU                  WPUAbits.WPUA1
#define USB_BOOT_OD                   ODCONAbits.ODCA1
#define USB_BOOT_ANS                  ANSELAbits.ANSA1
#define USB_BOOT_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define USB_BOOT_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define USB_BOOT_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define USB_BOOT_GetValue()           PORTAbits.RA1
#define USB_BOOT_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define USB_BOOT_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define USB_BOOT_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define USB_BOOT_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define USB_BOOT_SetPushPull()        do { ODCONAbits.ODCA1 = 0; } while(0)
#define USB_BOOT_SetOpenDrain()       do { ODCONAbits.ODCA1 = 1; } while(0)
#define USB_BOOT_SetAnalogMode()      do { ANSELAbits.ANSA1 = 1; } while(0)
#define USB_BOOT_SetDigitalMode()     do { ANSELAbits.ANSA1 = 0; } while(0)

// get/set PWRKEY_ON aliases
#define PWRKEY_ON_TRIS                 TRISAbits.TRISA2
#define PWRKEY_ON_LAT                  LATAbits.LATA2
#define PWRKEY_ON_PORT                 PORTAbits.RA2
#define PWRKEY_ON_WPU                  WPUAbits.WPUA2
#define PWRKEY_ON_OD                   ODCONAbits.ODCA2
#define PWRKEY_ON_ANS                  ANSELAbits.ANSA2
#define PWRKEY_ON_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define PWRKEY_ON_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define PWRKEY_ON_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define PWRKEY_ON_GetValue()           PORTAbits.RA2
#define PWRKEY_ON_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define PWRKEY_ON_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define PWRKEY_ON_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define PWRKEY_ON_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define PWRKEY_ON_SetPushPull()        do { ODCONAbits.ODCA2 = 0; } while(0)
#define PWRKEY_ON_SetOpenDrain()       do { ODCONAbits.ODCA2 = 1; } while(0)
#define PWRKEY_ON_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define PWRKEY_ON_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set ACC_IN aliases
#define ACC_IN_TRIS                 TRISAbits.TRISA3
#define ACC_IN_LAT                  LATAbits.LATA3
#define ACC_IN_PORT                 PORTAbits.RA3
#define ACC_IN_WPU                  WPUAbits.WPUA3
#define ACC_IN_OD                   ODCONAbits.ODCA3
#define ACC_IN_ANS                  ANSELAbits.ANSA3
#define ACC_IN_SetHigh()            do { LATAbits.LATA3 = 1; } while(0)
#define ACC_IN_SetLow()             do { LATAbits.LATA3 = 0; } while(0)
#define ACC_IN_Toggle()             do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define ACC_IN_GetValue()           PORTAbits.RA3
#define ACC_IN_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define ACC_IN_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define ACC_IN_SetPullup()          do { WPUAbits.WPUA3 = 1; } while(0)
#define ACC_IN_ResetPullup()        do { WPUAbits.WPUA3 = 0; } while(0)
#define ACC_IN_SetPushPull()        do { ODCONAbits.ODCA3 = 0; } while(0)
#define ACC_IN_SetOpenDrain()       do { ODCONAbits.ODCA3 = 1; } while(0)
#define ACC_IN_SetAnalogMode()      do { ANSELAbits.ANSA3 = 1; } while(0)
#define ACC_IN_SetDigitalMode()     do { ANSELAbits.ANSA3 = 0; } while(0)

// get/set USB1_PWR aliases
#define USB1_PWR_TRIS                 TRISAbits.TRISA4
#define USB1_PWR_LAT                  LATAbits.LATA4
#define USB1_PWR_PORT                 PORTAbits.RA4
#define USB1_PWR_WPU                  WPUAbits.WPUA4
#define USB1_PWR_OD                   ODCONAbits.ODCA4
#define USB1_PWR_ANS                  ANSELAbits.ANSA4
#define USB1_PWR_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define USB1_PWR_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define USB1_PWR_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define USB1_PWR_GetValue()           PORTAbits.RA4
#define USB1_PWR_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define USB1_PWR_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define USB1_PWR_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define USB1_PWR_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define USB1_PWR_SetPushPull()        do { ODCONAbits.ODCA4 = 0; } while(0)
#define USB1_PWR_SetOpenDrain()       do { ODCONAbits.ODCA4 = 1; } while(0)
#define USB1_PWR_SetAnalogMode()      do { ANSELAbits.ANSA4 = 1; } while(0)
#define USB1_PWR_SetDigitalMode()     do { ANSELAbits.ANSA4 = 0; } while(0)

// get/set USB2_PWR aliases
#define USB2_PWR_TRIS                 TRISAbits.TRISA5
#define USB2_PWR_LAT                  LATAbits.LATA5
#define USB2_PWR_PORT                 PORTAbits.RA5
#define USB2_PWR_WPU                  WPUAbits.WPUA5
#define USB2_PWR_OD                   ODCONAbits.ODCA5
#define USB2_PWR_ANS                  ANSELAbits.ANSA5
#define USB2_PWR_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define USB2_PWR_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define USB2_PWR_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define USB2_PWR_GetValue()           PORTAbits.RA5
#define USB2_PWR_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define USB2_PWR_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define USB2_PWR_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define USB2_PWR_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)
#define USB2_PWR_SetPushPull()        do { ODCONAbits.ODCA5 = 0; } while(0)
#define USB2_PWR_SetOpenDrain()       do { ODCONAbits.ODCA5 = 1; } while(0)
#define USB2_PWR_SetAnalogMode()      do { ANSELAbits.ANSA5 = 1; } while(0)
#define USB2_PWR_SetDigitalMode()     do { ANSELAbits.ANSA5 = 0; } while(0)

// get/set SYS_PWR_EN aliases
#define SYS_PWR_EN_TRIS                 TRISAbits.TRISA6
#define SYS_PWR_EN_LAT                  LATAbits.LATA6
#define SYS_PWR_EN_PORT                 PORTAbits.RA6
#define SYS_PWR_EN_WPU                  WPUAbits.WPUA6
#define SYS_PWR_EN_OD                   ODCONAbits.ODCA6
#define SYS_PWR_EN_ANS                  ANSELAbits.ANSA6
#define SYS_PWR_EN_SetHigh()            do { LATAbits.LATA6 = 1; } while(0)
#define SYS_PWR_EN_SetLow()             do { LATAbits.LATA6 = 0; } while(0)
#define SYS_PWR_EN_Toggle()             do { LATAbits.LATA6 = ~LATAbits.LATA6; } while(0)
#define SYS_PWR_EN_GetValue()           PORTAbits.RA6
#define SYS_PWR_EN_SetDigitalInput()    do { TRISAbits.TRISA6 = 1; } while(0)
#define SYS_PWR_EN_SetDigitalOutput()   do { TRISAbits.TRISA6 = 0; } while(0)
#define SYS_PWR_EN_SetPullup()          do { WPUAbits.WPUA6 = 1; } while(0)
#define SYS_PWR_EN_ResetPullup()        do { WPUAbits.WPUA6 = 0; } while(0)
#define SYS_PWR_EN_SetPushPull()        do { ODCONAbits.ODCA6 = 0; } while(0)
#define SYS_PWR_EN_SetOpenDrain()       do { ODCONAbits.ODCA6 = 1; } while(0)
#define SYS_PWR_EN_SetAnalogMode()      do { ANSELAbits.ANSA6 = 1; } while(0)
#define SYS_PWR_EN_SetDigitalMode()     do { ANSELAbits.ANSA6 = 0; } while(0)

// get/set S_NX3DV221GM aliases
#define S_NX3DV221GM_TRIS                 TRISAbits.TRISA7
#define S_NX3DV221GM_LAT                  LATAbits.LATA7
#define S_NX3DV221GM_PORT                 PORTAbits.RA7
#define S_NX3DV221GM_WPU                  WPUAbits.WPUA7
#define S_NX3DV221GM_OD                   ODCONAbits.ODCA7
#define S_NX3DV221GM_ANS                  ANSELAbits.ANSA7
#define S_NX3DV221GM_SetHigh()            do { LATAbits.LATA7 = 1; } while(0)
#define S_NX3DV221GM_SetLow()             do { LATAbits.LATA7 = 0; } while(0)
#define S_NX3DV221GM_Toggle()             do { LATAbits.LATA7 = ~LATAbits.LATA7; } while(0)
#define S_NX3DV221GM_GetValue()           PORTAbits.RA7
#define S_NX3DV221GM_SetDigitalInput()    do { TRISAbits.TRISA7 = 1; } while(0)
#define S_NX3DV221GM_SetDigitalOutput()   do { TRISAbits.TRISA7 = 0; } while(0)
#define S_NX3DV221GM_SetPullup()          do { WPUAbits.WPUA7 = 1; } while(0)
#define S_NX3DV221GM_ResetPullup()        do { WPUAbits.WPUA7 = 0; } while(0)
#define S_NX3DV221GM_SetPushPull()        do { ODCONAbits.ODCA7 = 0; } while(0)
#define S_NX3DV221GM_SetOpenDrain()       do { ODCONAbits.ODCA7 = 1; } while(0)
#define S_NX3DV221GM_SetAnalogMode()      do { ANSELAbits.ANSA7 = 1; } while(0)
#define S_NX3DV221GM_SetDigitalMode()     do { ANSELAbits.ANSA7 = 0; } while(0)

// get/set GPIO_31 aliases
#define GPIO_31_TRIS                 TRISBbits.TRISB0
#define GPIO_31_LAT                  LATBbits.LATB0
#define GPIO_31_PORT                 PORTBbits.RB0
#define GPIO_31_WPU                  WPUBbits.WPUB0
#define GPIO_31_OD                   ODCONBbits.ODCB0
#define GPIO_31_ANS                  ANSELBbits.ANSB0
#define GPIO_31_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define GPIO_31_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define GPIO_31_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define GPIO_31_GetValue()           PORTBbits.RB0
#define GPIO_31_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define GPIO_31_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define GPIO_31_SetPullup()          do { WPUBbits.WPUB0 = 1; } while(0)
#define GPIO_31_ResetPullup()        do { WPUBbits.WPUB0 = 0; } while(0)
#define GPIO_31_SetPushPull()        do { ODCONBbits.ODCB0 = 0; } while(0)
#define GPIO_31_SetOpenDrain()       do { ODCONBbits.ODCB0 = 1; } while(0)
#define GPIO_31_SetAnalogMode()      do { ANSELBbits.ANSB0 = 1; } while(0)
#define GPIO_31_SetDigitalMode()     do { ANSELBbits.ANSB0 = 0; } while(0)

// get/set GPIO_68 aliases
#define GPIO_68_TRIS                 TRISBbits.TRISB1
#define GPIO_68_LAT                  LATBbits.LATB1
#define GPIO_68_PORT                 PORTBbits.RB1
#define GPIO_68_WPU                  WPUBbits.WPUB1
#define GPIO_68_OD                   ODCONBbits.ODCB1
#define GPIO_68_ANS                  ANSELBbits.ANSB1
#define GPIO_68_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define GPIO_68_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define GPIO_68_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define GPIO_68_GetValue()           PORTBbits.RB1
#define GPIO_68_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define GPIO_68_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define GPIO_68_SetPullup()          do { WPUBbits.WPUB1 = 1; } while(0)
#define GPIO_68_ResetPullup()        do { WPUBbits.WPUB1 = 0; } while(0)
#define GPIO_68_SetPushPull()        do { ODCONBbits.ODCB1 = 0; } while(0)
#define GPIO_68_SetOpenDrain()       do { ODCONBbits.ODCB1 = 1; } while(0)
#define GPIO_68_SetAnalogMode()      do { ANSELBbits.ANSB1 = 1; } while(0)
#define GPIO_68_SetDigitalMode()     do { ANSELBbits.ANSB1 = 0; } while(0)

// get/set USB2_ID aliases
#define USB2_ID_TRIS                 TRISBbits.TRISB2
#define USB2_ID_LAT                  LATBbits.LATB2
#define USB2_ID_PORT                 PORTBbits.RB2
#define USB2_ID_WPU                  WPUBbits.WPUB2
#define USB2_ID_OD                   ODCONBbits.ODCB2
#define USB2_ID_ANS                  ANSELBbits.ANSB2
#define USB2_ID_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define USB2_ID_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define USB2_ID_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define USB2_ID_GetValue()           PORTBbits.RB2
#define USB2_ID_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define USB2_ID_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define USB2_ID_SetPullup()          do { WPUBbits.WPUB2 = 1; } while(0)
#define USB2_ID_ResetPullup()        do { WPUBbits.WPUB2 = 0; } while(0)
#define USB2_ID_SetPushPull()        do { ODCONBbits.ODCB2 = 0; } while(0)
#define USB2_ID_SetOpenDrain()       do { ODCONBbits.ODCB2 = 1; } while(0)
#define USB2_ID_SetAnalogMode()      do { ANSELBbits.ANSB2 = 1; } while(0)
#define USB2_ID_SetDigitalMode()     do { ANSELBbits.ANSB2 = 0; } while(0)

// get/set USB1_ID aliases
#define USB1_ID_TRIS                 TRISBbits.TRISB3
#define USB1_ID_LAT                  LATBbits.LATB3
#define USB1_ID_PORT                 PORTBbits.RB3
#define USB1_ID_WPU                  WPUBbits.WPUB3
#define USB1_ID_OD                   ODCONBbits.ODCB3
#define USB1_ID_ANS                  ANSELBbits.ANSB3
#define USB1_ID_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define USB1_ID_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define USB1_ID_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define USB1_ID_GetValue()           PORTBbits.RB3
#define USB1_ID_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define USB1_ID_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)
#define USB1_ID_SetPullup()          do { WPUBbits.WPUB3 = 1; } while(0)
#define USB1_ID_ResetPullup()        do { WPUBbits.WPUB3 = 0; } while(0)
#define USB1_ID_SetPushPull()        do { ODCONBbits.ODCB3 = 0; } while(0)
#define USB1_ID_SetOpenDrain()       do { ODCONBbits.ODCB3 = 1; } while(0)
#define USB1_ID_SetAnalogMode()      do { ANSELBbits.ANSB3 = 1; } while(0)
#define USB1_ID_SetDigitalMode()     do { ANSELBbits.ANSB3 = 0; } while(0)

// get/set LED_GREEN aliases
#define LED_GREEN_TRIS                 TRISBbits.TRISB4
#define LED_GREEN_LAT                  LATBbits.LATB4
#define LED_GREEN_PORT                 PORTBbits.RB4
#define LED_GREEN_WPU                  WPUBbits.WPUB4
#define LED_GREEN_OD                   ODCONBbits.ODCB4
#define LED_GREEN_ANS                  ANSELBbits.ANSB4
#define LED_GREEN_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define LED_GREEN_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define LED_GREEN_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define LED_GREEN_GetValue()           PORTBbits.RB4
#define LED_GREEN_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define LED_GREEN_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define LED_GREEN_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define LED_GREEN_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define LED_GREEN_SetPushPull()        do { ODCONBbits.ODCB4 = 0; } while(0)
#define LED_GREEN_SetOpenDrain()       do { ODCONBbits.ODCB4 = 1; } while(0)
#define LED_GREEN_SetAnalogMode()      do { ANSELBbits.ANSB4 = 1; } while(0)
#define LED_GREEN_SetDigitalMode()     do { ANSELBbits.ANSB4 = 0; } while(0)

// get/set RB5 aliases
#define RB5_TRIS                 TRISBbits.TRISB5
#define RB5_LAT                  LATBbits.LATB5
#define RB5_PORT                 PORTBbits.RB5
#define RB5_WPU                  WPUBbits.WPUB5
#define RB5_OD                   ODCONBbits.ODCB5
#define RB5_ANS                  ANSELBbits.ANSB5
#define RB5_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define RB5_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define RB5_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define RB5_GetValue()           PORTBbits.RB5
#define RB5_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define RB5_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define RB5_SetPullup()          do { WPUBbits.WPUB5 = 1; } while(0)
#define RB5_ResetPullup()        do { WPUBbits.WPUB5 = 0; } while(0)
#define RB5_SetPushPull()        do { ODCONBbits.ODCB5 = 0; } while(0)
#define RB5_SetOpenDrain()       do { ODCONBbits.ODCB5 = 1; } while(0)
#define RB5_SetAnalogMode()      do { ANSELBbits.ANSB5 = 1; } while(0)
#define RB5_SetDigitalMode()     do { ANSELBbits.ANSB5 = 0; } while(0)

// get/set PWRKEY aliases
#define PWRKEY_TRIS                 TRISCbits.TRISC0
#define PWRKEY_LAT                  LATCbits.LATC0
#define PWRKEY_PORT                 PORTCbits.RC0
#define PWRKEY_WPU                  WPUCbits.WPUC0
#define PWRKEY_OD                   ODCONCbits.ODCC0
#define PWRKEY_ANS                  ANSELCbits.ANSC0
#define PWRKEY_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define PWRKEY_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define PWRKEY_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define PWRKEY_GetValue()           PORTCbits.RC0
#define PWRKEY_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define PWRKEY_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define PWRKEY_SetPullup()          do { WPUCbits.WPUC0 = 1; } while(0)
#define PWRKEY_ResetPullup()        do { WPUCbits.WPUC0 = 0; } while(0)
#define PWRKEY_SetPushPull()        do { ODCONCbits.ODCC0 = 0; } while(0)
#define PWRKEY_SetOpenDrain()       do { ODCONCbits.ODCC0 = 1; } while(0)
#define PWRKEY_SetAnalogMode()      do { ANSELCbits.ANSC0 = 1; } while(0)
#define PWRKEY_SetDigitalMode()     do { ANSELCbits.ANSC0 = 0; } while(0)

// get/set ID_SW aliases
#define ID_SW_TRIS                 TRISCbits.TRISC1
#define ID_SW_LAT                  LATCbits.LATC1
#define ID_SW_PORT                 PORTCbits.RC1
#define ID_SW_WPU                  WPUCbits.WPUC1
#define ID_SW_OD                   ODCONCbits.ODCC1
#define ID_SW_ANS                  ANSELCbits.ANSC1
#define ID_SW_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define ID_SW_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define ID_SW_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define ID_SW_GetValue()           PORTCbits.RC1
#define ID_SW_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define ID_SW_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define ID_SW_SetPullup()          do { WPUCbits.WPUC1 = 1; } while(0)
#define ID_SW_ResetPullup()        do { WPUCbits.WPUC1 = 0; } while(0)
#define ID_SW_SetPushPull()        do { ODCONCbits.ODCC1 = 0; } while(0)
#define ID_SW_SetOpenDrain()       do { ODCONCbits.ODCC1 = 1; } while(0)
#define ID_SW_SetAnalogMode()      do { ANSELCbits.ANSC1 = 1; } while(0)
#define ID_SW_SetDigitalMode()     do { ANSELCbits.ANSC1 = 0; } while(0)

// get/set USB1_OTG_SW aliases
#define USB1_OTG_SW_TRIS                 TRISCbits.TRISC2
#define USB1_OTG_SW_LAT                  LATCbits.LATC2
#define USB1_OTG_SW_PORT                 PORTCbits.RC2
#define USB1_OTG_SW_WPU                  WPUCbits.WPUC2
#define USB1_OTG_SW_OD                   ODCONCbits.ODCC2
#define USB1_OTG_SW_ANS                  ANSELCbits.ANSC2
#define USB1_OTG_SW_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define USB1_OTG_SW_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define USB1_OTG_SW_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define USB1_OTG_SW_GetValue()           PORTCbits.RC2
#define USB1_OTG_SW_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define USB1_OTG_SW_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define USB1_OTG_SW_SetPullup()          do { WPUCbits.WPUC2 = 1; } while(0)
#define USB1_OTG_SW_ResetPullup()        do { WPUCbits.WPUC2 = 0; } while(0)
#define USB1_OTG_SW_SetPushPull()        do { ODCONCbits.ODCC2 = 0; } while(0)
#define USB1_OTG_SW_SetOpenDrain()       do { ODCONCbits.ODCC2 = 1; } while(0)
#define USB1_OTG_SW_SetAnalogMode()      do { ANSELCbits.ANSC2 = 1; } while(0)
#define USB1_OTG_SW_SetDigitalMode()     do { ANSELCbits.ANSC2 = 0; } while(0)

// get/set MCU_PWR_ON aliases
#define MCU_PWR_ON_TRIS                 TRISCbits.TRISC5
#define MCU_PWR_ON_LAT                  LATCbits.LATC5
#define MCU_PWR_ON_PORT                 PORTCbits.RC5
#define MCU_PWR_ON_WPU                  WPUCbits.WPUC5
#define MCU_PWR_ON_OD                   ODCONCbits.ODCC5
#define MCU_PWR_ON_ANS                  ANSELCbits.ANSC5
#define MCU_PWR_ON_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define MCU_PWR_ON_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define MCU_PWR_ON_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define MCU_PWR_ON_GetValue()           PORTCbits.RC5
#define MCU_PWR_ON_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define MCU_PWR_ON_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define MCU_PWR_ON_SetPullup()          do { WPUCbits.WPUC5 = 1; } while(0)
#define MCU_PWR_ON_ResetPullup()        do { WPUCbits.WPUC5 = 0; } while(0)
#define MCU_PWR_ON_SetPushPull()        do { ODCONCbits.ODCC5 = 0; } while(0)
#define MCU_PWR_ON_SetOpenDrain()       do { ODCONCbits.ODCC5 = 1; } while(0)
#define MCU_PWR_ON_SetAnalogMode()      do { ANSELCbits.ANSC5 = 1; } while(0)
#define MCU_PWR_ON_SetDigitalMode()     do { ANSELCbits.ANSC5 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);


/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCAF0 pin functionality
 * @Example
    IOCAF0_ISR();
 */
void IOCAF0_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCAF0 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCAF0 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF0_SetInterruptHandler(MyInterruptHandler);

*/
void IOCAF0_SetInterruptHandler(void (* InterruptHandler)(void));

/**
  @Summary
    Dynamic Interrupt Handler for IOCAF0 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCAF0_SetInterruptHandler() method.
    This handler is called every time the IOCAF0 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF0_SetInterruptHandler(IOCAF0_InterruptHandler);

*/
extern void (*IOCAF0_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCAF0 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCAF0_SetInterruptHandler() method.
    This handler is called every time the IOCAF0 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF0_SetInterruptHandler(IOCAF0_DefaultInterruptHandler);

*/
void IOCAF0_DefaultInterruptHandler(void);


/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCAF2 pin functionality
 * @Example
    IOCAF2_ISR();
 */
void IOCAF2_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCAF2 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCAF2 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF2_SetInterruptHandler(MyInterruptHandler);

*/
void IOCAF2_SetInterruptHandler(void (* InterruptHandler)(void));

/**
  @Summary
    Dynamic Interrupt Handler for IOCAF2 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCAF2_SetInterruptHandler() method.
    This handler is called every time the IOCAF2 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF2_SetInterruptHandler(IOCAF2_InterruptHandler);

*/
extern void (*IOCAF2_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCAF2 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCAF2_SetInterruptHandler() method.
    This handler is called every time the IOCAF2 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF2_SetInterruptHandler(IOCAF2_DefaultInterruptHandler);

*/
void IOCAF2_DefaultInterruptHandler(void);


/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCAF3 pin functionality
 * @Example
    IOCAF3_ISR();
 */
void IOCAF3_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCAF3 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCAF3 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF3_SetInterruptHandler(MyInterruptHandler);

*/
void IOCAF3_SetInterruptHandler(void (* InterruptHandler)(void));

/**
  @Summary
    Dynamic Interrupt Handler for IOCAF3 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCAF3_SetInterruptHandler() method.
    This handler is called every time the IOCAF3 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF3_SetInterruptHandler(IOCAF3_InterruptHandler);

*/
extern void (*IOCAF3_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCAF3 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCAF3_SetInterruptHandler() method.
    This handler is called every time the IOCAF3 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF3_SetInterruptHandler(IOCAF3_DefaultInterruptHandler);

*/
void IOCAF3_DefaultInterruptHandler(void);


/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCAF4 pin functionality
 * @Example
    IOCAF4_ISR();
 */
void IOCAF4_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCAF4 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCAF4 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF4_SetInterruptHandler(MyInterruptHandler);

*/
void IOCAF4_SetInterruptHandler(void (* InterruptHandler)(void));

/**
  @Summary
    Dynamic Interrupt Handler for IOCAF4 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCAF4_SetInterruptHandler() method.
    This handler is called every time the IOCAF4 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF4_SetInterruptHandler(IOCAF4_InterruptHandler);

*/
extern void (*IOCAF4_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCAF4 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCAF4_SetInterruptHandler() method.
    This handler is called every time the IOCAF4 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF4_SetInterruptHandler(IOCAF4_DefaultInterruptHandler);

*/
void IOCAF4_DefaultInterruptHandler(void);


/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCAF5 pin functionality
 * @Example
    IOCAF5_ISR();
 */
void IOCAF5_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCAF5 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCAF5 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF5_SetInterruptHandler(MyInterruptHandler);

*/
void IOCAF5_SetInterruptHandler(void (* InterruptHandler)(void));

/**
  @Summary
    Dynamic Interrupt Handler for IOCAF5 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCAF5_SetInterruptHandler() method.
    This handler is called every time the IOCAF5 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF5_SetInterruptHandler(IOCAF5_InterruptHandler);

*/
extern void (*IOCAF5_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCAF5 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCAF5_SetInterruptHandler() method.
    This handler is called every time the IOCAF5 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF5_SetInterruptHandler(IOCAF5_DefaultInterruptHandler);

*/
void IOCAF5_DefaultInterruptHandler(void);


/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCBF0 pin functionality
 * @Example
    IOCBF0_ISR();
 */
void IOCBF0_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCBF0 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCBF0 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCBF0_SetInterruptHandler(MyInterruptHandler);

*/
void IOCBF0_SetInterruptHandler(void (* InterruptHandler)(void));

/**
  @Summary
    Dynamic Interrupt Handler for IOCBF0 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCBF0_SetInterruptHandler() method.
    This handler is called every time the IOCBF0 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCBF0_SetInterruptHandler(IOCBF0_InterruptHandler);

*/
extern void (*IOCBF0_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCBF0 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCBF0_SetInterruptHandler() method.
    This handler is called every time the IOCBF0 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCBF0_SetInterruptHandler(IOCBF0_DefaultInterruptHandler);

*/
void IOCBF0_DefaultInterruptHandler(void);


/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCBF2 pin functionality
 * @Example
    IOCBF2_ISR();
 */
void IOCBF2_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCBF2 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCBF2 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCBF2_SetInterruptHandler(MyInterruptHandler);

*/
void IOCBF2_SetInterruptHandler(void (* InterruptHandler)(void));

/**
  @Summary
    Dynamic Interrupt Handler for IOCBF2 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCBF2_SetInterruptHandler() method.
    This handler is called every time the IOCBF2 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCBF2_SetInterruptHandler(IOCBF2_InterruptHandler);

*/
extern void (*IOCBF2_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCBF2 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCBF2_SetInterruptHandler() method.
    This handler is called every time the IOCBF2 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCBF2_SetInterruptHandler(IOCBF2_DefaultInterruptHandler);

*/
void IOCBF2_DefaultInterruptHandler(void);


/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCBF3 pin functionality
 * @Example
    IOCBF3_ISR();
 */
void IOCBF3_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCBF3 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCBF3 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCBF3_SetInterruptHandler(MyInterruptHandler);

*/
void IOCBF3_SetInterruptHandler(void (* InterruptHandler)(void));

/**
  @Summary
    Dynamic Interrupt Handler for IOCBF3 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCBF3_SetInterruptHandler() method.
    This handler is called every time the IOCBF3 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCBF3_SetInterruptHandler(IOCBF3_InterruptHandler);

*/
extern void (*IOCBF3_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCBF3 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCBF3_SetInterruptHandler() method.
    This handler is called every time the IOCBF3 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCBF3_SetInterruptHandler(IOCBF3_DefaultInterruptHandler);

*/
void IOCBF3_DefaultInterruptHandler(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/