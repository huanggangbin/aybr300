//***************************************************************
// Description : LCD����
// Author      : TST
// Created     : 2016.02.13
// Modified    : None
// Revision    : 1.0
//***************************************************************
#include "LCD_firmware.h"

void LCD_GLASS_Init(void) {
    /*
    The LCD is configured as follow:
     - clock source = Clock(RTC) / 2 = 32.768 HZ / 2;
     - Voltage source = Internal
     - Prescaler = 2 ^ 2
     - Divider = 16  
     - Mode = 1/4 Duty, 1/3 Bias
     - LCD phase frequency = (clock source * Duty) / (Prescaler * Divider)
                     = 32767 / 2 / 16 / (2 ^ 2) = 256 HZ
        frame frequency = LCD phase frequency * duty = 64 HZ      */

    /* Enable LCD clock */
    CLK_PeripheralClockConfig(CLK_Peripheral_LCD, ENABLE);       
    //ʹ��RTC��ʱ��(LSE)
    //CLK_RTCClockConfig(CLK_RTCCLKSource_LSE, CLK_RTCCLKDiv_1);

    /* Initialize the LCD */
    LCD_Init(LCD_Prescaler_2, LCD_Divider_16, LCD_Duty_1_4,
    LCD_Bias_1_3, LCD_VoltageSource_Internal);              
    /*ʱ��Ԥ��Ƶ��Ƶ�ʽ��ͷ�ĸ(16-31)��duty(ÿ��ͨ����ռ����), bias��С��ѹ/����ѹ,����,�ڲ��ṩ��ѹ*/

    /* Mask register*/
    LCD_PortMaskConfig(LCD_PortMaskRegister_0, 0xFF);
    LCD_PortMaskConfig(LCD_PortMaskRegister_1, 0xFF);
    LCD_PortMaskConfig(LCD_PortMaskRegister_2, 0x07);     
    /*������Щ������Ϊseg��,�����ſ���Ϊgpio, duty���õ�com�ŵĸ���*/

    LCD_ContrastConfig(LCD_Contrast_Level_7);                 //����LCD�ĶԱȶ�
    LCD_DeadTimeConfig(LCD_DeadTime_2);                   //no dead time(������fram֮���phase����, frameƵ�� = phaseƵ�� * duty)
    LCD_PulseOnDurationConfig(LCD_PulseOnDuration_1);      //ÿ����ѹ���������ʱ��(��������phase��1/2 = PON[2:0] / DIV[3:0])

    LCD_Cmd(ENABLE);            /*!< Enable LCD peripheral */

    LCD_Set_BackLight_On();       //Һ�����Ĺ�Դ

}

/**********************************************************/
// LCD˯��
void LCD_GLASS_Sleep(void) 
{
    LCD_Set_BackLight_Off();
    LCD_Cmd(DISABLE);
    CLK_PeripheralClockConfig(CLK_Peripheral_LCD, DISABLE);
}

/**********************************************************/
// LCD����
void LCD_GLASS_WakeUp(void) 
{

    //LCD_GLASS_Refresh_Time();          // ��ȡ��ǰʱ��
    LCD_Set_BackLight_On();
    CLK_PeripheralClockConfig(CLK_Peripheral_LCD, ENABLE);
    LCD_Cmd(ENABLE);
}

/**********************************************************/
// LCDˢ��
void LCD_GLASS_Refresh(uint8 * buffer, uint8 len) 
{
    uint8 i;
    if (buffer == NULL)
        return;
    if (len < 5)
        return;
    for ( i = 0; i < len; i++ ) {
        LCD->RAM[LCD_RAMRegister_0 + i] = buffer[i];
    }
}


