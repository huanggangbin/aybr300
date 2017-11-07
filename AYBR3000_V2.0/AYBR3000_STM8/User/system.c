//***************************************************************
// Description : ϵͳ����
// Author      : TST
// Created     : 2014.04.23
// Modified    : None
// Revision    : 1.0
//***************************************************************

#include "system.h"
#include "stm8l15x_iwdg.h"
#include "main_control.h"
#include "stm8l15x_spi.h"

void Clock_Configuration(void) 
{

    u16 delay = 0;
    
    while ( delay < 50000 ) 
    {
        delay++;
        asm("nop");
    }//�ϵ���ʱ50000��ָ������
    
    CLK_LSEConfig(CLK_LSE_ON);   //�����ⲿ����ʱ�Ӵ򿪣�32.768K
    while (CLK_GetFlagStatus(CLK_FLAG_LSERDY) == RESET);            //�ж��ⲿ���پ���׼�����flag
    CLK_RTCClockConfig(CLK_RTCCLKSource_LSE, CLK_RTCCLKDiv_1);          //RTCʱ��ԴLSE����Ƶ����

    CLK->CKDIVR = 0x01;                  // ��ʱ��2��Ƶ,8M, ����125ns
    CLK->ICKCR  = 0x11;                  // �����ڲ�RC=16mhz
    while( (CLK->ICKCR & 0x02)==0 );     // �ȴ�ʱ���ȶ�

    CLK->PCKENR1 = 0x04;                 // ��TIM4�ṩʱ��
}


void IWDG_Configuration(void) 
{
    #define RELOAD_VALUE   0xFF

    /* Enable IWDG (the LSI oscillator will be enabled by hardware) */
    IWDG_Enable();

    /* IWDG timeout equal to 214 ms (the timeout may varies due to LSI frequency
     dispersion) */
    /* Enable write access to IWDG_PR and IWDG_RLR registers */
    IWDG_WriteAccessCmd(IWDG_WriteAccess_Enable);

    /* IWDG configuration: IWDG is clocked by LSI = 38KHz */
    IWDG_SetPrescaler(IWDG_Prescaler_256);

    /* IWDG timeout equal to 214.7 ms (the timeout may varies due to LSI frequency dispersion) */
    /* IWDG timeout = (RELOAD_VALUE + 1) * Prescaler / LSI 
                  = (254 + 1) * 128 / 38 000 
                  = 214.7 ms */
    IWDG_SetReload((u8)RELOAD_VALUE);

    /* Reload IWDG counter */
    IWDG_ReloadCounter();
}

// 100usʱ�ӻ�׼
void TIM4_Configuration(void) 
{ 
       
    TIM4_SetCounter(0);  //counterֵ����
    TIM4_TimeBaseInit(TIM4_Prescaler_32, 249);   //32Ԥ��Ƶ, �Զ���װֵ249
    TIM4->EGR = 0x01;       //�ֶ�����counter�е�ֵ(����Ԥ��Ƶ���еļ���)
    TIM4_ITConfig(TIM4_IT_Update, ENABLE);
    TIM4_ARRPreloadConfig(ENABLE);    //ֱ��дӰ�ӼĴ�����ֵ����Ԥװ�ؼĴ�����ֵ
    //Ӱ�ӼĴ��������ʱ�򣬻��Ԥװ�ؼĴ�������
    TIM4_ClearFlag(TIM4_FLAG_Update);
    TIM4_Cmd(ENABLE);
    
}

