#ifndef INCLUDED_CYFITTER_H
#define INCLUDED_CYFITTER_H
#include "cydevice_trm.h"

/* Clock_1 */
#define Clock_1__CTRL_REGISTER CYREG_PERI_PCLK_CTL3
#define Clock_1__DIV_ID 0x00000041u
#define Clock_1__DIV_REGISTER CYREG_PERI_DIV_16_CTL1
#define Clock_1__PA_DIV_ID 0x000000FFu

/* Timer_1_cy_m0s8_tcpwm_1 */
#define Timer_1_cy_m0s8_tcpwm_1__CC CYREG_TCPWM_CNT0_CC
#define Timer_1_cy_m0s8_tcpwm_1__CC_BUFF CYREG_TCPWM_CNT0_CC_BUFF
#define Timer_1_cy_m0s8_tcpwm_1__COUNTER CYREG_TCPWM_CNT0_COUNTER
#define Timer_1_cy_m0s8_tcpwm_1__CTRL CYREG_TCPWM_CNT0_CTRL
#define Timer_1_cy_m0s8_tcpwm_1__INTR CYREG_TCPWM_CNT0_INTR
#define Timer_1_cy_m0s8_tcpwm_1__INTR_MASK CYREG_TCPWM_CNT0_INTR_MASK
#define Timer_1_cy_m0s8_tcpwm_1__INTR_MASKED CYREG_TCPWM_CNT0_INTR_MASKED
#define Timer_1_cy_m0s8_tcpwm_1__INTR_SET CYREG_TCPWM_CNT0_INTR_SET
#define Timer_1_cy_m0s8_tcpwm_1__PERIOD CYREG_TCPWM_CNT0_PERIOD
#define Timer_1_cy_m0s8_tcpwm_1__PERIOD_BUFF CYREG_TCPWM_CNT0_PERIOD_BUFF
#define Timer_1_cy_m0s8_tcpwm_1__STATUS CYREG_TCPWM_CNT0_STATUS
#define Timer_1_cy_m0s8_tcpwm_1__TCPWM_CMD CYREG_TCPWM_CMD
#define Timer_1_cy_m0s8_tcpwm_1__TCPWM_CMDCAPTURE_MASK 0x01u
#define Timer_1_cy_m0s8_tcpwm_1__TCPWM_CMDCAPTURE_SHIFT 0u
#define Timer_1_cy_m0s8_tcpwm_1__TCPWM_CMDRELOAD_MASK 0x100u
#define Timer_1_cy_m0s8_tcpwm_1__TCPWM_CMDRELOAD_SHIFT 8u
#define Timer_1_cy_m0s8_tcpwm_1__TCPWM_CMDSTART_MASK 0x1000000u
#define Timer_1_cy_m0s8_tcpwm_1__TCPWM_CMDSTART_SHIFT 24u
#define Timer_1_cy_m0s8_tcpwm_1__TCPWM_CMDSTOP_MASK 0x10000u
#define Timer_1_cy_m0s8_tcpwm_1__TCPWM_CMDSTOP_SHIFT 16u
#define Timer_1_cy_m0s8_tcpwm_1__TCPWM_CTRL CYREG_TCPWM_CTRL
#define Timer_1_cy_m0s8_tcpwm_1__TCPWM_CTRL_MASK 0x01u
#define Timer_1_cy_m0s8_tcpwm_1__TCPWM_CTRL_SHIFT 0u
#define Timer_1_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE CYREG_TCPWM_INTR_CAUSE
#define Timer_1_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE_MASK 0x01u
#define Timer_1_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE_SHIFT 0u
#define Timer_1_cy_m0s8_tcpwm_1__TCPWM_NUMBER 0u
#define Timer_1_cy_m0s8_tcpwm_1__TR_CTRL0 CYREG_TCPWM_CNT0_TR_CTRL0
#define Timer_1_cy_m0s8_tcpwm_1__TR_CTRL1 CYREG_TCPWM_CNT0_TR_CTRL1
#define Timer_1_cy_m0s8_tcpwm_1__TR_CTRL2 CYREG_TCPWM_CNT0_TR_CTRL2

/* WAKE_UP */
#define WAKE_UP__0__DR CYREG_GPIO_PRT2_DR
#define WAKE_UP__0__DR_CLR CYREG_GPIO_PRT2_DR_CLR
#define WAKE_UP__0__DR_INV CYREG_GPIO_PRT2_DR_INV
#define WAKE_UP__0__DR_SET CYREG_GPIO_PRT2_DR_SET
#define WAKE_UP__0__HSIOM CYREG_HSIOM_PORT_SEL2
#define WAKE_UP__0__HSIOM_MASK 0x000000F0u
#define WAKE_UP__0__HSIOM_SHIFT 4u
#define WAKE_UP__0__INTCFG CYREG_GPIO_PRT2_INTR_CFG
#define WAKE_UP__0__INTR CYREG_GPIO_PRT2_INTR
#define WAKE_UP__0__INTR_CFG CYREG_GPIO_PRT2_INTR_CFG
#define WAKE_UP__0__INTSTAT CYREG_GPIO_PRT2_INTR
#define WAKE_UP__0__MASK 0x02u
#define WAKE_UP__0__PC CYREG_GPIO_PRT2_PC
#define WAKE_UP__0__PC2 CYREG_GPIO_PRT2_PC2
#define WAKE_UP__0__PORT 2u
#define WAKE_UP__0__PS CYREG_GPIO_PRT2_PS
#define WAKE_UP__0__SHIFT 1u
#define WAKE_UP__DR CYREG_GPIO_PRT2_DR
#define WAKE_UP__DR_CLR CYREG_GPIO_PRT2_DR_CLR
#define WAKE_UP__DR_INV CYREG_GPIO_PRT2_DR_INV
#define WAKE_UP__DR_SET CYREG_GPIO_PRT2_DR_SET
#define WAKE_UP__INTCFG CYREG_GPIO_PRT2_INTR_CFG
#define WAKE_UP__INTR CYREG_GPIO_PRT2_INTR
#define WAKE_UP__INTR_CFG CYREG_GPIO_PRT2_INTR_CFG
#define WAKE_UP__INTSTAT CYREG_GPIO_PRT2_INTR
#define WAKE_UP__MASK 0x02u
#define WAKE_UP__PC CYREG_GPIO_PRT2_PC
#define WAKE_UP__PC2 CYREG_GPIO_PRT2_PC2
#define WAKE_UP__PORT 2u
#define WAKE_UP__PS CYREG_GPIO_PRT2_PS
#define WAKE_UP__SHIFT 1u

/* isr_wdt */
#define isr_wdt__INTC_CLR_EN_REG CYREG_CM0P_ICER
#define isr_wdt__INTC_CLR_PD_REG CYREG_CM0P_ICPR
#define isr_wdt__INTC_MASK 0x40u
#define isr_wdt__INTC_NUMBER 6u
#define isr_wdt__INTC_PRIOR_MASK 0xC00000u
#define isr_wdt__INTC_PRIOR_NUM 3u
#define isr_wdt__INTC_PRIOR_REG CYREG_CM0P_IPR1
#define isr_wdt__INTC_SET_EN_REG CYREG_CM0P_ISER
#define isr_wdt__INTC_SET_PD_REG CYREG_CM0P_ISPR

