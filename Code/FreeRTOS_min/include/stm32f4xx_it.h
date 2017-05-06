/* vim: set sw=8 sts=8 noet foldmethod=syntax : */

#ifndef __STM32F4xx_IT_H
#define __STM32F4xx_IT_H

#include "stm32f4xx_hal.h"

#ifdef __cplusplus
extern "C" {
#endif


/* Includes ------------------------------------------------------------------*/
//#include "main.h"

/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
/* Exported macro ------------------------------------------------------------*/
//#define USE_USB_FS
/* Exported functions ------------------------------------------------------- */

//void NMI_Handler(void);
//void HardFault_Handler(void);
//void MemManage_Handler(void);
//void BusFault_Handler(void);
//void UsageFault_Handler(void);
//void SVC_Handler(void);
//void DebugMon_Handler(void);
//void PendSV_Handler(void);
//void SysTick_Handler(void);
#ifdef USE_USB_FS
void OTG_FS_IRQHandler(void);
#else
void OTG_HS_IRQHandler(void);
#endif
void USARTx_DMA_TX_IRQHandler(void);
void USARTx_IRQHandler(void);
void TIMx_IRQHandler(void);


void prvGetRegistersFromStack( uint32_t *pulFaultStackAddress );
void NMI_Handler(void);
void HardFault_Handler(void);
void MemManage_Handler(void);
void BusFault_Handler(void);
void UsageFault_Handler(void);
//void SVC_Handler(void);
void DebugMon_Handler(void);
//void PendSV_Handler(void);
void SysTick_Handler(void);

/* Acceleration interrupt handling */
void EXTI2_IRQHandler(void);
void EXTI3_IRQHandler(void);

#ifdef __cplusplus
}
#endif

#endif
