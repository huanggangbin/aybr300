/*********************************************************************
**    Device:    A7105                                                    
**    File:    A7105_driver.c                                                  
**                                                                    
**    Description:                                                     
**    This file is a sample code for your    reference.                    
**                                                                    
**    Copyright (C) 2008 AMICCOM Corp.                                
**                                                                    
*********************************************************************/

#include "A7105_driver.h"
#include <GIO1_ISR.h>

static Bool buffer_length_ok(uint8 length);
static Bool CRC_check_ok(void);

/*********************************************************************
* ģ���ʼ������
*********************************************************************/
void A7105_init(void)
{
    SDIO_DDR_OUT();
    SCS_PIN_HIGH();
    SCK_PIN_LOW();
    SDIO_PIN_HIGH();
   
    A7105_Reset();        //reset A7105 RF chip
    A7105_WriteID();    //write ID code
    A7105_Config();        //config A7105 chip
    A7105_Calibration();        //calibration IF,vco, vcoc
    
    StrobeCmd(CMD_STBY);

    A7105_WriteReg(TXTEST_REG, 0x17 );                  //    TX power = 0dBm
    A7105_WriteReg(DATARATE_REG, 9);                   //    Data rate = 50K
    A7105_WriteReg(MODECTRL_REG, 0x62);               //    FIFO mode
    A7105_WriteReg(PLL1_REG, 99 );                            // set radio channel,�����ŵ�Ƶ��
    A7105_WriteReg(CODE1_REG, 0x0F);                       //ʹ��CRCУ��
    /*����ȴ�֡��ʽȷ��������payload length*/
    A7105_WriteReg(FIFO1_REG, 20-1); // set FIFO payload length
}

/*********************************************************************
** ��������
*********************************************************************/
void send_data_by_A7105(uint8 buffer_length, uint8 send_buffer[]) 
{
    if (buffer_length_ok(buffer_length) && send_buffer != NULL)
    {
        StrobeCmd(CMD_TFR);
        WriteFIFO(buffer_length, send_buffer); 
        
        StrobeCmd(CMD_STBY);   //����ǰ��RX״̬,���޷�ֱ���л���TX״̬��
        StrobeCmd(CMD_TX);
        while(RF_WTR());// ���������,A7105���Ϳ�ʼ����,���ͽ�������
        //������ɻ��Զ��ص�֮ǰ��״̬StandBy
    }
    else
    {
    }
}

Bool receive_data_by_A7105(uint8 buffer_length, uint8 receive_buffer[])
{
    Bool ret = FALSE;
    
    if (buffer_length_ok(buffer_length) && receive_buffer != NULL)
    {
GIO1_ClearInterrupt();
GIO1_ISR_ClearPending();
GIO1_ISR_Enable();
        StrobeCmd(CMD_RX);
        if (A7105_read_wtr())          // ���������,A7105���տ�ʼ���߽��ս�������
        {
            A7105_update_wtr(FALSE);
GIO1_ISR_Disable();
            if (CRC_check_ok())
            {
                ReadFIFO(buffer_length, receive_buffer);
                StrobeCmd(CMD_RFR);
                ret = TRUE;

            }
            else
            {
                
            }
        }
        //���չ�payload ���Ⱥ�,���Զ���RX״̬���ص�STANDBY״̬
    }
    else
    {
    }

    return ret;
}

void A7105_sleep(void)
{
    StrobeCmd(CMD_SLEEP);
}

void A7105_wakeup(void)
{
    StrobeCmd(CMD_STBY);
}

static Bool buffer_length_ok(uint8 length)
{
    if (length >= 0 && length <= MAX_BUFFER_SIZE)
        return TRUE;
    else
        return FALSE;
}

static Bool CRC_check_ok(void)
{
    uint8 temp;
    
    temp = A7105_ReadReg(MODE_REG);
    
    if (temp & 0x20)
        return FALSE;
    else
        return TRUE;
}