/* key_touch_Cmod */
#define key_touch_Cmod__0__DR CYREG_GPIO_PRT4_DR
#define key_touch_Cmod__0__DR_CLR CYREG_GPIO_PRT4_DR_CLR
#define key_touch_Cmod__0__DR_INV CYREG_GPIO_PRT4_DR_INV
#define key_touch_Cmod__0__DR_SET CYREG_GPIO_PRT4_DR_SET
#define key_touch_Cmod__0__HSIOM CYREG_HSIOM_PORT_SEL4
#define key_touch_Cmod__0__HSIOM_MASK 0x00000F00u
#define key_touch_Cmod__0__HSIOM_SHIFT 8u
#define key_touch_Cmod__0__INTCFG CYREG_GPIO_PRT4_INTR_CFG
#define key_touch_Cmod__0__INTR CYREG_GPIO_PRT4_INTR
#define key_touch_Cmod__0__INTR_CFG CYREG_GPIO_PRT4_INTR_CFG
#define key_touch_Cmod__0__INTSTAT CYREG_GPIO_PRT4_INTR
#define key_touch_Cmod__0__MASK 0x04u
#define key_touch_Cmod__0__PC CYREG_GPIO_PRT4_PC
#define key_touch_Cmod__0__PC2 CYREG_GPIO_PRT4_PC2
#define key_touch_Cmod__0__PORT 4u
#define key_touch_Cmod__0__PS CYREG_GPIO_PRT4_PS
#define key_touch_Cmod__0__SHIFT 2u
#define key_touch_Cmod__Cmod__DR CYREG_GPIO_PRT4_DR
#define key_touch_Cmod__Cmod__DR_CLR CYREG_GPIO_PRT4_DR_CLR
#define key_touch_Cmod__Cmod__DR_INV CYREG_GPIO_PRT4_DR_INV
#define key_touch_Cmod__Cmod__DR_SET CYREG_GPIO_PRT4_DR_SET
#define key_touch_Cmod__Cmod__INTCFG CYREG_GPIO_PRT4_INTR_CFG
#define key_touch_Cmod__Cmod__INTR CYREG_GPIO_PRT4_INTR
#define key_touch_Cmod__Cmod__INTR_CFG CYREG_GPIO_PRT4_INTR_CFG
#define key_touch_Cmod__Cmod__INTSTAT CYREG_GPIO_PRT4_INTR
#define key_touch_Cmod__Cmod__MASK 0x04u
#define key_touch_Cmod__Cmod__PC CYREG_GPIO_PRT4_PC
#define key_touch_Cmod__Cmod__PC2 CYREG_GPIO_PRT4_PC2
#define key_touch_Cmod__Cmod__PORT 4u
#define key_touch_Cmod__Cmod__PS CYREG_GPIO_PRT4_PS
#define key_touch_Cmod__Cmod__SHIFT 2u
#define key_touch_Cmod__DR CYREG_GPIO_PRT4_DR
#define key_touch_Cmod__DR_CLR CYREG_GPIO_PRT4_DR_CLR
#define key_touch_Cmod__DR_INV CYREG_GPIO_PRT4_DR_INV
#define key_touch_Cmod__DR_SET CYREG_GPIO_PRT4_DR_SET
#define key_touch_Cmod__INTCFG CYREG_GPIO_PRT4_INTR_CFG
#define key_touch_Cmod__INTR CYREG_GPIO_PRT4_INTR
#define key_touch_Cmod__INTR_CFG CYREG_GPIO_PRT4_INTR_CFG
#define key_touch_Cmod__INTSTAT CYREG_GPIO_PRT4_INTR
#define key_touch_Cmod__MASK 0x04u
#define key_touch_Cmod__PC CYREG_GPIO_PRT4_PC
#define key_touch_Cmod__PC2 CYREG_GPIO_PRT4_PC2
#define key_touch_Cmod__PORT 4u
#define key_touch_Cmod__PS CYREG_GPIO_PRT4_PS
#define key_touch_Cmod__SHIFT 2u

/* key_touch_CSD */
#define key_touch_CSD__ADC_CTL CYREG_CSD_ADC_CTL
#define key_touch_CSD__CMOD_PAD 1u
#define key_touch_CSD__CSD_CONFIG CYREG_CSD_CONFIG
#define key_touch_CSD__CSD_INTR CYREG_CSD_INTR
#define key_touch_CSD__CSD_INTR_SET CYREG_CSD_INTR_SET
#define key_touch_CSD__CSD_NUMBER 0u
#define key_touch_CSD__CSD_STATUS CYREG_CSD_STATUS
#define key_touch_CSD__CSDCMP CYREG_CSD_CSDCMP
#define key_touch_CSD__CSH_TANK_PAD 2u
#define key_touch_CSD__CSHIELD_PAD 4u
#define key_touch_CSD__DEDICATED_IO key_touch_CSD__CMOD_PAD
#define key_touch_CSD__HSCMP CYREG_CSD_HSCMP
#define key_touch_CSD__INTR_MASK CYREG_CSD_INTR_MASK
#define key_touch_CSD__REFGEN CYREG_CSD_REFGEN
#define key_touch_CSD__RESULT_VAL1 CYREG_CSD_RESULT_VAL1
#define key_touch_CSD__RESULT_VAL2 CYREG_CSD_RESULT_VAL2
#define key_touch_CSD__SENSE_DUTY CYREG_CSD_SENSE_DUTY
#define key_touch_CSD__SENSE_PERIOD CYREG_CSD_SENSE_PERIOD
#define key_touch_CSD__SEQ_INIT_CNT CYREG_CSD_SEQ_INIT_CNT
#define key_touch_CSD__SEQ_NORM_CNT CYREG_CSD_SEQ_NORM_CNT
#define key_touch_CSD__SEQ_START CYREG_CSD_SEQ_START
#define key_touch_CSD__SEQ_TIME CYREG_CSD_SEQ_TIME
#define key_touch_CSD__SW_AMUXBUF_SEL CYREG_CSD_SW_AMUXBUF_SEL
#define key_touch_CSD__SW_BYP_SEL CYREG_CSD_SW_BYP_SEL
#define key_touch_CSD__SW_CMP_N_SEL CYREG_CSD_SW_CMP_N_SEL
#define key_touch_CSD__SW_CMP_P_SEL CYREG_CSD_SW_CMP_P_SEL
#define key_touch_CSD__SW_DSI_SEL CYREG_CSD_SW_DSI_SEL
#define key_touch_CSD__SW_FW_MOD_SEL CYREG_CSD_SW_FW_MOD_SEL
#define key_touch_CSD__SW_FW_TANK_SEL CYREG_CSD_SW_FW_TANK_SEL
#define key_touch_CSD__SW_HS_N_SEL CYREG_CSD_SW_HS_N_SEL
#define key_touch_CSD__SW_HS_P_SEL CYREG_CSD_SW_HS_P_SEL
#define key_touch_CSD__SW_REFGEN_SEL CYREG_CSD_SW_REFGEN_SEL
#define key_touch_CSD__SW_RES CYREG_CSD_SW_RES
#define key_touch_CSD__SW_SHIELD_SEL CYREG_CSD_SW_SHIELD_SEL

/* key_touch_IDACComp */
#define key_touch_IDACComp__CONFIG CYREG_CSD_CONFIG
#define key_touch_IDACComp__IDAC CYREG_CSD_IDACB
#define key_touch_IDACComp__POSITION 1u

/* key_touch_IDACMod */
#define key_touch_IDACMod__CONFIG CYREG_CSD_CONFIG
#define key_touch_IDACMod__IDAC CYREG_CSD_IDACA
#define key_touch_IDACMod__POSITION 0u

/* key_touch_ISR */
#define key_touch_ISR__INTC_CLR_EN_REG CYREG_CM0P_ICER
#define key_touch_ISR__INTC_CLR_PD_REG CYREG_CM0P_ICPR
#define key_touch_ISR__INTC_MASK 0x400u
#define key_touch_ISR__INTC_NUMBER 10u
#define key_touch_ISR__INTC_PRIOR_MASK 0xC00000u
#define key_touch_ISR__INTC_PRIOR_NUM 3u
#define key_touch_ISR__INTC_PRIOR_REG CYREG_CM0P_IPR2
#define key_touch_ISR__INTC_SET_EN_REG CYREG_CM0P_ISER
#define key_touch_ISR__INTC_SET_PD_REG CYREG_CM0P_ISPR

/* key_touch_ModClk */
#define key_touch_ModClk__CTRL_REGISTER CYREG_PERI_PCLK_CTL2
#define key_touch_ModClk__DIV_ID 0x00000040u
#define key_touch_ModClk__DIV_REGISTER CYREG_PERI_DIV_16_CTL0
#define key_touch_ModClk__PA_DIV_ID 0x000000FFu

