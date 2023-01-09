/**
  ******************************************************************************
  * @file    stm32f1_can_regs.h
  ******************************************************************************
  */
    
#ifndef __STM32F1xx_REGS_H
#define __STM32F1xx_REGS_H

#ifdef __cplusplus
 extern "C" {
#endif 

#include "stm32f1xx.h"
//#define offsetof(TYPE, MEMBER) ((int)(&((TYPE *)0)->MEMBER))

/** 
  * @brief Controller Area Network 
  */
  
typedef struct
{
  __IO uint32_t MCR;
  __IO uint32_t MSR;
  __IO uint32_t TSR;
  __IO uint32_t RF0R;
  __IO uint32_t RF1R;
  __IO uint32_t IER;
  __IO uint32_t ESR;
  __IO uint32_t BTR;
  uint32_t  RESERVED0[88];
  //CAN_TxMailBox_TypeDef sTxMailBox[3];
  __IO uint32_t TIR0;
  __IO uint32_t TDTR0;
  __IO uint32_t TDLR0;
  __IO uint32_t TDHR0;
  __IO uint32_t TIR1;
  __IO uint32_t TDTR1;
  __IO uint32_t TDLR1;
  __IO uint32_t TDHR1;
  __IO uint32_t TIR2;
  __IO uint32_t TDTR2;
  __IO uint32_t TDLR2;
  __IO uint32_t TDHR2;
  
  //CAN_FIFOMailBox_TypeDef sFIFOMailBox[2];
  __IO uint32_t RIR0;
  __IO uint32_t RDTR0;
  __IO uint32_t RDLR0;
  __IO uint32_t RDHR0;
  __IO uint32_t RIR1;
  __IO uint32_t RDTR1;
  __IO uint32_t RDLR1;
  __IO uint32_t RDHR1;
  uint32_t  RESERVED1[12];
  __IO uint32_t FMR;
  __IO uint32_t FM1R;
  uint32_t  RESERVED2;
  __IO uint32_t FS1R;
  uint32_t  RESERVED3;
  __IO uint32_t FFA1R;
  uint32_t  RESERVED4;
  __IO uint32_t FA1R;
  uint32_t  RESERVED5[8];
  //CAN_FilterRegister_TypeDef sFilterRegister[14];
  __IO uint32_t FR0_1;
  __IO uint32_t FR0_2;
  __IO uint32_t FR1_1;
  __IO uint32_t FR1_2;
  __IO uint32_t FR2_1;
  __IO uint32_t FR2_2;
  __IO uint32_t FR3_1;
  __IO uint32_t FR3_2;
  __IO uint32_t FR4_1;
  __IO uint32_t FR4_2;
  __IO uint32_t FR5_1;
  __IO uint32_t FR5_2;
  __IO uint32_t FR6_1;
  __IO uint32_t FR6_2;
  __IO uint32_t FR7_1;
  __IO uint32_t FR7_2;
  __IO uint32_t FR8_1;
  __IO uint32_t FR8_2;
  __IO uint32_t FR9_1;
  __IO uint32_t FR9_2;
  __IO uint32_t FR10_1;
  __IO uint32_t FR10_2;
  __IO uint32_t FR11_1;
  __IO uint32_t FR11_2;
  __IO uint32_t FR12_1;
  __IO uint32_t FR12_2;
  __IO uint32_t FR13_1;
  __IO uint32_t FR13_2;
} CAN_CTRL_TypeDef;

#ifdef __cplusplus
  }
#endif /* __cplusplus */
  
#endif /* __STM32F1xx_REGS_H */
