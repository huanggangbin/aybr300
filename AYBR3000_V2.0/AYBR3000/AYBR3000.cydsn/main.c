/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include "project.h"
#include "timing.h"
#include "app.h"
#include "key.h"
#include "simple_protocol.h"
#include "task_manager.h"

CY_ISR_PROTO(time_1ms_Interrupt);

int main(void)
{
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    
    CyGlobalIntEnable; /* Enable global interrupts. */
    
    key_init();
    simple_protocol_init();
    task_init();
    app_init();
    Timer_1_Start();  //开定时器
    time_1ms_ISR_StartEx(time_1ms_Interrupt);      //自定义中断服务函数
    key_touch_Start(); /* Initialize Component */
    key_touch_ScanAllWidgets(); /* Scan all widgets */
    
    task_add(key_main, 10);      
    task_add(simple_protocol_process, 1);
    for(;;)
    {
        //CySysWdtIsr();   //feed dog
        /* Do this only when a scan is done */
        if(key_touch_NOT_BUSY == key_touch_IsBusy()) 
        {
            key_touch_ProcessAllWidgets(); 
            task_main();
            key_touch_ScanAllWidgets(); 
        } 
        /* Place your application code here. */
        task_main();
    }
    
}

CY_ISR(time_1ms_Interrupt)
{
    task_1ms_updater();
    timing_count();
    Timer_1_ClearInterrupt(Timer_1_INTR_MASK_TC);
}
/*[] END OF FILE */

