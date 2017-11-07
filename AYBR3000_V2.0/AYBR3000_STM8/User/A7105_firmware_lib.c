/*********************************************************************
**    Device:    A7105_firmware_lib.c                              
**    File:    main.c                                                    
**                                                                    
**    Description:                                                     
**    This file is a sample code for your    reference.                    
**                                                                    
**    Copyright (C) 2008 AMICCOM Corp.                                
**                                                                    
*********************************************************************/
#include "A7105_firmware_lib.h"

/*********************************************************************
** RF ID code
*********************************************************************/
const uint8 ID_Tab[4] =
{
    0x54, 0x75, 0xC5, 0x2A
};

/*********************************************************************
**                                     NOTE                                     
**          THIS CONFIG TABLE    ONLY USE ON    RF CRYSTAL = 16MHz                 
*********************************************************************/
const uint8 parameters_Config[REG_NUMBER] =
{
    //    value  address    name                    note
    //    ----     ----    ----                    ----
    0x00, // 0x00    RESET register,            //д�㸴λ,���ó�ʼ��            
    //����״̬��־,FECУ��,CRCУ�� ,оƬʹ��, �ڲ�����ʹ��, ���໷ʹ��, TRXʹ��, ��/����־
    0x62, // 0x01    MODE register,        FIFOģʽ,����RXģʽ��(�Զ����RSSI, RF���ؾ�����Զ�ƫ��һ��IFƵ��)
    0x00, // 0x02    CALIBRATION    register,    only read, not use on config
    0x3F, // 0x03    FIFO1 register,           //64KB   FIFO�ڲ�����
    0x00, // 0x04    FIFO2 register,          //��easy FIFO, ��ʹ��segment FIFO
    0x00, // 0x05    FIFO register,            //���ó�ʼ��,���ڶ��еĶ�д,˳����BYTE0 -> BYTE7
    0x00, // 0x06    IDDATA register,        //���ó�ʼ��,������оƬд/��ID��,˳��byte 0 -> byte3
    0x00, // 0x07    RCOSC1 register,       //�����ڲ�ʹ��
    0x00, // 0x08    RCOSC2 register,       //�����ڲ�ʹ��
    0x00, // 0x09    RCOSC3 register,       //BBCKS1 BBCKS0, ��������Ϊ[00]  , �ڲ�������·��Ƶ��ѡ��Fsyck / 8
    0x00, // 0x0A    CKO    register,         //CKO�ܽ�ʱ���������
    0x01, // 0x0B    GIO1 register            //GIO1����ΪWTR����,ʹ��GIO1�ŵ����
    0x01, // 0x0C    GIO2 register            //GIO2����ΪWTR����,ʹ��GIO2�ŵ����
    0x05, // 0x0D    CLOCK register,         //�ⲿʱ��Դ,����ʱ��Դ,Fsyck = Fmclk / 2
    0x00, // 0x0E    DATARATE register,        //���ݴ�����������
    0x50, // 0x0F    PLL1 register,                 //Ƶ���趨= ��Ƶ + Ƶ�����*Ƶ����
    0x9E, // 0x10    PLL2 register,                 //
    0x4B, // 0x11    PLL3 register,                 //�Ƽ�ֵ,LO ��Ƶ������������
    0x00, // 0x12    PLL4 register,                 //Ƶ�ʲ���,֧�ֵھ��ȵ�ʯӢ����
    0x02, // 0x13    PLL5 register,                 //Ƶ�ʲ���,��ȡ����Ƶ��Ư��,�����趨Ƶ��
    0x16, // 0x14    TX1    register,               //Ƶ��ƫ�����ѡ���˲�ʹ��
    0x2B, // 0x15    TX2    register,                //
    0x12, // 0x16    DELAY1 register,             //һЩʱ����ʱ����
    0x00, // 0x17    DELAY2 register,                //
    0x62, // 0x18    RX register,                       // AIFʹ�������Զ���Ƶ(���ƺ��Ƶ��)ƫ��,ULSλ(�շ����ͽ�ɫ��������)
    0x80, // 0x19    RXGAIN1    register,           //
    0x80, // 0x1A    RXGAIN2    register,           �����ڲ�ʹ��
    0x00, // 0x1B    RXGAIN3    register,           �����ڲ�ʹ��
    0x0A, // 0x1C    RXGAIN4    register,           �����ڲ�ʹ��,��������0x0A
    0x32, // 0x1D    RSSI register,                     //�ز����CD��ֵ����,��ǰƵ���Ƿ�æµ
    0xC3, // 0x1E    ADC    register,                   //�����ź�ǿ��RSSI���
    0x0F, // 0x1F    CODE1 register,                  //CRCУ��,(7,4)���������,PN7���ݼ���,    FIFO�������,���ݰ���ʽ
    0x16, // 0x20    CODE2 register,                  //FIFO�������,ID, preamble���
    0x00, // 0x21    CODE3 register,                  //FIFO�������,���ݼ�����������
    0x00, // 0x22    IFCAL1 register,                  //IF filterУ�����
    0x00, // 0x23    IFCAL2 register,                  only read,  IF filter calibration deviation
    0x00, // 0x24    VCOCCAL    register,           //VCO currentУ��     
    0x00, // 0x25    VCOCAL1    register,           //VCO bankУ��
    0x3B, // 0x26    VCOCAL2    register,           //VCO bankУ��
    0x00, // 0x27    BATTERY    register,           //��ѹ������
    0x1F, // 0x28    TXTEST register,                //�����ź�����͵���ֵ����
    0x47, // 0x29    RXDEM1 register,              //preamble����8λ���ݵĵ���ƽ��ֵ
    0x80, // 0x2A    RXDEM2 register,              //������,������޸�ģʽֱ������ֵ�趨
    0x03, // 0x2B    CPC    register,                 //PLL��ɱ�����
    0x01, // 0x2C    CRYSTAL    register,          //�ڲ�����,��������Ϊ0x01
    0x45, // 0x2D    PLLTEST    register,          //�ڲ�����,��������Ϊ0x45
    0x18, // 0x2E    VCOTEST1 register,          //�ڲ�����,��������Ϊ0x18
    0x00, // 0x2F    VCOTEST2 register,          //�ڲ�����,��������Ϊ0x00
    0x01, // 0x30    IFAT register,                  //�ڲ�����,��������Ϊ0x01
    0x0F, // 0x31    RSCALE register,             //�ڲ�����,��������Ϊ0x0F
    0x00, // 0x32    FILTERTEST                   //�ڲ�����,��������Ϊ0x00
};
/*��1ms�ж��ж�ȡwtr��״̬*/
bool A7105_wtr_status = FALSE;

