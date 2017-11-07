//***************************************************************
// Description : 主函数
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
    System_Interr_Close();    /*中断屏蔽*/
    mcu_init();
    System_Interr_Open();    /*设置中断请求优先级为高，(main()函数的优先级默认为0)*/

    while(1) 
    {
        
    }
}

void mcu_init(void)
{
    Clock_Configuration();  /*TIM4提供内部高速8M时钟，RTC模块提供32.768K外部低速时钟*/
    GPIO_Configuration();
    TIM4_Configuration();
}

