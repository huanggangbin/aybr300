#include "simple_protocol.h"
#define simple_protocol_get_pin_data(level) 
#define PACKET_MAX_LEN 100
#define PACKET_HEADER_LEN 2

static inline bool receive_byte(uint8 *data);

static Simple_protocol_state receive_state;
static Timing_type header_time;

u8 receive_buffer[24] = {0};

static u8 count = 0;
static u8 check_sum = 0;
static bool data_received_flag = FALSE;
typedef enum
{
    BIT0 = 1<<0,
    BIT1 = 1<<1,
    BIT2 = 1<<2,
    BIT3 = 1<<3,
    BIT4 = 1<<4,
    BIT5 = 1<<5,
    BIT6 = 1<<6,
    BIT7 = 1<<7,
}Bits;

void receive_deal(void)
{
    uint8 i;
    
    Simple_protocol_format * pbuf = (Simple_protocol_format *)receive_buffer;
    
    switch (receive_state.state)
    {
        case CLOCK_IDLE:
            if (pbuf->data[0])
            {
                for (i = 0; i < pbuf->length - 2; i++)
                    pbuf->data[i] = 0;
                pbuf->header = 0;
                pbuf->length = 0;
            }
            receive_state.state = CLOCK_HEADER;
            timing_set_counts(&header_time, 8);
            break;
        case CLOCK_HEADER: 
            if (timing_count_end(&header_time))
            {
                receive_state.state = FRAME_HEADER;
                receive_byte(&pbuf->header);         //�ڽ��յ�frame_header��һλ���ݵ�ʱ���ж�clock_header����
            }
            else
            {
                //ʱ�����ŵ�5ms�͵�ƽ�ж�ʧ��
                receive_state.state = CLOCK_IDLE;
            }
            break;
        case FRAME_HEADER: 
            if (receive_byte(&pbuf->header))          //��������ִ��8�Σ�ÿ�ν���һ��bit������
            {
                if (pbuf->header == 0x5a)
                {
                    receive_state.state = FRAME_LENGTH;
                }
                else
                {
                    //����ͷ���մ���
                    receive_state.state = CLOCK_IDLE;
                }
            }
            break;
        case FRAME_LENGTH: 
            if (receive_byte(&pbuf->length))          //��������ִ��8�Σ�ÿ�ν���һ��bit������
            {
                if (pbuf->length > 10)
                {
                    receive_state.state = FRAME_DATA;
                }
                else
                {
                    //���ݳ�����֤����
                    receive_state.state = CLOCK_IDLE;
                }
            }break;
        case FRAME_DATA: 
            if (receive_byte(&pbuf->data[count]))          //��������ִ��8�Σ�ÿ�ν���һ��bit������
                    count++;

            if (!(count < pbuf->length - 2))       //data�ĳ������ܳ��ȼ�2
            {
                receive_state.state = CHECKSUM;
                count = 0;
                
                //ֱ�Ӽ���check_sum
                for (i = 0; i < pbuf->length - 1; i++)
                check_sum += receive_buffer[i];
            
                if (check_sum == receive_buffer[pbuf->length - 1])
                    data_received_flag = TRUE;
                else
                    data_received_flag = FALSE;
                data_received_flag = TRUE;
                receive_state.state = CLOCK_IDLE;
            }
            break;
            
        default : 
            receive_state.state = CLOCK_IDLE;
            break;
    }
}

bool simple_protocol_data_received(void)
{
    bool ret;
    
    ret = data_received_flag;
    
    if (data_received_flag)
        data_received_flag = FALSE;
    
    return ret;
}

static inline bool receive_byte(uint8 *data)
{
    static uint8 bit = 0;

    if (READ_DATA_PIN_LEVEL()) 
    {
        switch(bit)
        {
            case 0: *data |= BIT0; break;
            case 1: *data |= BIT1; break;
            case 2: *data |= BIT2; break;
            case 3: *data |= BIT3; break;
            case 4: *data |= BIT4; break;
            case 5: *data |= BIT5; break;
            case 6: *data |= BIT6; break;
            case 7: *data |= BIT7; break;
        }
    }
    else 
    {
        switch(bit)
        {
            case 0: *data &= ~BIT0; break;
            case 1: *data &= ~BIT1; break;
            case 2: *data &= ~BIT2; break;
            case 3: *data &= ~BIT3; break;
            case 4: *data &= ~BIT4; break;
            case 5: *data &= ~BIT5; break;
            case 6: *data &= ~BIT6; break;
            case 7: *data &= ~BIT7; break;
        }
    }

    bit++;
    if (bit > 7)
    {
        bit = 0;
        return TRUE;
    }

    return FALSE;
}








