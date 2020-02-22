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
#define INT_6_Pin GPIO_PIN_14
#define INT_6_GPIO_Port GPIOC
#define INT_5_Pin GPIO_PIN_15
#define INT_5_GPIO_Port GPIOC
#define SERVO2_Pin GPIO_PIN_1
#define SERVO2_GPIO_Port GPIOA
#define SERVO1_Pin GPIO_PIN_2
#define SERVO1_GPIO_Port GPIOA
#define INT_7_Pin GPIO_PIN_3
#define INT_7_GPIO_Port GPIOA
#define INT_8_Pin GPIO_PIN_4
#define INT_8_GPIO_Port GPIOA
#define MOTOR1_Pin GPIO_PIN_6
#define MOTOR1_GPIO_Port GPIOA
#define MOTOR2_Pin GPIO_PIN_7
#define MOTOR2_GPIO_Port GPIOA
#define MOTOR3_Pin GPIO_PIN_0
#define MOTOR3_GPIO_Port GPIOB
#define MOTOR4_Pin GPIO_PIN_1
#define MOTOR4_GPIO_Port GPIOB
#define SENSE_SCL_Pin GPIO_PIN_10
#define SENSE_SCL_GPIO_Port GPIOB
#define SENSE_SDA_Pin GPIO_PIN_11
#define SENSE_SDA_GPIO_Port GPIOB
#define LUCES_1_Pin GPIO_PIN_12
#define LUCES_1_GPIO_Port GPIOB
#define LUCES_2_Pin GPIO_PIN_13
#define LUCES_2_GPIO_Port GPIOB
#define LUCES_3_Pin GPIO_PIN_14
#define LUCES_3_GPIO_Port GPIOB
#define INT_1_Pin GPIO_PIN_8
#define INT_1_GPIO_Port GPIOA
#define INT_2_Pin GPIO_PIN_9
#define INT_2_GPIO_Port GPIOA
#define INT_3_Pin GPIO_PIN_10
#define INT_3_GPIO_Port GPIOA
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