/*********************************************************************
**    static function Declaration
*********************************************************************/
static uint8 ByteRead(void);
static void ByteSend(uint8 data);
static inline void Wait_Bit_n_clear(uint8 reg_data, uint8 nbit);
static inline void SelVCOBand(uint8 vb1, uint8 vb2);
static inline void Error_State(void);

/************************************************************************
**    A7105_WriteReg
************************************************************************/
void A7105_WriteReg(A7105_REG addr,    uint8 dataByte)
{
    SCS_PIN_LOW();

    addr |= 0x00; //bit cmd=0,r/w=0�Ĵ�������, д

    ByteSend(addr);

    A7105_NOP();
    ByteSend(dataByte);
    
    SCS_PIN_HIGH();
}

/************************************************************************
**    A7105_ReadReg
************************************************************************/
uint8 A7105_ReadReg(uint8 addr)
{
    uint8 tmp;

    SCS_PIN_LOW();

    addr |= 0x40; //bit cmd=0,r/w=1�Ĵ�������,��
    ByteSend(addr);
    A7105_NOP();
    //read data
    tmp = ByteRead();
    
    SCS_PIN_HIGH();
    return tmp;
}

/*********************************************************************
** Strobe Command
*********************************************************************/
void StrobeCmd(A7105_CMD cmd)
{
    SCS_PIN_LOW();
    
    ByteSend(cmd);
    
    SCS_PIN_HIGH();
}