/* key_touch_Sns */
#define key_touch_Sns__0__DR CYREG_GPIO_PRT0_DR
#define key_touch_Sns__0__DR_CLR CYREG_GPIO_PRT0_DR_CLR
#define key_touch_Sns__0__DR_INV CYREG_GPIO_PRT0_DR_INV
#define key_touch_Sns__0__DR_SET CYREG_GPIO_PRT0_DR_SET
#define key_touch_Sns__0__HSIOM CYREG_HSIOM_PORT_SEL0
#define key_touch_Sns__0__HSIOM_MASK 0x0000000Fu
#define key_touch_Sns__0__HSIOM_SHIFT 0u
#define key_touch_Sns__0__INTCFG CYREG_GPIO_PRT0_INTR_CFG
#define key_touch_Sns__0__INTR CYREG_GPIO_PRT0_INTR
#define key_touch_Sns__0__INTR_CFG CYREG_GPIO_PRT0_INTR_CFG
#define key_touch_Sns__0__INTSTAT CYREG_GPIO_PRT0_INTR
#define key_touch_Sns__0__MASK 0x01u
#define key_touch_Sns__0__PC CYREG_GPIO_PRT0_PC
#define key_touch_Sns__0__PC2 CYREG_GPIO_PRT0_PC2
#define key_touch_Sns__0__PORT 0u
#define key_touch_Sns__0__PS CYREG_GPIO_PRT0_PS
#define key_touch_Sns__0__SHIFT 0u
#define key_touch_Sns__1__DR CYREG_GPIO_PRT0_DR
#define key_touch_Sns__1__DR_CLR CYREG_GPIO_PRT0_DR_CLR
#define key_touch_Sns__1__DR_INV CYREG_GPIO_PRT0_DR_INV
#define key_touch_Sns__1__DR_SET CYREG_GPIO_PRT0_DR_SET
#define key_touch_Sns__1__HSIOM CYREG_HSIOM_PORT_SEL0
#define key_touch_Sns__1__HSIOM_MASK 0x000000F0u
#define key_touch_Sns__1__HSIOM_SHIFT 4u
#define key_touch_Sns__1__INTCFG CYREG_GPIO_PRT0_INTR_CFG
#define key_touch_Sns__1__INTR CYREG_GPIO_PRT0_INTR
#define key_touch_Sns__1__INTR_CFG CYREG_GPIO_PRT0_INTR_CFG
#define key_touch_Sns__1__INTSTAT CYREG_GPIO_PRT0_INTR
#define key_touch_Sns__1__MASK 0x02u
#define key_touch_Sns__1__PC CYREG_GPIO_PRT0_PC
#define key_touch_Sns__1__PC2 CYREG_GPIO_PRT0_PC2
#define key_touch_Sns__1__PORT 0u
#define key_touch_Sns__1__PS CYREG_GPIO_PRT0_PS
#define key_touch_Sns__1__SHIFT 1u
#define key_touch_Sns__10__DR CYREG_GPIO_PRT2_DR
#define key_touch_Sns__10__DR_CLR CYREG_GPIO_PRT2_DR_CLR
#define key_touch_Sns__10__DR_INV CYREG_GPIO_PRT2_DR_INV
#define key_touch_Sns__10__DR_SET CYREG_GPIO_PRT2_DR_SET
#define key_touch_Sns__10__HSIOM CYREG_HSIOM_PORT_SEL2
#define key_touch_Sns__10__HSIOM_MASK 0xF0000000u
#define key_touch_Sns__10__HSIOM_SHIFT 28u
#define key_touch_Sns__10__INTCFG CYREG_GPIO_PRT2_INTR_CFG
#define key_touch_Sns__10__INTR CYREG_GPIO_PRT2_INTR
#define key_touch_Sns__10__INTR_CFG CYREG_GPIO_PRT2_INTR_CFG
#define key_touch_Sns__10__INTSTAT CYREG_GPIO_PRT2_INTR
#define key_touch_Sns__10__MASK 0x80u
#define key_touch_Sns__10__PC CYREG_GPIO_PRT2_PC
#define key_touch_Sns__10__PC2 CYREG_GPIO_PRT2_PC2
#define key_touch_Sns__10__PORT 2u
#define key_touch_Sns__10__PS CYREG_GPIO_PRT2_PS
#define key_touch_Sns__10__SHIFT 7u
#define key_touch_Sns__11__DR CYREG_GPIO_PRT3_DR
#define key_touch_Sns__11__DR_CLR CYREG_GPIO_PRT3_DR_CLR
#define key_touch_Sns__11__DR_INV CYREG_GPIO_PRT3_DR_INV
#define key_touch_Sns__11__DR_SET CYREG_GPIO_PRT3_DR_SET
#define key_touch_Sns__11__HSIOM CYREG_HSIOM_PORT_SEL3
#define key_touch_Sns__11__HSIOM_MASK 0x0000000Fu
#define key_touch_Sns__11__HSIOM_SHIFT 0u
#define key_touch_Sns__11__INTCFG CYREG_GPIO_PRT3_INTR_CFG
#define key_touch_Sns__11__INTR CYREG_GPIO_PRT3_INTR
#define key_touch_Sns__11__INTR_CFG CYREG_GPIO_PRT3_INTR_CFG
#define key_touch_Sns__11__INTSTAT CYREG_GPIO_PRT3_INTR
#define key_touch_Sns__11__MASK 0x01u
#define key_touch_Sns__11__PC CYREG_GPIO_PRT3_PC
#define key_touch_Sns__11__PC2 CYREG_GPIO_PRT3_PC2
#define key_touch_Sns__11__PORT 3u
#define key_touch_Sns__11__PS CYREG_GPIO_PRT3_PS
#define key_touch_Sns__11__SHIFT 0u
#define key_touch_Sns__2__DR CYREG_GPIO_PRT0_DR
#define key_touch_Sns__2__DR_CLR CYREG_GPIO_PRT0_DR_CLR
#define key_touch_Sns__2__DR_INV CYREG_GPIO_PRT0_DR_INV
#define key_touch_Sns__2__DR_SET CYREG_GPIO_PRT0_DR_SET
#define key_touch_Sns__2__HSIOM CYREG_HSIOM_PORT_SEL0
#define key_touch_Sns__2__HSIOM_MASK 0x00000F00u
#define key_touch_Sns__2__HSIOM_SHIFT 8u
#define key_touch_Sns__2__INTCFG CYREG_GPIO_PRT0_INTR_CFG
#define key_touch_Sns__2__INTR CYREG_GPIO_PRT0_INTR
#define key_touch_Sns__2__INTR_CFG CYREG_GPIO_PRT0_INTR_CFG
#define key_touch_Sns__2__INTSTAT CYREG_GPIO_PRT0_INTR
#define key_touch_Sns__2__MASK 0x04u
#define key_touch_Sns__2__PC CYREG_GPIO_PRT0_PC
#define key_touch_Sns__2__PC2 CYREG_GPIO_PRT0_PC2
#define key_touch_Sns__2__PORT 0u
#define key_touch_Sns__2__PS CYREG_GPIO_PRT0_PS
#define key_touch_Sns__2__SHIFT 2u
#define key_touch_Sns__3__DR CYREG_GPIO_PRT0_DR
#define key_touch_Sns__3__DR_CLR CYREG_GPIO_PRT0_DR_CLR
#define key_touch_Sns__3__DR_INV CYREG_GPIO_PRT0_DR_INV
#define key_touch_Sns__3__DR_SET CYREG_GPIO_PRT0_DR_SET
#define key_touch_Sns__3__HSIOM CYREG_HSIOM_PORT_SEL0
#define key_touch_Sns__3__HSIOM_MASK 0x0000F000u
#define key_touch_Sns__3__HSIOM_SHIFT 12u
#define key_touch_Sns__3__INTCFG CYREG_GPIO_PRT0_INTR_CFG
#define key_touch_Sns__3__INTR CYREG_GPIO_PRT0_INTR
#define key_touch_Sns__3__INTR_CFG CYREG_GPIO_PRT0_INTR_CFG
#define key_touch_Sns__3__INTSTAT CYREG_GPIO_PRT0_INTR
#define key_touch_Sns__3__MASK 0x08u
#define key_touch_Sns__3__PC CYREG_GPIO_PRT0_PC
#define key_touch_Sns__3__PC2 CYREG_GPIO_PRT0_PC2
#define key_touch_Sns__3__PORT 0u
#define key_touch_Sns__3__PS CYREG_GPIO_PRT0_PS
#define key_touch_Sns__3__SHIFT 3u
#define key_touch_Sns__4__DR CYREG_GPIO_PRT4_DR
#define key_touch_Sns__4__DR_CLR CYREG_GPIO_PRT4_DR_CLR
#define key_touch_Sns__4__DR_INV CYREG_GPIO_PRT4_DR_INV
#define key_touch_Sns__4__DR_SET CYREG_GPIO_PRT4_DR_SET
#define key_touch_Sns__4__HSIOM CYREG_HSIOM_PORT_SEL4
#define key_touch_Sns__4__HSIOM_MASK 0x0000000Fu
#define key_touch_Sns__4__HSIOM_SHIFT 0u
#define key_touch_Sns__4__INTCFG CYREG_GPIO_PRT4_INTR_CFG
#define key_touch_Sns__4__INTR CYREG_GPIO_PRT4_INTR
#define key_touch_Sns__4__INTR_CFG CYREG_GPIO_PRT4_INTR_CFG
#define key_touch_Sns__4__INTSTAT CYREG_GPIO_PRT4_INTR
#define key_touch_Sns__4__MASK 0x01u
#define key_touch_Sns__4__PC CYREG_GPIO_PRT4_PC
#define key_touch_Sns__4__PC2 CYREG_GPIO_PRT4_PC2
#define key_touch_Sns__4__PORT 4u
#define key_touch_Sns__4__PS CYREG_GPIO_PRT4_PS
#define key_touch_Sns__4__SHIFT 0u
#define key_touch_Sns__5__DR CYREG_GPIO_PRT3_DR
#define key_touch_Sns__5__DR_CLR CYREG_GPIO_PRT3_DR_CLR
#define key_touch_Sns__5__DR_INV CYREG_GPIO_PRT3_DR_INV
#define key_touch_Sns__5__DR_SET CYREG_GPIO_PRT3_DR_SET
#define key_touch_Sns__5__HSIOM CYREG_HSIOM_PORT_SEL3
#define key_touch_Sns__5__HSIOM_MASK 0x000000F0u
#define key_touch_Sns__5__HSIOM_SHIFT 4u
#define key_touch_Sns__5__INTCFG CYREG_GPIO_PRT3_INTR_CFG
#define key_touch_Sns__5__INTR CYREG_GPIO_PRT3_INTR
#define key_touch_Sns__5__INTR_CFG CYREG_GPIO_PRT3_INTR_CFG
#define key_touch_Sns__5__INTSTAT CYREG_GPIO_PRT3_INTR
#define key_touch_Sns__5__MASK 0x02u
#define key_touch_Sns__5__PC CYREG_GPIO_PRT3_PC
#define key_touch_Sns__5__PC2 CYREG_GPIO_PRT3_PC2
#define key_touch_Sns__5__PORT 3u
#define key_touch_Sns__5__PS CYREG_GPIO_PRT3_PS
#define key_touch_Sns__5__SHIFT 1u
#define key_touch_Sns__6__DR CYREG_GPIO_PRT2_DR
#define key_touch_Sns__6__DR_CLR CYREG_GPIO_PRT2_DR_CLR
#define key_touch_Sns__6__DR_INV CYREG_GPIO_PRT2_DR_INV
#define key_touch_Sns__6__DR_SET CYREG_GPIO_PRT2_DR_SET
#define key_touch_Sns__6__HSIOM CYREG_HSIOM_PORT_SEL2
#define key_touch_Sns__6__HSIOM_MASK 0x00000F00u
#define key_touch_Sns__6__HSIOM_SHIFT 8u
#define key_touch_Sns__6__INTCFG CYREG_GPIO_PRT2_INTR_CFG
#define key_touch_Sns__6__INTR CYREG_GPIO_PRT2_INTR
#define key_touch_Sns__6__INTR_CFG CYREG_GPIO_PRT2_INTR_CFG
#define key_touch_Sns__6__INTSTAT CYREG_GPIO_PRT2_INTR
#define key_touch_Sns__6__MASK 0x04u
#define key_touch_Sns__6__PC CYREG_GPIO_PRT2_PC
#define key_touch_Sns__6__PC2 CYREG_GPIO_PRT2_PC2
#define key_touch_Sns__6__PORT 2u
#define key_touch_Sns__6__PS CYREG_GPIO_PRT2_PS
#define key_touch_Sns__6__SHIFT 2u
#define key_touch_Sns__7__DR CYREG_GPIO_PRT2_DR
#define key_touch_Sns__7__DR_CLR CYREG_GPIO_PRT2_DR_CLR
#define key_touch_Sns__7__DR_INV CYREG_GPIO_PRT2_DR_INV
#define key_touch_Sns__7__DR_SET CYREG_GPIO_PRT2_DR_SET
#define key_touch_Sns__7__HSIOM CYREG_HSIOM_PORT_SEL2
#define key_touch_Sns__7__HSIOM_MASK 0x0000F000u
#define key_touch_Sns__7__HSIOM_SHIFT 12u
#define key_touch_Sns__7__INTCFG CYREG_GPIO_PRT2_INTR_CFG
#define key_touch_Sns__7__INTR CYREG_GPIO_PRT2_INTR
#define key_touch_Sns__7__INTR_CFG CYREG_GPIO_PRT2_INTR_CFG
#define key_touch_Sns__7__INTSTAT CYREG_GPIO_PRT2_INTR
#define key_touch_Sns__7__MASK 0x08u
#define key_touch_Sns__7__PC CYREG_GPIO_PRT2_PC
#define key_touch_Sns__7__PC2 CYREG_GPIO_PRT2_PC2
#define key_touch_Sns__7__PORT 2u
#define key_touch_Sns__7__PS CYREG_GPIO_PRT2_PS
#define key_touch_Sns__7__SHIFT 3u
#define key_touch_Sns__8__DR CYREG_GPIO_PRT2_DR
#define key_touch_Sns__8__DR_CLR CYREG_GPIO_PRT2_DR_CLR
#define key_touch_Sns__8__DR_INV CYREG_GPIO_PRT2_DR_INV
#define key_touch_Sns__8__DR_SET CYREG_GPIO_PRT2_DR_SET
#define key_touch_Sns__8__HSIOM CYREG_HSIOM_PORT_SEL2
#define key_touch_Sns__8__HSIOM_MASK 0x00F00000u
#define key_touch_Sns__8__HSIOM_SHIFT 20u
#define key_touch_Sns__8__INTCFG CYREG_GPIO_PRT2_INTR_CFG
#define key_touch_Sns__8__INTR CYREG_GPIO_PRT2_INTR
#define key_touch_Sns__8__INTR_CFG CYREG_GPIO_PRT2_INTR_CFG
#define key_touch_Sns__8__INTSTAT CYREG_GPIO_PRT2_INTR
#define key_touch_Sns__8__MASK 0x20u
#define key_touch_Sns__8__PC CYREG_GPIO_PRT2_PC
#define key_touch_Sns__8__PC2 CYREG_GPIO_PRT2_PC2
#define key_touch_Sns__8__PORT 2u
#define key_touch_Sns__8__PS CYREG_GPIO_PRT2_PS
#define key_touch_Sns__8__SHIFT 5u
#define key_touch_Sns__9__DR CYREG_GPIO_PRT2_DR
#define key_touch_Sns__9__DR_CLR CYREG_GPIO_PRT2_DR_CLR
#define key_touch_Sns__9__DR_INV CYREG_GPIO_PRT2_DR_INV
#define key_touch_Sns__9__DR_SET CYREG_GPIO_PRT2_DR_SET
#define key_touch_Sns__9__HSIOM CYREG_HSIOM_PORT_SEL2
#define key_touch_Sns__9__HSIOM_MASK 0x0F000000u
#define key_touch_Sns__9__HSIOM_SHIFT 24u
#define key_touch_Sns__9__INTCFG CYREG_GPIO_PRT2_INTR_CFG
#define key_touch_Sns__9__INTR CYREG_GPIO_PRT2_INTR
#define key_touch_Sns__9__INTR_CFG CYREG_GPIO_PRT2_INTR_CFG
#define key_touch_Sns__9__INTSTAT CYREG_GPIO_PRT2_INTR
#define key_touch_Sns__9__MASK 0x40u
#define key_touch_Sns__9__PC CYREG_GPIO_PRT2_PC
#define key_touch_Sns__9__PC2 CYREG_GPIO_PRT2_PC2
#define key_touch_Sns__9__PORT 2u
#define key_touch_Sns__9__PS CYREG_GPIO_PRT2_PS
#define key_touch_Sns__9__SHIFT 6u
#define key_touch_Sns__Button0_Sns0__DR CYREG_GPIO_PRT0_DR
#define key_touch_Sns__Button0_Sns0__DR_CLR CYREG_GPIO_PRT0_DR_CLR
#define key_touch_Sns__Button0_Sns0__DR_INV CYREG_GPIO_PRT0_DR_INV
#define key_touch_Sns__Button0_Sns0__DR_SET CYREG_GPIO_PRT0_DR_SET
#define key_touch_Sns__Button0_Sns0__INTCFG CYREG_GPIO_PRT0_INTR_CFG
#define key_touch_Sns__Button0_Sns0__INTR CYREG_GPIO_PRT0_INTR
#define key_touch_Sns__Button0_Sns0__INTR_CFG CYREG_GPIO_PRT0_INTR_CFG
#define key_touch_Sns__Button0_Sns0__INTSTAT CYREG_GPIO_PRT0_INTR
#define key_touch_Sns__Button0_Sns0__MASK 0x01u
#define key_touch_Sns__Button0_Sns0__PC CYREG_GPIO_PRT0_PC
#define key_touch_Sns__Button0_Sns0__PC2 CYREG_GPIO_PRT0_PC2
#define key_touch_Sns__Button0_Sns0__PORT 0u
#define key_touch_Sns__Button0_Sns0__PS CYREG_GPIO_PRT0_PS
#define key_touch_Sns__Button0_Sns0__SHIFT 0u
#define key_touch_Sns__Button1_Sns0__DR CYREG_GPIO_PRT0_DR
#define key_touch_Sns__Button1_Sns0__DR_CLR CYREG_GPIO_PRT0_DR_CLR
#define key_touch_Sns__Button1_Sns0__DR_INV CYREG_GPIO_PRT0_DR_INV
#define key_touch_Sns__Button1_Sns0__DR_SET CYREG_GPIO_PRT0_DR_SET
#define key_touch_Sns__Button1_Sns0__INTCFG CYREG_GPIO_PRT0_INTR_CFG
#define key_touch_Sns__Button1_Sns0__INTR CYREG_GPIO_PRT0_INTR
#define key_touch_Sns__Button1_Sns0__INTR_CFG CYREG_GPIO_PRT0_INTR_CFG
#define key_touch_Sns__Button1_Sns0__INTSTAT CYREG_GPIO_PRT0_INTR
#define key_touch_Sns__Button1_Sns0__MASK 0x02u
#define key_touch_Sns__Button1_Sns0__PC CYREG_GPIO_PRT0_PC
#define key_touch_Sns__Button1_Sns0__PC2 CYREG_GPIO_PRT0_PC2
#define key_touch_Sns__Button1_Sns0__PORT 0u
#define key_touch_Sns__Button1_Sns0__PS CYREG_GPIO_PRT0_PS
#define key_touch_Sns__Button1_Sns0__SHIFT 1u
#define key_touch_Sns__Button10_Sns0__DR CYREG_GPIO_PRT2_DR
#define key_touch_Sns__Button10_Sns0__DR_CLR CYREG_GPIO_PRT2_DR_CLR
#define key_touch_Sns__Button10_Sns0__DR_INV CYREG_GPIO_PRT2_DR_INV
#define key_touch_Sns__Button10_Sns0__DR_SET CYREG_GPIO_PRT2_DR_SET
#define key_touch_Sns__Button10_Sns0__INTCFG CYREG_GPIO_PRT2_INTR_CFG
#define key_touch_Sns__Button10_Sns0__INTR CYREG_GPIO_PRT2_INTR
#define key_touch_Sns__Button10_Sns0__INTR_CFG CYREG_GPIO_PRT2_INTR_CFG
#define key_touch_Sns__Button10_Sns0__INTSTAT CYREG_GPIO_PRT2_INTR
#define key_touch_Sns__Button10_Sns0__MASK 0x80u
#define key_touch_Sns__Button10_Sns0__PC CYREG_GPIO_PRT2_PC
#define key_touch_Sns__Button10_Sns0__PC2 CYREG_GPIO_PRT2_PC2
#define key_touch_Sns__Button10_Sns0__PORT 2u
#define key_touch_Sns__Button10_Sns0__PS CYREG_GPIO_PRT2_PS
#define key_touch_Sns__Button10_Sns0__SHIFT 7u
#define key_touch_Sns__Button11_Sns0__DR CYREG_GPIO_PRT3_DR
#define key_touch_Sns__Button11_Sns0__DR_CLR CYREG_GPIO_PRT3_DR_CLR
#define key_touch_Sns__Button11_Sns0__DR_INV CYREG_GPIO_PRT3_DR_INV
#define key_touch_Sns__Button11_Sns0__DR_SET CYREG_GPIO_PRT3_DR_SET
#define key_touch_Sns__Button11_Sns0__INTCFG CYREG_GPIO_PRT3_INTR_CFG
#define key_touch_Sns__Button11_Sns0__INTR CYREG_GPIO_PRT3_INTR
#define key_touch_Sns__Button11_Sns0__INTR_CFG CYREG_GPIO_PRT3_INTR_CFG
#define key_touch_Sns__Button11_Sns0__INTSTAT CYREG_GPIO_PRT3_INTR
#define key_touch_Sns__Button11_Sns0__MASK 0x01u
#define key_touch_Sns__Button11_Sns0__PC CYREG_GPIO_PRT3_PC
#define key_touch_Sns__Button11_Sns0__PC2 CYREG_GPIO_PRT3_PC2
#define key_touch_Sns__Button11_Sns0__PORT 3u
#define key_touch_Sns__Button11_Sns0__PS CYREG_GPIO_PRT3_PS
#define key_touch_Sns__Button11_Sns0__SHIFT 0u
#define key_touch_Sns__Button2_Sns0__DR CYREG_GPIO_PRT0_DR
#define key_touch_Sns__Button2_Sns0__DR_CLR CYREG_GPIO_PRT0_DR_CLR
#define key_touch_Sns__Button2_Sns0__DR_INV CYREG_GPIO_PRT0_DR_INV
#define key_touch_Sns__Button2_Sns0__DR_SET CYREG_GPIO_PRT0_DR_SET
#define key_touch_Sns__Button2_Sns0__INTCFG CYREG_GPIO_PRT0_INTR_CFG
#define key_touch_Sns__Button2_Sns0__INTR CYREG_GPIO_PRT0_INTR
#define key_touch_Sns__Button2_Sns0__INTR_CFG CYREG_GPIO_PRT0_INTR_CFG
#define key_touch_Sns__Button2_Sns0__INTSTAT CYREG_GPIO_PRT0_INTR
#define key_touch_Sns__Button2_Sns0__MASK 0x04u
#define key_touch_Sns__Button2_Sns0__PC CYREG_GPIO_PRT0_PC
#define key_touch_Sns__Button2_Sns0__PC2 CYREG_GPIO_PRT0_PC2
#define key_touch_Sns__Button2_Sns0__PORT 0u
#define key_touch_Sns__Button2_Sns0__PS CYREG_GPIO_PRT0_PS
#define key_touch_Sns__Button2_Sns0__SHIFT 2u
#define key_touch_Sns__Button3_Sns0__DR CYREG_GPIO_PRT0_DR
#define key_touch_Sns__Button3_Sns0__DR_CLR CYREG_GPIO_PRT0_DR_CLR
#define key_touch_Sns__Button3_Sns0__DR_INV CYREG_GPIO_PRT0_DR_INV
#define key_touch_Sns__Button3_Sns0__DR_SET CYREG_GPIO_PRT0_DR_SET
#define key_touch_Sns__Button3_Sns0__INTCFG CYREG_GPIO_PRT0_INTR_CFG
#define key_touch_Sns__Button3_Sns0__INTR CYREG_GPIO_PRT0_INTR
#define key_touch_Sns__Button3_Sns0__INTR_CFG CYREG_GPIO_PRT0_INTR_CFG
#define key_touch_Sns__Button3_Sns0__INTSTAT CYREG_GPIO_PRT0_INTR
#define key_touch_Sns__Button3_Sns0__MASK 0x08u
#define key_touch_Sns__Button3_Sns0__PC CYREG_GPIO_PRT0_PC
#define key_touch_Sns__Button3_Sns0__PC2 CYREG_GPIO_PRT0_PC2
#define key_touch_Sns__Button3_Sns0__PORT 0u
#define key_touch_Sns__Button3_Sns0__PS CYREG_GPIO_PRT0_PS
#define key_touch_Sns__Button3_Sns0__SHIFT 3u
#define key_touch_Sns__Button4_Sns0__DR CYREG_GPIO_PRT4_DR
#define key_touch_Sns__Button4_Sns0__DR_CLR CYREG_GPIO_PRT4_DR_CLR
#define key_touch_Sns__Button4_Sns0__DR_INV CYREG_GPIO_PRT4_DR_INV
#define key_touch_Sns__Button4_Sns0__DR_SET CYREG_GPIO_PRT4_DR_SET
#define key_touch_Sns__Button4_Sns0__INTCFG CYREG_GPIO_PRT4_INTR_CFG
#define key_touch_Sns__Button4_Sns0__INTR CYREG_GPIO_PRT4_INTR
#define key_touch_Sns__Button4_Sns0__INTR_CFG CYREG_GPIO_PRT4_INTR_CFG
#define key_touch_Sns__Button4_Sns0__INTSTAT CYREG_GPIO_PRT4_INTR
#define key_touch_Sns__Button4_Sns0__MASK 0x01u
#define key_touch_Sns__Button4_Sns0__PC CYREG_GPIO_PRT4_PC
#define key_touch_Sns__Button4_Sns0__PC2 CYREG_GPIO_PRT4_PC2
#define key_touch_Sns__Button4_Sns0__PORT 4u
#define key_touch_Sns__Button4_Sns0__PS CYREG_GPIO_PRT4_PS
#define key_touch_Sns__Button4_Sns0__SHIFT 0u
#define key_touch_Sns__Button5_Sns0__DR CYREG_GPIO_PRT3_DR
#define key_touch_Sns__Button5_Sns0__DR_CLR CYREG_GPIO_PRT3_DR_CLR
#define key_touch_Sns__Button5_Sns0__DR_INV CYREG_GPIO_PRT3_DR_INV
#define key_touch_Sns__Button5_Sns0__DR_SET CYREG_GPIO_PRT3_DR_SET
#define key_touch_Sns__Button5_Sns0__INTCFG CYREG_GPIO_PRT3_INTR_CFG
#define key_touch_Sns__Button5_Sns0__INTR CYREG_GPIO_PRT3_INTR
#define key_touch_Sns__Button5_Sns0__INTR_CFG CYREG_GPIO_PRT3_INTR_CFG
#define key_touch_Sns__Button5_Sns0__INTSTAT CYREG_GPIO_PRT3_INTR
#define key_touch_Sns__Button5_Sns0__MASK 0x02u
#define key_touch_Sns__Button5_Sns0__PC CYREG_GPIO_PRT3_PC
#define key_touch_Sns__Button5_Sns0__PC2 CYREG_GPIO_PRT3_PC2
#define key_touch_Sns__Button5_Sns0__PORT 3u
#define key_touch_Sns__Button5_Sns0__PS CYREG_GPIO_PRT3_PS
#define key_touch_Sns__Button5_Sns0__SHIFT 1u
#define key_touch_Sns__Button6_Sns0__DR CYREG_GPIO_PRT2_DR
#define key_touch_Sns__Button6_Sns0__DR_CLR CYREG_GPIO_PRT2_DR_CLR
#define key_touch_Sns__Button6_Sns0__DR_INV CYREG_GPIO_PRT2_DR_INV
#define key_touch_Sns__Button6_Sns0__DR_SET CYREG_GPIO_PRT2_DR_SET
#define key_touch_Sns__Button6_Sns0__INTCFG CYREG_GPIO_PRT2_INTR_CFG
#define key_touch_Sns__Button6_Sns0__INTR CYREG_GPIO_PRT2_INTR
#define key_touch_Sns__Button6_Sns0__INTR_CFG CYREG_GPIO_PRT2_INTR_CFG
#define key_touch_Sns__Button6_Sns0__INTSTAT CYREG_GPIO_PRT2_INTR
#define key_touch_Sns__Button6_Sns0__MASK 0x04u
#define key_touch_Sns__Button6_Sns0__PC CYREG_GPIO_PRT2_PC
#define key_touch_Sns__Button6_Sns0__PC2 CYREG_GPIO_PRT2_PC2
#define key_touch_Sns__Button6_Sns0__PORT 2u
#define key_touch_Sns__Button6_Sns0__PS CYREG_GPIO_PRT2_PS
#define key_touch_Sns__Button6_Sns0__SHIFT 2u
#define key_touch_Sns__Button7_Sns0__DR CYREG_GPIO_PRT2_DR
#define key_touch_Sns__Button7_Sns0__DR_CLR CYREG_GPIO_PRT2_DR_CLR
#define key_touch_Sns__Button7_Sns0__DR_INV CYREG_GPIO_PRT2_DR_INV
#define key_touch_Sns__Button7_Sns0__DR_SET CYREG_GPIO_PRT2_DR_SET
#define key_touch_Sns__Button7_Sns0__INTCFG CYREG_GPIO_PRT2_INTR_CFG
#define key_touch_Sns__Button7_Sns0__INTR CYREG_GPIO_PRT2_INTR
#define key_touch_Sns__Button7_Sns0__INTR_CFG CYREG_GPIO_PRT2_INTR_CFG
#define key_touch_Sns__Button7_Sns0__INTSTAT CYREG_GPIO_PRT2_INTR
#define key_touch_Sns__Button7_Sns0__MASK 0x08u
#define key_touch_Sns__Button7_Sns0__PC CYREG_GPIO_PRT2_PC
#define key_touch_Sns__Button7_Sns0__PC2 CYREG_GPIO_PRT2_PC2
#define key_touch_Sns__Button7_Sns0__PORT 2u
#define key_touch_Sns__Button7_Sns0__PS CYREG_GPIO_PRT2_PS
#define key_touch_Sns__Button7_Sns0__SHIFT 3u
#define key_touch_Sns__Button8_Sns0__DR CYREG_GPIO_PRT2_DR
#define key_touch_Sns__Button8_Sns0__DR_CLR CYREG_GPIO_PRT2_DR_CLR
#define key_touch_Sns__Button8_Sns0__DR_INV CYREG_GPIO_PRT2_DR_INV
#define key_touch_Sns__Button8_Sns0__DR_SET CYREG_GPIO_PRT2_DR_SET
#define key_touch_Sns__Button8_Sns0__INTCFG CYREG_GPIO_PRT2_INTR_CFG
#define key_touch_Sns__Button8_Sns0__INTR CYREG_GPIO_PRT2_INTR
#define key_touch_Sns__Button8_Sns0__INTR_CFG CYREG_GPIO_PRT2_INTR_CFG
#define key_touch_Sns__Button8_Sns0__INTSTAT CYREG_GPIO_PRT2_INTR
#define key_touch_Sns__Button8_Sns0__MASK 0x20u
#define key_touch_Sns__Button8_Sns0__PC CYREG_GPIO_PRT2_PC
#define key_touch_Sns__Button8_Sns0__PC2 CYREG_GPIO_PRT2_PC2
#define key_touch_Sns__Button8_Sns0__PORT 2u
#define key_touch_Sns__Button8_Sns0__PS CYREG_GPIO_PRT2_PS
#define key_touch_Sns__Button8_Sns0__SHIFT 5u
#define key_touch_Sns__Button9_Sns0__DR CYREG_GPIO_PRT2_DR
#define key_touch_Sns__Button9_Sns0__DR_CLR CYREG_GPIO_PRT2_DR_CLR
#define key_touch_Sns__Button9_Sns0__DR_INV CYREG_GPIO_PRT2_DR_INV
#define key_touch_Sns__Button9_Sns0__DR_SET CYREG_GPIO_PRT2_DR_SET
#define key_touch_Sns__Button9_Sns0__INTCFG CYREG_GPIO_PRT2_INTR_CFG
#define key_touch_Sns__Button9_Sns0__INTR CYREG_GPIO_PRT2_INTR
#define key_touch_Sns__Button9_Sns0__INTR_CFG CYREG_GPIO_PRT2_INTR_CFG
#define key_touch_Sns__Button9_Sns0__INTSTAT CYREG_GPIO_PRT2_INTR
#define key_touch_Sns__Button9_Sns0__MASK 0x40u
#define key_touch_Sns__Button9_Sns0__PC CYREG_GPIO_PRT2_PC
#define key_touch_Sns__Button9_Sns0__PC2 CYREG_GPIO_PRT2_PC2
#define key_touch_Sns__Button9_Sns0__PORT 2u
#define key_touch_Sns__Button9_Sns0__PS CYREG_GPIO_PRT2_PS
#define key_touch_Sns__Button9_Sns0__SHIFT 6u

