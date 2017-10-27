//***************************************************************
// Description : ϵͳ����
// Author      : TanShutian
// Created     : 2014.08.08
// Modified    : None
// Revision    : 1.0
//***************************************************************
#define __MAIN_CONTROL_C

#include "main_control.h"
#include "lcd_driver.h"

/*****************************************
  ��Ҫ�޸ĵĵط�
*****************************************/
  FunctionalState Key_WakeUP_Flag = DISABLE;
  FunctionalState Key_UpEvent_Flag_1 = DISABLE;
  FunctionalState Key_UpEvent_Flag_2 = DISABLE;
  FunctionalState Key_UpEvent_Flag_3 = DISABLE;
  u8 ComControl_Step = 0;


void Main_Control_TIM4_On(void) 
{
    CLK->PCKENR1 |= 0x04;      // ��TIM4�ṩʱ��
    TIM4->CR1 |= 0x01 ;        // ������ʱ��
}

void Main_Control_TIM4_Off(void) 
{
    TIM4->CR1 &= ~0x01 ;        // ֹͣ��ʱ��
    CLK->PCKENR1 &= ~0x04;      // ֹͣ��TIM4�ṩʱ��
}

/********************************************************/
// ˯�߿���
void Main_Control_Sleep(void) 
{

    if ( ComControl_Step != 6 ) {
        return;
    }

    if ( Main_Read_Sleep_Is_WaKeUpToSleepHigh() ) 
    {
        // �رն�ʱ��
        Main_Control_TIM4_Off();

        // LCD����
        LCD_GLASS_Sleep();
    
        // �ر�RTC�ж�
        RTC_WakeUpCmd(DISABLE);
        
        MainControl_Sleep_State = STATE_SLEEP_HIGH;
        Key_WakeUP_Flag = ENABLE;

        // ����˯��
        PWR_FastWakeUpCmd(DISABLE);
    
        PWR_UltraLowPowerCmd(ENABLE);

        // MCU�����:
        // AL-0:�������
        // AL-1:�жϼ����MCU����ֱ�ӻص��͹���ģʽ������Ҫ����������ģ�ISR���Խ�����Ӧ�жϣ�ͨ������ALλ������������
        CFG->GCR |= CFG_GCR_AL;

        // ���ð���Ϊ�ж�����
        GPIO_Key_Sleep_Set();
        
        nop();
        nop();
        halt();
        nop();
        nop();
        nop();

        LCD_GLASS_WakeUp();
        
        RTC_WakeUpCmd(ENABLE);
        
        // ������������
        // ������ʱ��
        Main_Control_TIM4_On();
        MainControl_Sleep_State = STATE_WAKEUP_RUN;
        // ���ð���Ϊ�����ж�����
        GPIO_Key_WakeUp_Set();

        // �������
        Main_ReSet_WaKeUpToSleepLow();
        Main_ReSet_WaKeUpToSleepHigh();
        Main_ReSet_ToDownLoadData();

        LCD_Set_BackLight_On();
    } 
    else if (Main_Read_Sleep_Is_WaKeUpToSleepLow()) 
    {
        // �رն�ʱ��
        Main_Control_TIM4_Off();
        
        MainControl_Sleep_State = STATE_SLEEP_LOW;
        // ���ð���Ϊ�ж�����
        GPIO_Key_Sleep_Set();

        // ����˯��
        PWR_FastWakeUpCmd(DISABLE);
    
        PWR_UltraLowPowerCmd(ENABLE);

        // MCU�����:
        // AL-0:�������
        // AL-1:�жϼ����MCU����ֱ�ӻص��͹���ģʽ������Ҫ����������ģ�ISR���Խ�����Ӧ�жϣ�ͨ������ALλ������������
        CFG->GCR |= CFG_GCR_AL;
        
        nop();
        nop();
        nop();
        wfi();
        nop();
        nop();
        nop();

        // ������������
        // ������ʱ��
        Main_Control_TIM4_On();
        MainControl_Sleep_State = STATE_WAKEUP_RUN;
        // ���ð���Ϊ�����ж�����
        GPIO_Key_WakeUp_Set();

        // �������
        Main_ReSet_WaKeUpToSleepLow();
        
    }

}


/********************************************************/
// ˯�߿���
void Main_Control_Sleep_V2(void) 
{

    if ( ComControl_Step != 6 ) 
    {
        return;
    }

    if ( Main_Read_Sleep_Is_WaKeUpToSleepHigh() ) 
    {
        // �������ģʽ
        // �رն�ʱ��
        Main_Control_TIM4_Off();

        // LCD����
        LCD_GLASS_Sleep();
        
        MainControl_Sleep_State = STATE_SLEEP_HIGH;
        Key_WakeUP_Flag = ENABLE;
        // ���ð���Ϊ�ж�����
        System_Interr_Close();
        GPIO_Key_Sleep_Set();

        // ����˯��
        PWR_FastWakeUpCmd(DISABLE);
    
        PWR_UltraLowPowerCmd(ENABLE);

        // MCU�����:
        // AL-0:�������
        // AL-1:�жϼ����MCU����ֱ�ӻص��͹���ģʽ������Ҫ����������ģ�ISR���Խ�����Ӧ�жϣ�ͨ������ALλ������������
        CFG->GCR |= CFG_GCR_AL;
        
        nop();
        nop();
        nop();
        GPIO_IN_Set_Flag = 1;
        System_Interr_Open();
        halt();
        nop();
        nop();
        nop();

        LCD_GLASS_WakeUp();
        
        // ������������
        // ������ʱ��
        Main_Control_TIM4_On();
        MainControl_Sleep_State = STATE_WAKEUP_RUN;
        // ���ð���Ϊ�����ж�����
        GPIO_Key_WakeUp_Set();

        // �������
        Main_ReSet_WaKeUpToSleepLow();
        Main_ReSet_WaKeUpToSleepHigh();
        Main_ReSet_ToDownLoadData();

        // �޸�Ϊ���а������ڵ�����Ļ
        // LCD_Set_BackLight_On();

        Key_UpEvent_Flag_1 = DISABLE;
        Key_UpEvent_Flag_2 = DISABLE;
        Key_UpEvent_Flag_3 = DISABLE;
    } 

}