/************************************************************************
**    WriteID
************************************************************************/
void A7105_WriteID(void)
{
    uint8 i;
    uint8 addr;
    
    //send address 0x06, bit cmd=0, r/w=0
    addr = IDCODE_REG; 
    SCS_PIN_LOW();
    ByteSend(addr);
    for (i=0; i < 4; i++)
        ByteSend(ID_Tab[i]);
    SCS_PIN_HIGH();
}

/************************************************************************
**    Reset_RF
************************************************************************/
void A7105_Reset(void)
{
    //reset    RF chip
    A7105_WriteReg(MODE_REG, 0x00);    
}

/*********************************************************************
** A7105_Config
*********************************************************************/
void A7105_Config(void)
{
    uint8 i;
    //0x00 mode    register, for reset
    //0x05 fifo    data register
    //0x06 id code register
    //0x23 IF calibration II, only read
    //0x32 filter test register

    //����Ը��Ĵ�������ʼ��FIFOģʽ,����SPI
    //���ֲ���Ҫ��ʼ��������
    for (i=0x01; i<=0x04; i++)
        A7105_WriteReg(i, parameters_Config[i]);

    for (i=0x07; i<=0x22; i++)
        A7105_WriteReg(i, parameters_Config[i]);

    for (i=0x24; i<=0x31; i++)
        A7105_WriteReg(i, parameters_Config[i]);
    
}


/*********************************************************************
** SelVCOBand
*********************************************************************/
void SelVCOBand(uint8 vb1, uint8 vb2)
{
    uint8 diff1,diff2;

    if (vb1>=4)
        diff1 = vb1-4;
    else
        diff1 = 4-vb1;

    if (vb2>=4)
        diff2 = vb2-4;
    else
        diff2 = 4-vb2;

    if (diff1 == diff2 || diff1 > diff2)
        A7105_WriteReg(VCOCAL1_REG, (vb1 | 0x08));//manual setting vb1 value
    else
        A7105_WriteReg(VCOCAL1_REG, (vb2 | 0x08));//manual setting vb2 value
}

/*********************************************************************
** calibration
*********************************************************************/
void A7105_Calibration(void)
{
    uint8 tmp;
    uint8 fbcf;
    uint8 vb1,vbcf1;
    uint8 vb2,vbcf2;

    StrobeCmd(CMD_STBY); //calibration @STB    state

    //calibration IF procedure
    A7105_WriteReg(CALIBRATION_REG, 0x01);   
    Wait_Bit_n_clear(CALIBRATION_REG, 0x01);

    //for check
    tmp = A7105_ReadReg(IFCAL1_REG);
    //fb = tmp & 0x0F;   //���Ĵ���,��AFB��ֵ
    
    fbcf = (tmp >> 4) & 0x01;   //ȡ��FBCFλ

    if (fbcf == SET)
    {
        Error_State();
    }

    //calibration vcoc procedure
    A7105_WriteReg(VCOCCAL_REG, 0x13);    //manual    VCOC=3
    

    //CALIBRATIOIN VCOB procedure
    A7105_WriteReg(VCOCAL2_REG, 0x3B);    //VTL=3,    VTH=7   ������/��λ�ſ���ѹ
    //�����Ƶ���½���VCOBУ��
    A7105_WriteReg(PLL1_REG, 0);        //setting 2400MHz                F_offset = 0M hz
    A7105_WriteReg(CALIBRATION_REG, 0x02);   //ѡ��У��VCOB
    Wait_Bit_n_clear(CALIBRATION_REG, 0x02);    //�ȴ�VCOBУ�����

    //�����VCOB��У����
    tmp = A7105_ReadReg(VCOCAL1_REG);
    vb1 = tmp & 0x07;    //�Զ�У������ֵ
    vbcf1 = (tmp >> 3) & 0x01;    //У���Ƿ�ɹ�
    //dvt1 = (tmp >> 4) & 0x03;   //digital VCO tuning voltage output

    //����Ƶ�ʽ���VCOCУ��
    A7105_WriteReg(PLL1_REG, 160); //setting 2480MHz     160 * 500K = 80M
    A7105_WriteReg(CALIBRATION_REG, 0x02);
    Wait_Bit_n_clear(CALIBRATION_REG, 0x02);

    tmp = A7105_ReadReg(VCOCAL1_REG);
    vb2 = tmp & 0x07;
    vbcf2 = (tmp >> 3) & 0x01;
    //dvt2 = (tmp >> 4) & 0x03;

    SelVCOBand(vb1, vb2);

    if (vbcf1 == SET && vbcf2 == SET)   //�����ζ�ʧ��
    {
        Error_State();
        while(1);
    }
}


