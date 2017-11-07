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
#include "types.h"
#include "A7105_driver.h"
#include "LCD_driver.h"
#include "simple_protocol.h"
//睡眠相关的代码参考main_control()

typedef enum
{
    VALUE_SHORT_PRESS_DIAN_YUAN,
    VALUE_SHORT_PRESS_FENG_NUAN,
    VALUE_SHORT_PRESS_WENDU_JIA,
    VALUE_SHORT_PRESS_WENDU_JIAN,
    VALUE_SHORT_PRESS_XIN_FENG,
    VALUE_SHORT_PRESS_QING_RUO,
    VALUE_SHORT_PRESS_HUAN_QI,
    VALUE_SHORT_PRESS_XIN_FENG_QU_NUAN,
    VALUE_SHORT_PRESS_DINGSHI_JIA,
    VALUE_SHORT_PRESS_DINGSHI_JIAN,
    VALUE_SHORT_PRESS_BAI_DONG,
    VALUE_SHORT_PRESS_ZHI_NENG,
    
    VALUE_LONG_PRESS_WEN_DU_JIA,
    VALUE_LONG_PRESS_DING_SHI_JIA,
    VALUE_LONG_PRESS_DING_SHI_JIAN,
    
    VALUE_LONG_RELEASE_DING_SHI_JIA,
    VALUE_LONG_RELEASE_DING_SHI_JIAN,
    
    VALUE_COMBINE_WA_DA,
    VALUE_COMBINE_WM_DM,
    VALUE_COMBINE_DM_DIAN_YUAN,
    VALUE_NUMBER
}Key_value;

void mcu_init(void);
uint8 send_buf[20] = {0};
uint8 receive_buf[20] = {0};
uint8 temp;
int main(void) 
{
    Key_value key;
    System_Interr_Close();    /*中断屏蔽*/
    mcu_init();
    A7105_init();
    LCD_driver_init();
    System_Interr_Open();    /*设置中断请求优先级为高，(main()函数的优先级默认为0)*/

    while(1) 
    {
        if (simple_protocol_data_received())
        {
            key = receive_buffer[2];
            
            switch(key)
            {
                case VALUE_SHORT_PRESS_DIAN_YUAN: 
                    digital_tube_set(TUBE7, VALUE_NULL);
                    digital_tube_set(TUBE8, VALUE_0);
                    LCD_driver_refresh();
                    break;
                case VALUE_SHORT_PRESS_FENG_NUAN: 
                    digital_tube_set(TUBE7, VALUE_NULL);
                    digital_tube_set(TUBE8, VALUE_1);
                    LCD_driver_refresh();
                    break;
                case VALUE_SHORT_PRESS_WENDU_JIA: 
                    digital_tube_set(TUBE7, VALUE_NULL);
                    digital_tube_set(TUBE8, VALUE_2);
                    LCD_driver_refresh();
                    break;
                case VALUE_SHORT_PRESS_WENDU_JIAN: 
                    digital_tube_set(TUBE7, VALUE_NULL);
                    digital_tube_set(TUBE8, VALUE_3);
                    LCD_driver_refresh();
                    break;
                case VALUE_SHORT_PRESS_XIN_FENG: 
                    digital_tube_set(TUBE7, VALUE_NULL);
                    digital_tube_set(TUBE8, VALUE_4);
                    LCD_driver_refresh();
                    break;
                case VALUE_SHORT_PRESS_QING_RUO:
                    digital_tube_set(TUBE7, VALUE_NULL);
                    digital_tube_set(TUBE8, VALUE_5);
                    LCD_driver_refresh();
                    break;
                case VALUE_SHORT_PRESS_HUAN_QI: 
                    digital_tube_set(TUBE7, VALUE_NULL);
                    digital_tube_set(TUBE8, VALUE_6);
                    LCD_driver_refresh();
                    break;
                case VALUE_SHORT_PRESS_XIN_FENG_QU_NUAN:
                    digital_tube_set(TUBE7, VALUE_NULL);
                    digital_tube_set(TUBE8, VALUE_7);
                    LCD_driver_refresh();
                    break;
                case VALUE_SHORT_PRESS_DINGSHI_JIA: 
                    digital_tube_set(TUBE7, VALUE_NULL);
                    digital_tube_set(TUBE8, VALUE_8);
                    LCD_driver_refresh();
                    break;
                case VALUE_SHORT_PRESS_DINGSHI_JIAN: 
                    digital_tube_set(TUBE7, VALUE_NULL);
                    digital_tube_set(TUBE8, VALUE_9);
                    LCD_driver_refresh();
                    break;
                case VALUE_SHORT_PRESS_BAI_DONG: 
                    digital_tube_set(TUBE7, VALUE_1);
                    digital_tube_set(TUBE8, VALUE_0);
                    LCD_driver_refresh();
                    break;
                case VALUE_SHORT_PRESS_ZHI_NENG: 
                    digital_tube_set(TUBE7, VALUE_1);
                    digital_tube_set(TUBE8, VALUE_1);
                    LCD_driver_refresh();
                    break;

                case VALUE_LONG_PRESS_WEN_DU_JIA: 
                    digital_tube_set(TUBE7, VALUE_1);
                    digital_tube_set(TUBE8, VALUE_2);
                    LCD_driver_refresh();
                    break;
                case VALUE_LONG_PRESS_DING_SHI_JIA: 
                    digital_tube_set(TUBE7, VALUE_1);
                    digital_tube_set(TUBE8, VALUE_3);
                    LCD_driver_refresh();
                    break;
                case VALUE_LONG_PRESS_DING_SHI_JIAN: 
                    digital_tube_set(TUBE7, VALUE_1);
                    digital_tube_set(TUBE8, VALUE_4);
                    LCD_driver_refresh();
                    break;

                case VALUE_LONG_RELEASE_DING_SHI_JIA: 
                    digital_tube_set(TUBE7, VALUE_1);
                    digital_tube_set(TUBE8, VALUE_5);
                    LCD_driver_refresh();
                    break;
                case VALUE_LONG_RELEASE_DING_SHI_JIAN: 
                    digital_tube_set(TUBE7, VALUE_1);
                    digital_tube_set(TUBE8, VALUE_6);
                    LCD_driver_refresh();
                    break;

                case VALUE_COMBINE_WA_DA: 
                    digital_tube_set(TUBE7, VALUE_1);
                    digital_tube_set(TUBE8, VALUE_7);
                    LCD_driver_refresh();
                    break;
                case VALUE_COMBINE_WM_DM: 
                    digital_tube_set(TUBE7, VALUE_1);
                    digital_tube_set(TUBE8, VALUE_8);
                    LCD_driver_refresh();
                    break;
                case VALUE_COMBINE_DM_DIAN_YUAN: 
                    digital_tube_set(TUBE7, VALUE_1);
                    digital_tube_set(TUBE8, VALUE_9);
                    LCD_driver_refresh();
                    break;
                default :break;
            }
        }
    }
}

void mcu_init(void)
{
    Clock_Configuration();  /*TIM4提供内部高速8M时钟，RTC模块提供32.768K外部低速时钟*/
    GPIO_Configuration();
    TIM4_Configuration();
    LCD_GLASS_Init();
}

