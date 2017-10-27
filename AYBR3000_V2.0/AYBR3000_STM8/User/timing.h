#ifndef _TIMING_H_
#define _TIMING_H_
#include "stm8l15x.h"
#include "types.h"

typedef struct 
{    
    bool  count_end;    
    uint16  old_count;    
    uint16  set_count;
}Timing_type;

extern uint16  counter;
/*
**1ms�ж��е���
*/
extern inline void timing_count(void);
/*
**���ö�ʱ����,
*/
extern void timing_set_counts(Timing_type *pdata, uint16 set_count);
/*
**��ʱʱ�䵽?
*/
extern bool timing_count_end(Timing_type *pdata);
#endif