/************************************************************************
**    ByteSend
************************************************************************/
static void ByteSend(uint8 data)
{
    uint8 i;

    for(i = 0; i < 8; i++)
    {
        //�ȷ������ݵ������Чλ
        if(data & 0x80)                 
            SDIO_PIN_HIGH();
        else
            SDIO_PIN_LOW();

        A7105_NOP();
        SCK_PIN_HIGH();
        A7105_NOP();
        SCK_PIN_LOW();
        data = data << 1;
    }
}
//**********************************************************************
//    WriteFIFO
//**********************************************************************
void WriteFIFO(uint8 length, uint8 pbuf[])
{
    uint8 i;
    
    A7105_WriteReg( FIFO1_REG, length-1);    // set FIFO length
    
    SCS_PIN_LOW();
    ByteSend(FIFO_REG);  //д0x05h�����ַ��data_register
    for(i=0; i <length; i++)
        ByteSend(pbuf[i]);
    SCS_PIN_HIGH();
}

//**********************************************************************
//    ByteRead
//**********************************************************************
static uint8 ByteRead(void)
{
    uint8 i,tmp = 0;
    
    SDIO_PIN_HIGH(); //sdio pull high

    SDIO_DDR_IN();

    
    for(i = 0; i < 8; i++)
    {
        if(SDIO_IN())    
            tmp = (tmp << 1) | 0x01;
        else
            tmp = tmp << 1;
            
        SCK_PIN_HIGH();//�����ض�ȡ����
        A7105_NOP();
        SCK_PIN_LOW();//RF IC����SCK�½���,�����ݷŵ�SDIO
    }
    SDIO_DDR_OUT();
        
    SDIO_PIN_LOW();
    return tmp;
}

/**********************************************************************
**    ReadFIFO
**********************************************************************/
void ReadFIFO(uint8 length, uint8 pbuf[])
{
    uint8 i;

    SCS_PIN_LOW();
    
    ByteSend(FIFO_REG | 0x40);      //0x40�Ƕ�ȡ��־
    for(i = 0; i <length; i++)
        pbuf[i] = ByteRead();
        
    SCS_PIN_HIGH();
}
/************************************************************************
**   uint8 A7105_read_wtr(void)
************************************************************************/
uint8 A7105_read_wtr(void)
{
    return A7105_wtr_status;
}
/************************************************************************
**   void update_wtr(void)
************************************************************************/
void A7105_update_wtr(bool value)
{
    A7105_wtr_status = value;
}

/************************************************************************
**   GIO1�����½����жϿ���
************************************************************************/
void A7105_GIOx_interrupt_switch(Switch s)
{
    if (s == ON)
        GIOx_interrupt_on();
    else
        GIOx_interrupt_off();
}

/************************************************************************
**    WaitBit_n_clear()
************************************************************************/
void Wait_Bit_n_clear(uint8 reg, uint8 nbit)
{
    while(A7105_ReadReg(reg) & nbit) { 
        ; 
    }
}
/*********************************************************************
** Error_State
*********************************************************************/
static inline void Error_State(void)
{
    /*��Ӵ�����ʾ*/
    /*��Ӵ�����*/
    while (TRUE) {
        ;
    }
}

