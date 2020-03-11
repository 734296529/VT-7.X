#include "fun.h"
#include "mcc_generated_files/mcc.h"

void LED_Manage(void)
{
    if(GPIO_31_PORT){
        LED_GREEN_LAT = !STAT_IN_PORT;//LED���л�
    }
    else{
        LED_GREEN_LAT = 0;//�ر�LED��
    }
}

void SYS_DownDet(void){
    /* GPIO_31Ϊģ�鿪�ػ�ͨѶ��*/
    /* ��Ϊ�͵�ƽ���ʾģ���ǹػ�״̬���ر�ģ���Դ�͵�Ƭ������  */
    if(!GPIO_31_PORT){
        SYS_PWR_EN_LAT = 0;
        MCU_PWR_ON_LAT = 0;
        __delay_ms(20);
    } 
}

volatile int USB_Flag = 0;
void USB_Switch(void)
{
    if(!USB2_ID_PORT)//USB2_ID�ŵͣ�������OTG��������
    {
        __delay_ms(10);
        if(!USB2_ID_PORT)
        {
            /*���� HOSTģʽ*/
            S_NX3DV221GM_LAT = 1;
            ID_SW_LAT = 1; 
            USB_Flag = 0;
        }
    }
    else//USB2_ID�Ÿߣ�����û��OTG��������
    {
        if(!USB2_PWR_PORT)//USB2_PWR�ŵͣ�������USB����
        {
            if(!USB_Flag)
            {
                RB5_LAT = 0;
                /*���� Deviceģʽ*/
                S_NX3DV221GM_LAT = 1;
                ID_SW_LAT = 0;
                __delay_ms(200);
                CLRWDT();
                RB5_LAT = 1;
                USB_Flag = 1;
            }
            
        }
        else//USB2_PWR�Ÿߣ�����ӿ�δʹ��
        {
            if(!USB1_ID_PORT)//��������USB��
            {
                __delay_ms(10);
                if(!USB1_ID_PORT)
                {
                    /*֧�� HOSTģʽ*/
                    S_NX3DV221GM_LAT = 0;
                    ID_SW_LAT = 1;
                    USB_Flag = 0;
                }
            }
            else//���нӿھ�δʹ��
            {
                /*usbͨ���л���������*/
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
    PWRKEY_LAT = 0;     //PWRKEY����
}

//�ȴ����Ź���λ
void Force_Reboot(void)
{
    if(!PWRKEY_ON_PORT)
    {
       SYS_PWR_EN_LAT = 0;
       __delay_ms(10);
       SYS_PWR_EN_LAT = 1;

       PWRKEY_LAT = 1;     //PWRKEY����

       __delay_ms(1000);   //��ʱ2s����
       CLRWDT();
       __delay_ms(1000);

       PWRKEY_LAT = 0;   
    }
}

void ACC_MAP(void)
{
    if(USB1_ID_PORT) //֧���Ƴ�
    {
        GPIO_68_LAT = 1; //ACCӳ��ߵ�ƽ
    }
    else //֧�ܽ���
    {
        GPIO_68_LAT = ACC_IN_PORT; //ACCֱ��ӳ��
    }
    CLRWDT();
}

