/**
  ******************************************************************************
  * @file    stm32f1xx_regs.h
  ******************************************************************************
  */
    
#ifndef __STM32F1xx_REGS_H
#define __STM32F1xx_REGS_H

#ifdef __cplusplus
 extern "C" {
#endif 

#include "stm32f1xx.h"
//#define offsetof(TYPE, MEMBER) ((int)(&((TYPE *)0)->MEMBER))

#define ADC_(p1)	(offsetof(ADC_TypeDef, p1)/sizeof(uint32_t))
#define ADC_Common_(p1)	(offsetof(ADC_Common_TypeDef, p1)/sizeof(uint32_t))
#define BKP_(p1)	(offsetof(BKP_TypeDef, p1)/sizeof(uint32_t))
#define CAN_(p1)	(offsetof(CAN_TypeDef, p1)/sizeof(uint32_t))
#define CRC_(p1)	(offsetof(CRC_TypeDef, p1)/sizeof(uint32_t))
#define DBGMCU_(p1)	(offsetof(DBGMCU_TypeDef, p1)/sizeof(uint32_t))
#define DMA_Channel_(p1)	(offsetof(DMA_Channel_TypeDef, p1)/sizeof(uint32_t))
#define DMA_(p1)	(offsetof(DMA_TypeDef, p1)/sizeof(uint32_t))
#define EXTI_(p1)	(offsetof(EXTI_TypeDef, p1)/sizeof(uint32_t))
#define FLASH_(p1)	(offsetof(FLASH_TypeDef, p1)/sizeof(uint32_t))
#define OB_R16(p1)	(offsetof(OB_TypeDef, p1)/sizeof(uint16_t))
#define OB_			OB_R16
#define GPIO_(p1)	(offsetof(GPIO_TypeDef, p1)/sizeof(uint32_t))
#define AFIO_(p1)	(offsetof(AFIO_TypeDef, p1)/sizeof(uint32_t))
#define I2C_(p1)	(offsetof(I2C_TypeDef, p1)/sizeof(uint32_t))
#define IWDG_(p1)	(offsetof(IWDG_TypeDef, p1)/sizeof(uint32_t))
#define PWR_(p1)	(offsetof(PWR_TypeDef, p1)/sizeof(uint32_t))
#define RCC_(p1)	(offsetof(RCC_TypeDef, p1)/sizeof(uint32_t))
#define RTC_(p1)	(offsetof(RTC_TypeDef, p1)/sizeof(uint32_t))
#define SPI_(p1)	(offsetof(SPI_TypeDef, p1)/sizeof(uint32_t))
#define TIM_(p1)	(offsetof(TIM_TypeDef, p1)/sizeof(uint32_t))
#define USART_(p1)	(offsetof(USART_TypeDef, p1)/sizeof(uint32_t))
#define USB_R16(p1)	(offsetof(USB_TypeDef, p1)/sizeof(uint16_t))
#define USB_		USB_R16
#define WWDG_(p1)	(offsetof(WWDG_TypeDef, p1)/sizeof(uint32_t))

/** @addtogroup Peripheral_declaration
  * @{
  */  

#define TIM2_U32_PTR 	((uint32_t *)TIM2_BASE)
#define TIM3_U32_PTR    ((uint32_t *)TIM3_BASE)
#define TIM4_U32_PTR    ((uint32_t *)TIM4_BASE)
#define TIM5_U32_PTR    ((uint32_t *)TIM5_BASE)
#define TIM6_U32_PTR    ((uint32_t *)TIM6_BASE)
#define TIM7_U32_PTR    ((uint32_t *)TIM7_BASE)
#define RTC_U32_PTR    ((uint32_t *)RTC_BASE)
#define WWDG_U32_PTR    ((uint32_t *)WWDG_BASE)
#define IWDG_U32_PTR    ((uint32_t *)IWDG_BASE)
#define SPI2_U32_PTR    ((uint32_t *)SPI2_BASE)
#define SPI3_U32_PTR    ((uint32_t *)SPI3_BASE)
#define USART2_U32_PTR    ((uint32_t *)USART2_BASE)
#define USART3_U32_PTR    ((uint32_t *)USART3_BASE)
#define UART4_U32_PTR    ((uint32_t *)UART4_BASE)
#define UART5_U32_PTR    ((uint32_t *)UART5_BASE)
#define I2C1_U32_PTR    ((uint32_t *)I2C1_BASE)
#define I2C2_U32_PTR    ((uint32_t *)I2C2_BASE)
#define USB_U16_PTR    ((uint16_t *)USB_BASE)
#define CAN_CRTL1_U32_PTR    ((uint32_t *)CAN1_BASE)
#define BKP_U32_PTR    ((uint32_t *)BKP_BASE)
#define PWR_U32_PTR    ((uint32_t *)PWR_BASE)
#define DAC1_U32_PTR    ((uint32_t *)DAC_BASE)
#define DAC_U32_PTR    ((uint32_t *)DAC_BASE) /* Kept for legacy purpose */
#define AFIO_U32_PTR    ((uint32_t *)AFIO_BASE)
#define EXTI_U32_PTR    ((uint32_t *)EXTI_BASE)
#define GPIOA_U32_PTR    ((uint32_t *)GPIOA_BASE)
#define GPIOB_U32_PTR    ((uint32_t *)GPIOB_BASE)
#define GPIOC_U32_PTR    ((uint32_t *)GPIOC_BASE)
#define GPIOD_U32_PTR    ((uint32_t *)GPIOD_BASE)
#define GPIOE_U32_PTR    ((uint32_t *)GPIOE_BASE)
#define GPIOF_U32_PTR    ((uint32_t *)GPIOF_BASE)
#define GPIOG_U32_PTR    ((uint32_t *)GPIOG_BASE)
#define ADC1_U32_PTR    ((uint32_t *)ADC1_BASE)
#define ADC2_U32_PTR    ((uint32_t *)ADC2_BASE)
#define ADC3_U32_PTR    ((uint32_t *)ADC3_BASE)
#define ADC12_COMMON_U32_PTR    ((uint32_t *)ADC1_BASE)
#define TIM1_U32_PTR    ((uint32_t *)TIM1_BASE)
#define SPI1_U32_PTR    ((uint32_t *)SPI1_BASE)
#define TIM8_U32_PTR    ((uint32_t *)TIM8_BASE)
#define USART1_U32_PTR    ((uint32_t *)USART1_BASE)
#define SDIO_U32_PTR    ((uint32_t *)SDIO_BASE)
#define DMA1_U32_PTR    ((uint32_t *)DMA1_BASE)
#define DMA2_U32_PTR    ((uint32_t *)DMA2_BASE)
#define DMA1_Channel1_U32_PTR    ((uint32_t *)DMA1_Channel1_BASE)
#define DMA1_Channel2_U32_PTR    ((uint32_t *)DMA1_Channel2_BASE)
#define DMA1_Channel3_U32_PTR    ((uint32_t *)DMA1_Channel3_BASE)
#define DMA1_Channel4_U32_PTR    ((uint32_t *)DMA1_Channel4_BASE)
#define DMA1_Channel5_U32_PTR    ((uint32_t *)DMA1_Channel5_BASE)
#define DMA1_Channel6_U32_PTR    ((uint32_t *)DMA1_Channel6_BASE)
#define DMA1_Channel7_U32_PTR    ((uint32_t *)DMA1_Channel7_BASE)
#define DMA2_Channel1_U32_PTR    ((uint32_t *)DMA2_Channel1_BASE)
#define DMA2_Channel2_U32_PTR    ((uint32_t *)DMA2_Channel2_BASE)
#define DMA2_Channel3_U32_PTR    ((uint32_t *)DMA2_Channel3_BASE)
#define DMA2_Channel4_U32_PTR    ((uint32_t *)DMA2_Channel4_BASE)
#define DMA2_Channel5_U32_PTR    ((uint32_t *)DMA2_Channel5_BASE)
#define RCC_U32_PTR    ((uint32_t *)RCC_BASE)
#define CRC_U32_PTR    ((uint32_t *)CRC_BASE)
#define FLASH_U32_PTR    ((uint32_t *)FLASH_R_BASE)
#define OB_U16_PTR    ((uint16_t *)OB_BASE)
//#define FSMC_Bank1          ((FSMC_Bank1_TypeDef *)FSMC_BANK1_R_BASE)
//#define FSMC_Bank1E         ((FSMC_Bank1E_TypeDef *)FSMC_BANK1E_R_BASE)
//#define FSMC_Bank2_3        ((FSMC_Bank2_3_TypeDef *)FSMC_BANK2_3_R_BASE)
//#define FSMC_Bank4          ((FSMC_Bank4_TypeDef *)FSMC_BANK4_R_BASE)
#define DBGMCU_U32_PTR    ((uint32_t *)DBGMCU_BASE)

#ifdef __cplusplus
  }
#endif /* __cplusplus */
  
#endif /* __STM32F1xx_REGS_H */
