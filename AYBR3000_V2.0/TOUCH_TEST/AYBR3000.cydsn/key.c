/****************************************************************************
**    Filename    :
**    Project       :    ����R111�綯��
**    Date/Time :    2017-03-23
**    Author      :    huang gangbin
**    http              :    www.kuwe.com
**    mail              : 
*****************************************************************************/

#include "key.h"

static Keys keys[KEY_NUM];
static uint8 level_time[KEY_NUM] = {0};     //���������ܳ���256
static const uint8 delay_1500ms = 1500 / MODULE_CYCLE;
static const uint16 delay_10000ms = 10000 / MODULE_CYCLE;
void key_init(void)
{
    Key_index i;

    for (i = 0u; i < KEY_NUM; i++)
    {
        keys[i].current_level = LEVEL_LOW;
        keys[i].previous_level = LEVEL_LOW;
        keys[i].active_level = LEVEL_HIGH;
        keys[i].short_pressed = FALSE;
    }
}

Bool key_changed[KEY_NUM] = {0};

void key_scan(void)
{
    Key_index i;
    
    for (i = 0u; i < KEY_NUM; i++)
    {
        switch(i)
        {
            case KEY_DIAN_YUAN:          keys[i].current_level = PIN_DIAN_YUAN();        break;
            case KEY_FENG_NUAN:         keys[i].current_level = PIN_FENG_NUAN();   break;
            case KEY_WENDU_JIA:         keys[i].current_level = PIN_WENDU_JIA();   break;
            case KEY_WENDU_JIAN:        keys[i].current_level = PIN_WENDU_JIAN();   break;
            case KEY_XIN_FENG:           keys[i].current_level = PIN_XIN_FENG();      break;
            case KEY_QING_RUO:          keys[i].current_level = PIN_QING_RUO();        break;
            case KEY_HUAN_QI:           keys[i].current_level = PIN_HUAN_QI();   break;
            case KEY_XIN_FENG_QU_NUAN:     keys[i].current_level = PIN_XIN_FENG_QU_NUAN();   break;
            case KEY_DINGSHI_JIA:        keys[i].current_level = PIN_DINGSHI_JIA();   break;
            case KEY_DINGSHI_JIAN:        keys[i].current_level = PIN_DINGSHI_JIAN();      break;
            case KEY_BAI_DONG:          keys[i].current_level = PIN_BAI_DONG();        break;
            case KEY_ZHI_NENG:          keys[i].current_level = PIN_ZHI_NENG();   break;
            default : break;
        }
        
        if (keys[i].current_level != keys[i].previous_level)
        {
            if (keys[i].current_level != keys[i].active_level)
            {
                if (level_time[i] < delay_1500ms)
                {
                    keys[i].short_pressed = TRUE;     //��⵽���䵽��Ч��ƽ�ı���
                }
                else
                {
                    keys[i].long_press_freed = TRUE;
                }    
            }

            keys[i].previous_level = keys[i].current_level;
            key_changed[i] = TRUE;
        }
        else
        {
            if (keys[i].current_level == keys[i].active_level)        
            {
                if (level_time[i] > delay_1500ms)       //��Ч��ƽ����2000ms
                {
                    if (key_changed[i] == TRUE)
                    {
                        if (!keys[i].long_pressed)
                        {
                            keys[i].long_pressed = TRUE;           //��ʱ����2000ms,������Ч
                        }
                        key_changed[i] = FALSE;
                    }
                    
                    if (level_time[i] > delay_10000ms)
                    { 
                        keys[i].long_pressed = FALSE;     //��ʱ����10000ms,����Ϊ����ʧЧ
                    }
                    else
                        level_time[i]++; 
                }
                else
                    level_time[i]++;  
            } 
            else
                level_time[i] = 0;  
        }
    }
}
/*
    ��⵽�����̰�
*/
Bool key_is_short_pressed(Key_index i)
{
    Bool ret;
    
    ret = keys[i].short_pressed;

    if (keys[i].short_pressed)
        keys[i].short_pressed = FALSE;
    return ret;
}
/*
    ��⵽��������
*/
Bool key_is_long_pressed(Key_index i)
{
    Bool ret;
    
    ret = keys[i].long_pressed;
    if (keys[i].long_pressed)
    {
        keys[i].long_pressed = FALSE;
    }
    return ret;
}
/*
    ��⵽���������ͷ�
*/
Bool key_is_long_press_freed(Key_index i)
{
    Bool ret;
    ret = keys[i].long_press_freed;
    if (keys[i].long_press_freed)
    {
        keys[i].long_press_freed = FALSE;
    }
    return ret;
}
/*
    ��ȡ������ǰ�Ƿ���
*/
Bool key_is_pressing(Key_index i)
{
    return keys[i].current_level == keys[i].active_level;
}

