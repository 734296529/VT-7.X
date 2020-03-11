#include "fun.h"
#include "mcc_generated_files/mcc.h"

void LED_Manage(void)
{
    if(GPIO_31_PORT){
        LED_GREEN_LAT = !STAT_IN_PORT;//LED灯切换
    }
    else{
        LED_GREEN_LAT = 0;//关闭LED灯
    }
}

void SYS_DownDet(void){
    /* GPIO_31为模块开关机通讯脚*/
    /* 若为低电平则表示模块是关机状态，关闭模块电源和单片机自锁  */
    if(!GPIO_31_PORT){
        SYS_PWR_EN_LAT = 0;
        MCU_PWR_ON_LAT = 0;
        __delay_ms(20);
    } 
}

volatile int USB_Flag = 0;
void USB_Switch(void)
{
    if(!USB2_ID_PORT)//USB2_ID脚低，主板有OTG外设连接
    {
        __delay_ms(10);
        if(!USB2_ID_PORT)
        {
            /*主板 HOST模式*/
            S_NX3DV221GM_LAT = 1;
            ID_SW_LAT = 1; 
            USB_Flag = 0;
        }
    }
    else//USB2_ID脚高，主板没有OTG外设连接
    {
        if(!USB2_PWR_PORT)//USB2_PWR脚低，主板有USB连接
        {
            if(!USB_Flag)
            {
                RB5_LAT = 0;
                /*主板 Device模式*/
                S_NX3DV221GM_LAT = 1;
                ID_SW_LAT = 0;
                __delay_ms(200);
                CLRWDT();
                RB5_LAT = 1;
                USB_Flag = 1;
            }
            
        }
        else//USB2_PWR脚高，主板接口未使用
        {
            if(!USB1_ID_PORT)//主板连接USB口
            {
                __delay_ms(10);
                if(!USB1_ID_PORT)
                {
                    /*支架 HOST模式*/
                    S_NX3DV221GM_LAT = 0;
                    ID_SW_LAT = 1;
                    USB_Flag = 0;
                }
            }
            else//所有接口均未使用
            {
                /*usb通道切换到主板上*/
                S_NX3DV221GM_LAT = 1;
                USB_Flag = 0;
            }
        }
    }         
}

void USB_Redo(void){
    RB5_LAT = 0;
    __delay_ms(300);
    CLRWDT();
    RB5_LAT = 1;
}

void KEY_Up(void)
{
    PWRKEY_LAT = 0;     //PWRKEY拉高
}

//等待看门狗复位
void Force_Reboot(void)
{
    if(!PWRKEY_ON_PORT)
    {
       SYS_PWR_EN_LAT = 0;
       __delay_ms(10);
       SYS_PWR_EN_LAT = 1;

       PWRKEY_LAT = 1;     //PWRKEY拉低

       __delay_ms(1000);   //延时2s左右
       CLRWDT();
       __delay_ms(1000);

       PWRKEY_LAT = 0;   
    }
}

void ACC_MAP(void)
{
    if(USB1_ID_PORT) //支架移除
    {
        GPIO_68_LAT = 1; //ACC映射高电平
    }
    else //支架接入
    {
        GPIO_68_LAT = ACC_IN_PORT; //ACC直接映射
    }
    CLRWDT();
}