void GPIO_Key_Sleep_Set(void) 
{
    
    GPIOG->ODR &= ~GPIO_Pin_7;
    GPIOG->ODR &= ~GPIO_Pin_6;
    GPIOG->ODR &= ~GPIO_Pin_5;
    GPIOG->ODR &= ~GPIO_Pin_4;

    // ����Ϊ�����ж�����
    GPIO_Init(GPIOC, GPIO_Pin_3, GPIO_Mode_In_FL_IT);
    GPIO_Init(GPIOC, GPIO_Pin_1, GPIO_Mode_In_FL_IT);
    GPIO_Init(GPIOC, GPIO_Pin_0, GPIO_Mode_In_FL_IT);

    EXTI_DeInit();

    EXTI->CR1 = 0xAA;
    EXTI->CR2 = 0xAA;
    EXTI->CR3 = 0xAA;
    EXTI->CR4 = 0x0A;
    //EXTI_SetPinSensitivity(GPIO_Pin_3, EXTI_Trigger_Falling);
    //EXTI_SetPinSensitivity(GPIO_Pin_1, EXTI_Trigger_Falling);
    //EXTI_SetPinSensitivity(GPIO_Pin_0, EXTI_Trigger_Falling);

    GPIO_IN_ReSet_Flag = 0;

    GPIO_Init(GPIOF, GPIO_Pin_7, GPIO_Mode_Out_OD_HiZ_Fast);        // SDO
    GPIOF->ODR &= ~GPIO_Pin_7;
}

void GPIO_Key_WakeUp_Set(void) 
{
    GPIOG->ODR |= GPIO_Pin_7;
    GPIOG->ODR |= GPIO_Pin_6;
    GPIOG->ODR |= GPIO_Pin_5;
    GPIOG->ODR |= GPIO_Pin_4;

    // ����Ϊ���������ж�����
    GPIO_Init(GPIOC, GPIO_Pin_3, GPIO_Mode_In_FL_No_IT);
    GPIO_Init(GPIOC, GPIO_Pin_1, GPIO_Mode_In_FL_No_IT);
    GPIO_Init(GPIOC, GPIO_Pin_0, GPIO_Mode_In_FL_No_IT);

    GPIO_IN_ReSet_Flag = 1;

    GPIO_Init(GPIOF, GPIO_Pin_7, GPIO_Mode_In_FL_No_IT);        // SDO
}

void GPIO_Configuration(void) 
{
    
    // LED����
    GPIOF->ODR &= ~GPIO_Pin_0;
    GPIO_Init(GPIOF, GPIO_Pin_0, GPIO_Mode_Out_PP_High_Fast);
    //LCD��ѹ��·����
    GPIOD->ODR &= ~GPIO_Pin_6;
    GPIO_Init(GPIOD, GPIO_Pin_6, GPIO_Mode_Out_PP_High_Fast);
    
    //�����������ݴ����
    GPIOA->ODR &= ~GPIO_Pin_0;
    GPIOA->ODR &= ~GPIO_Pin_0;
    GPIO_Init(GPIOC, GPIO_Pin_1, GPIO_Mode_In_FL_IT);
    GPIO_Init(GPIOC, GPIO_Pin_0, GPIO_Mode_In_FL_No_IT);
    //A7105��4��������
    GPIOA->ODR &= ~GPIO_Pin_0;
    GPIOD->ODR &= ~GPIO_Pin_7;
    GPIOC->ODR &= ~GPIO_Pin_2;
    GPIOC->ODR &= ~GPIO_Pin_7;
    GPIO_Init(GPIOA, GPIO_Pin_3, GPIO_Mode_Out_PP_High_Fast);    //SCS
    GPIO_Init(GPIOD, GPIO_Pin_7, GPIO_Mode_In_PU_IT);   //GIO1
    GPIO_Init(GPIOC, GPIO_Pin_2, GPIO_Mode_In_PU_No_IT);   //SDIO
    GPIO_Init(GPIOC, GPIO_Pin_7, GPIO_Mode_Out_PP_High_Fast);   //SCK
    //���ѿڣ��͵�ƽ��Ч 
    GPIOE->ODR |= GPIO_Pin_7;
    GPIO_Init(GPIOE, GPIO_Pin_7, GPIO_Mode_Out_PP_High_Fast);
    //GIO1���ϵ��½����ж�
    EXTI_DeInit();
    EXTI_SetPinSensitivity(EXTI_Pin_7, EXTI_Trigger_Falling);           //GIO1�ŵ��½����ж�
    EXTI_SetPinSensitivity(EXTI_Pin_1, EXTI_Trigger_Rising);            //CLOCK�ŵ��������ж�
}

