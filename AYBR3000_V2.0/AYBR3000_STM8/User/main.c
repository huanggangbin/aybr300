//***************************************************************
// Description : ������
// Author      : TST
// Created     : 2014.04.23
// Modified    : None
// Revision    : 1.0
//***************************************************************
#include "stm8l15x.h"
#include "system.h"
#include "stm8l15x_itc.h"

void mcu_init(void);
bool flag_1s = FALSE;

int main(void) 
{
    System_Interr_Close();    /*�ж�����*/
    mcu_init();
    System_Interr_Open();    /*�����ж��������ȼ�Ϊ�ߣ�(main()���������ȼ�Ĭ��Ϊ0)*/

    while(1) 
    {
        
    }
}

void mcu_init(void)
{
    Clock_Configuration();  /*TIM4�ṩ�ڲ�����8Mʱ�ӣ�RTCģ���ṩ32.768K�ⲿ����ʱ��*/
    GPIO_Configuration();
    TIM4_Configuration();
}

