/**
  Generated Main Source File

  File Name:
    main.c
  
  Device:  
    PIC16LF15354
*/

#include "mcc_generated_files/mcc.h"
#include "soft_timer.h"
#include "fun.h"

/*
                         Main application
 */

void main(void)
{
    // initialize the device
    SYSTEM_Initialize();
    SYS_PWR_EN_LAT = 1;     //ģ�鹩��
    GPIO_68_LAT = ACC_IN_PORT;//ACCӳ��ŵ�ƽ��ʼ��
    __delay_ms(10);
    CLRWDT();
    PWRKEY_LAT = 1;     //PWRKEY����
    __delay_ms(1000);   //��ʱ1s����  
    CLRWDT();
    MCU_PWR_ON_LAT = 1; //��Ƭ����Դ����
    __delay_ms(1000);    //��ʱ1s����
    CLRWDT();
    PWRKEY_LAT = 0;
    SYS_DownDet();      //����Ƿ��ѿ���

    // Enable the Global Interrupts 
    INTERRUPT_GlobalInterruptEnable();      //ȫ���ж�ʹ��

    // Enable the Peripheral Interrupts 
    INTERRUPT_PeripheralInterruptEnable();  //��Χ�ж�ʹ��  
    
    TMR2_StartTimer();              //����Ӳ����ʱ��2
    TIMERS_Add(0,400,0,SYS_DownDet);   //��������ʱ��0��ģ��ϵ���ʱ���
    TIMERS_Add(1,2500,0,SYS_DownDet);  //��������ʱ��1��ģ��ϵ���ʱ���
    TIMERS_Add(2,30000,0,USB_Redo);    //��������ʱ��2������ģ��β�USB
    TIMERS_Start(2);
    TIMERS_Add(3,4000,0,KEY_Up);
    TIMERS_Add(4,20000,0,Force_Reboot);
    TIMERS_Add(5,500,0,KEY_Up);
    while (1)
    {
        USB_Switch();
        LED_Manage();
        ACC_MAP();
        CLRWDT();
    }
}

/**
 End of File
*/