/* SIMPLE_DATA */
#define SIMPLE_DATA__0__DR CYREG_GPIO_PRT1_DR
#define SIMPLE_DATA__0__DR_CLR CYREG_GPIO_PRT1_DR_CLR
#define SIMPLE_DATA__0__DR_INV CYREG_GPIO_PRT1_DR_INV
#define SIMPLE_DATA__0__DR_SET CYREG_GPIO_PRT1_DR_SET
#define SIMPLE_DATA__0__HSIOM CYREG_HSIOM_PORT_SEL1
#define SIMPLE_DATA__0__HSIOM_MASK 0x000000F0u
#define SIMPLE_DATA__0__HSIOM_SHIFT 4u
#define SIMPLE_DATA__0__INTCFG CYREG_GPIO_PRT1_INTR_CFG
#define SIMPLE_DATA__0__INTR CYREG_GPIO_PRT1_INTR
#define SIMPLE_DATA__0__INTR_CFG CYREG_GPIO_PRT1_INTR_CFG
#define SIMPLE_DATA__0__INTSTAT CYREG_GPIO_PRT1_INTR
#define SIMPLE_DATA__0__MASK 0x02u
#define SIMPLE_DATA__0__PC CYREG_GPIO_PRT1_PC
#define SIMPLE_DATA__0__PC2 CYREG_GPIO_PRT1_PC2
#define SIMPLE_DATA__0__PORT 1u
#define SIMPLE_DATA__0__PS CYREG_GPIO_PRT1_PS
#define SIMPLE_DATA__0__SHIFT 1u
#define SIMPLE_DATA__DR CYREG_GPIO_PRT1_DR
#define SIMPLE_DATA__DR_CLR CYREG_GPIO_PRT1_DR_CLR
#define SIMPLE_DATA__DR_INV CYREG_GPIO_PRT1_DR_INV
#define SIMPLE_DATA__DR_SET CYREG_GPIO_PRT1_DR_SET
#define SIMPLE_DATA__INTCFG CYREG_GPIO_PRT1_INTR_CFG
#define SIMPLE_DATA__INTR CYREG_GPIO_PRT1_INTR
#define SIMPLE_DATA__INTR_CFG CYREG_GPIO_PRT1_INTR_CFG
#define SIMPLE_DATA__INTSTAT CYREG_GPIO_PRT1_INTR
#define SIMPLE_DATA__MASK 0x02u
#define SIMPLE_DATA__PC CYREG_GPIO_PRT1_PC
#define SIMPLE_DATA__PC2 CYREG_GPIO_PRT1_PC2
#define SIMPLE_DATA__PORT 1u
#define SIMPLE_DATA__PS CYREG_GPIO_PRT1_PS
#define SIMPLE_DATA__SHIFT 1u

