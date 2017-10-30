#ifndef _TIMING_H_
#define _TIMING_H_

#include "types.h"

//#pragma  pack(1)
typedef struct 
{    
    Bool  count_end;    
    uint16  old_count;    
    uint16  set_count;
}Timing_type;
//#pragma pack()

/*
**1ms�ж��е���
*/
extern inline void timing_count(void);
/*
**���ö�ʱ����,
*/
extern void timing_set_counts(Timing_type *pdata, uint16 set_count);
/*
**��ʱʱ�䵽
*/
extern Bool timing_count_end(Timing_type *pdata);
#endif

