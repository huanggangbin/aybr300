#include "timing.h"

static uint16 counter = 0;
static uint16 timing_get_count(void);
/*
**1ms����һ��
*/
inline void timing_count(void)
{
    counter++;
}
/*
**��ȡcounter��ǰֵ
*/
static uint16 timing_get_count(void)
{    
    return counter;
}

/*
**���ö�ʱ����,
*/
void timing_set_counts(Timing_type *pdata, uint16 set_count)
{   
    pdata->old_count = timing_get_count();   
    pdata->set_count = set_count;    
    pdata->count_end = FALSE;
}

/*
**��ʱʱ�䵽
*/
Bool timing_count_end(Timing_type *pdata)
{   
    uint16 temp = 0;
    if ((pdata->count_end) == FALSE)    
    {        
        temp = timing_get_count() - (pdata->old_count);
        if (temp > (pdata->set_count))        
        {            
            pdata->count_end  = TRUE;       
        }          
    }   
    return (pdata->count_end);
}
