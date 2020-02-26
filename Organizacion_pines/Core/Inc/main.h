/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                             www.st.com/SLA0044
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define ENC1_B_Pin GPIO_PIN_14
#define ENC1_B_GPIO_Port GPIOC
#define ENC1_A_Pin GPIO_PIN_15
#define ENC1_A_GPIO_Port GPIOC
#define IMU_INT_Pin GPIO_PIN_0
#define IMU_INT_GPIO_Port GPIOA
#define SERVO2_Pin GPIO_PIN_1
#define SERVO2_GPIO_Port GPIOA
#define SERVO1_Pin GPIO_PIN_2
#define SERVO1_GPIO_Port GPIOA
#define ENC2_A_Pin GPIO_PIN_3
#define ENC2_A_GPIO_Port GPIOA
#define ENC2_B_Pin GPIO_PIN_4
#define ENC2_B_GPIO_Port GPIOA
#define MOT1_1_Pin GPIO_PIN_5
#define MOT1_1_GPIO_Port GPIOA
#define MOT1_0_Pin GPIO_PIN_6
#define MOT1_0_GPIO_Port GPIOA
#define MOT2_0_Pin GPIO_PIN_7
#define MOT2_0_GPIO_Port GPIOA
#define MOT4_0_Pin GPIO_PIN_0
#define MOT4_0_GPIO_Port GPIOB
#define MOT3_0_Pin GPIO_PIN_1
#define MOT3_0_GPIO_Port GPIOB
#define SENSE_SCL_Pin GPIO_PIN_10
#define SENSE_SCL_GPIO_Port GPIOB
#define SENSE_SDA_Pin GPIO_PIN_11
#define SENSE_SDA_GPIO_Port GPIOB
#define MOT1_2_Pin GPIO_PIN_12
#define MOT1_2_GPIO_Port GPIOB
#define ENC4_A_Pin GPIO_PIN_13
#define ENC4_A_GPIO_Port GPIOB
#define MOT2_1_Pin GPIO_PIN_14
#define MOT2_1_GPIO_Port GPIOB
#define MOT2_2_Pin GPIO_PIN_15
#define MOT2_2_GPIO_Port GPIOB
#define ENC4_B_Pin GPIO_PIN_8
#define ENC4_B_GPIO_Port GPIOA
#define ENC3_A_Pin GPIO_PIN_9
#define ENC3_A_GPIO_Port GPIOA
#define ENC3_B_Pin GPIO_PIN_10
#define ENC3_B_GPIO_Port GPIOA
#define MOT4_2_Pin GPIO_PIN_15
#define MOT4_2_GPIO_Port GPIOA
#define MOT4_1_Pin GPIO_PIN_3
#define MOT4_1_GPIO_Port GPIOB
#define MOT3_1_Pin GPIO_PIN_4
#define MOT3_1_GPIO_Port GPIOB
#define MOT3_2_Pin GPIO_PIN_5
#define MOT3_2_GPIO_Port GPIOB
#define PRO_TX_Pin GPIO_PIN_6
#define PRO_TX_GPIO_Port GPIOB
#define PRO_RX_Pin GPIO_PIN_7
#define PRO_RX_GPIO_Port GPIOB
#define IMU_SCL_Pin GPIO_PIN_8
#define IMU_SCL_GPIO_Port GPIOB
#define IMU_SDA_Pin GPIO_PIN_9
#define IMU_SDA_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