/* SIMPLE_CLOCK */
#define SIMPLE_CLOCK__0__DR CYREG_GPIO_PRT1_DR
#define SIMPLE_CLOCK__0__DR_CLR CYREG_GPIO_PRT1_DR_CLR
#define SIMPLE_CLOCK__0__DR_INV CYREG_GPIO_PRT1_DR_INV
#define SIMPLE_CLOCK__0__DR_SET CYREG_GPIO_PRT1_DR_SET
#define SIMPLE_CLOCK__0__HSIOM CYREG_HSIOM_PORT_SEL1
#define SIMPLE_CLOCK__0__HSIOM_MASK 0x0000000Fu
#define SIMPLE_CLOCK__0__HSIOM_SHIFT 0u
#define SIMPLE_CLOCK__0__INTCFG CYREG_GPIO_PRT1_INTR_CFG
#define SIMPLE_CLOCK__0__INTR CYREG_GPIO_PRT1_INTR
#define SIMPLE_CLOCK__0__INTR_CFG CYREG_GPIO_PRT1_INTR_CFG
#define SIMPLE_CLOCK__0__INTSTAT CYREG_GPIO_PRT1_INTR
#define SIMPLE_CLOCK__0__MASK 0x01u
#define SIMPLE_CLOCK__0__PC CYREG_GPIO_PRT1_PC
#define SIMPLE_CLOCK__0__PC2 CYREG_GPIO_PRT1_PC2
#define SIMPLE_CLOCK__0__PORT 1u
#define SIMPLE_CLOCK__0__PS CYREG_GPIO_PRT1_PS
#define SIMPLE_CLOCK__0__SHIFT 0u
#define SIMPLE_CLOCK__DR CYREG_GPIO_PRT1_DR
#define SIMPLE_CLOCK__DR_CLR CYREG_GPIO_PRT1_DR_CLR
#define SIMPLE_CLOCK__DR_INV CYREG_GPIO_PRT1_DR_INV
#define SIMPLE_CLOCK__DR_SET CYREG_GPIO_PRT1_DR_SET
#define SIMPLE_CLOCK__INTCFG CYREG_GPIO_PRT1_INTR_CFG
#define SIMPLE_CLOCK__INTR CYREG_GPIO_PRT1_INTR
#define SIMPLE_CLOCK__INTR_CFG CYREG_GPIO_PRT1_INTR_CFG
#define SIMPLE_CLOCK__INTSTAT CYREG_GPIO_PRT1_INTR
#define SIMPLE_CLOCK__MASK 0x01u
#define SIMPLE_CLOCK__PC CYREG_GPIO_PRT1_PC
#define SIMPLE_CLOCK__PC2 CYREG_GPIO_PRT1_PC2
#define SIMPLE_CLOCK__PORT 1u
#define SIMPLE_CLOCK__PS CYREG_GPIO_PRT1_PS
#define SIMPLE_CLOCK__SHIFT 0u

/* time_1ms_ISR */
#define time_1ms_ISR__INTC_CLR_EN_REG CYREG_CM0P_ICER
#define time_1ms_ISR__INTC_CLR_PD_REG CYREG_CM0P_ICPR
#define time_1ms_ISR__INTC_MASK 0x800u
#define time_1ms_ISR__INTC_NUMBER 11u
#define time_1ms_ISR__INTC_PRIOR_MASK 0xC0000000u
#define time_1ms_ISR__INTC_PRIOR_NUM 3u
#define time_1ms_ISR__INTC_PRIOR_REG CYREG_CM0P_IPR2
#define time_1ms_ISR__INTC_SET_EN_REG CYREG_CM0P_ISER
#define time_1ms_ISR__INTC_SET_PD_REG CYREG_CM0P_ISPR

/* Miscellaneous */
#define CY_PROJECT_NAME "AYBR3000"
#define CY_VERSION "PSoC Creator  4.0"
#define CYDEV_BANDGAP_VOLTAGE 1.200
#define CYDEV_BCLK__HFCLK__HZ 12000000U
#define CYDEV_BCLK__HFCLK__KHZ 12000U
#define CYDEV_BCLK__HFCLK__MHZ 12U
#define CYDEV_BCLK__SYSCLK__HZ 12000000U
#define CYDEV_BCLK__SYSCLK__KHZ 12000U
#define CYDEV_BCLK__SYSCLK__MHZ 12U
#define CYDEV_CHIP_DIE_LEOPARD 1u
#define CYDEV_CHIP_DIE_PSOC4A 12u
#define CYDEV_CHIP_DIE_PSOC5LP 19u
#define CYDEV_CHIP_DIE_PSOC5TM 20u
#define CYDEV_CHIP_DIE_TMA4 2u
#define CYDEV_CHIP_DIE_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_FM0P 4u
#define CYDEV_CHIP_FAMILY_FM3 5u
#define CYDEV_CHIP_FAMILY_FM4 6u
#define CYDEV_CHIP_FAMILY_PSOC3 1u
#define CYDEV_CHIP_FAMILY_PSOC4 2u
#define CYDEV_CHIP_FAMILY_PSOC5 3u
#define CYDEV_CHIP_FAMILY_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_USED CYDEV_CHIP_FAMILY_PSOC4
#define CYDEV_CHIP_JTAG_ID 0x190911A9u
#define CYDEV_CHIP_MEMBER_3A 1u
#define CYDEV_CHIP_MEMBER_4A 12u
#define CYDEV_CHIP_MEMBER_4C 18u
#define CYDEV_CHIP_MEMBER_4D 8u
#define CYDEV_CHIP_MEMBER_4E 4u
#define CYDEV_CHIP_MEMBER_4F 13u
#define CYDEV_CHIP_MEMBER_4G 2u
#define CYDEV_CHIP_MEMBER_4H 11u
#define CYDEV_CHIP_MEMBER_4I 17u
#define CYDEV_CHIP_MEMBER_4J 9u
#define CYDEV_CHIP_MEMBER_4K 10u
#define CYDEV_CHIP_MEMBER_4L 16u
#define CYDEV_CHIP_MEMBER_4M 15u
#define CYDEV_CHIP_MEMBER_4N 6u
#define CYDEV_CHIP_MEMBER_4O 5u
#define CYDEV_CHIP_MEMBER_4P 14u
#define CYDEV_CHIP_MEMBER_4Q 7u
#define CYDEV_CHIP_MEMBER_4U 3u
#define CYDEV_CHIP_MEMBER_5A 20u
#define CYDEV_CHIP_MEMBER_5B 19u
#define CYDEV_CHIP_MEMBER_FM3 24u
#define CYDEV_CHIP_MEMBER_FM4 25u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1 21u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2 22u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3 23u
#define CYDEV_CHIP_MEMBER_UNKNOWN 0u
#define CYDEV_CHIP_MEMBER_USED CYDEV_CHIP_MEMBER_4J
#define CYDEV_CHIP_DIE_EXPECT CYDEV_CHIP_MEMBER_USED
#define CYDEV_CHIP_DIE_ACTUAL CYDEV_CHIP_DIE_EXPECT
#define CYDEV_CHIP_REV_LEOPARD_ES1 0u
#define CYDEV_CHIP_REV_LEOPARD_ES2 1u
#define CYDEV_CHIP_REV_LEOPARD_ES3 3u
#define CYDEV_CHIP_REV_LEOPARD_PRODUCTION 3u
#define CYDEV_CHIP_REV_PSOC4A_ES0 17u
#define CYDEV_CHIP_REV_PSOC4A_PRODUCTION 17u
#define CYDEV_CHIP_REV_PSOC5LP_ES0 0u
#define CYDEV_CHIP_REV_PSOC5LP_PRODUCTION 0u
#define CYDEV_CHIP_REV_PSOC5TM_ES0 0u
#define CYDEV_CHIP_REV_PSOC5TM_ES1 1u
#define CYDEV_CHIP_REV_PSOC5TM_PRODUCTION 1u
#define CYDEV_CHIP_REV_TMA4_ES 17u
#define CYDEV_CHIP_REV_TMA4_ES2 33u
#define CYDEV_CHIP_REV_TMA4_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_3A_ES1 0u
#define CYDEV_CHIP_REVISION_3A_ES2 1u
#define CYDEV_CHIP_REVISION_3A_ES3 3u
#define CYDEV_CHIP_REVISION_3A_PRODUCTION 3u
#define CYDEV_CHIP_REVISION_4A_ES0 17u
#define CYDEV_CHIP_REVISION_4A_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4C_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4D_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4E_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256K 0u
#define CYDEV_CHIP_REVISION_4G_ES 17u
#define CYDEV_CHIP_REVISION_4G_ES2 33u
#define CYDEV_CHIP_REVISION_4G_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4H_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4I_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4J_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4K_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4L_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4M_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4N_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4O_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4P_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4Q_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4U_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_5A_ES0 0u
#define CYDEV_CHIP_REVISION_5A_ES1 1u
#define CYDEV_CHIP_REVISION_5A_PRODUCTION 1u
#define CYDEV_CHIP_REVISION_5B_ES0 0u
#define CYDEV_CHIP_REVISION_5B_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_FM3_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_FM4_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_USED CYDEV_CHIP_REVISION_4J_PRODUCTION
#define CYDEV_CHIP_REV_EXPECT CYDEV_CHIP_REVISION_USED
#define CYDEV_CONFIG_READ_ACCELERATOR 1
#define CYDEV_CONFIG_UNUSED_IO_AllowButWarn 0
#define CYDEV_CONFIG_UNUSED_IO_AllowWithInfo 1
#define CYDEV_CONFIG_UNUSED_IO_Disallowed 2
#define CYDEV_CONFIG_UNUSED_IO CYDEV_CONFIG_UNUSED_IO_Disallowed
#define CYDEV_CONFIGURATION_COMPRESSED 1
#define CYDEV_CONFIGURATION_MODE_COMPRESSED 0
#define CYDEV_CONFIGURATION_MODE CYDEV_CONFIGURATION_MODE_COMPRESSED
#define CYDEV_CONFIGURATION_MODE_DMA 2
#define CYDEV_CONFIGURATION_MODE_UNCOMPRESSED 1
#define CYDEV_DEBUG_PROTECT_KILL 4
#define CYDEV_DEBUG_PROTECT_OPEN 1
#define CYDEV_DEBUG_PROTECT CYDEV_DEBUG_PROTECT_OPEN
#define CYDEV_DEBUG_PROTECT_PROTECTED 2
#define CYDEV_DEBUGGING_DPS_Disable 3
#define CYDEV_DEBUGGING_DPS_SWD 2
#define CYDEV_DEBUGGING_DPS CYDEV_DEBUGGING_DPS_SWD
#define CYDEV_DEBUGGING_ENABLE 1
#define CYDEV_DFT_SELECT_CLK0 8u
#define CYDEV_DFT_SELECT_CLK1 9u
#define CYDEV_HEAP_SIZE 0x080
#define CYDEV_IMO_TRIMMED_BY_USB 0u
#define CYDEV_IMO_TRIMMED_BY_WCO 0u
#define CYDEV_IS_EXPORTING_CODE 0
#define CYDEV_IS_IMPORTING_CODE 0
#define CYDEV_PROJ_TYPE 0
#define CYDEV_PROJ_TYPE_BOOTLOADER 1
#define CYDEV_PROJ_TYPE_LAUNCHER 5
#define CYDEV_PROJ_TYPE_LOADABLE 2
#define CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER 4
#define CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER 3
#define CYDEV_PROJ_TYPE_STANDARD 0
#define CYDEV_STACK_SIZE 0x100
#define CYDEV_USE_BUNDLED_CMSIS 1
#define CYDEV_VARIABLE_VDDA 1
#define CYDEV_VDD 3.3
#define CYDEV_VDD_MV 3300
#define CYDEV_WDT_GENERATE_ISR 0u
#define CYIPBLOCK_m0s8cpussv3_VERSION 1
#define CYIPBLOCK_m0s8csdv2_VERSION 1
#define CYIPBLOCK_m0s8ioss_VERSION 1
#define CYIPBLOCK_m0s8lcd_VERSION 2
#define CYIPBLOCK_m0s8lpcomp_VERSION 2
#define CYIPBLOCK_m0s8peri_VERSION 1
#define CYIPBLOCK_m0s8scb_VERSION 2
#define CYIPBLOCK_m0s8tcpwm_VERSION 2
#define CYIPBLOCK_m0s8wco_VERSION 1
#define CYIPBLOCK_s8srsslt_VERSION 1
#define CYDEV_BOOTLOADER_ENABLE 0

#endif /* INCLUDED_CYFITTER_H */
