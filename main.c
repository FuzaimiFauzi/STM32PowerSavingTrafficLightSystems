/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */
/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/
UART_HandleTypeDef huart2;

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
static void MX_USART2_UART_Init(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */

void startup() {
	  /*startup code where the IR sensor detects obstacle,
	  and it will turn on green LED on board
	  and starting up traffic light system by turning on red LED
	  and dash symbol on seven segment display*/
      HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, 1); //LED_BOARD_GREEN ON (VEHICLE DETECTED)
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0, 1); //LED RED (TRAFFIC ON RED)
	  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, 1); //CENTRE SEGMENT
	  HAL_Delay(1000);
      }

void countdown() {
	  //display all digit 9 down to digit 0 with time interval of 1 second

	  //display digit 9
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, 1); //A
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_1, 1); //B
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10,1); //C
	  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, 1); //D
	  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, 0); //E
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_0, 1); //F
	  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, 1); //G
	  HAL_Delay(1000); //delay the display digit for 1 second

	  //display digit 8
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, 1); //A
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_1, 1); //B
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10,1); //C
	  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, 1); //D
	  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, 1); //E
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_0, 1); //F
	  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, 1); //G
	  HAL_Delay(1000); //delay the display digit for 1 second

	  //display digit 7
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, 1); //A
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_1, 1); //B
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10,1); //C
	  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, 0); //D
	  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, 0); //E
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_0, 0); //F
	  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, 0); //G
	  HAL_Delay(1000); //delay the display digit for 1 second

	  //display digit 6
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, 1); //A
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_1, 0);
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10,1);
	  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, 1);
	  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, 1);
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_0, 1);
	  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, 1);
	  HAL_Delay(1000); //delay the display digit for 1 second

	  //display digit 5
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, 1); //A
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_1, 0);
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10,1);
	  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, 1);
	  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, 0);
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_0, 1);
	  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, 1);
	  HAL_Delay(1000); //delay the display digit for 1 second

	  //display digit 4
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, 0); //A
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_1, 1);
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10,1);
	  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, 0);
	  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, 0);
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_0, 1);
	  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, 1);
	  HAL_Delay(1000); //delay the display digit for 1 second

	  //display digit 3
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, 1); //A
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_1, 1);
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10,1);
	  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, 1);
	  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, 0);
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_0, 0);
	  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, 1);
	  HAL_Delay(1000); //delay the display digit for 1 second

	  //display digit 2
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, 1); //A
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_1, 1);
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10,0);
	  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, 1);
	  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, 1);
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_0, 0);
	  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, 1);
	  HAL_Delay(1000); //delay the display digit for 1 second

	  //display digit 1
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, 0); //A
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_1, 1);
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10,1);
	  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, 0);
	  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, 0);
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_0, 0);
	  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, 0);
	  HAL_Delay(1000); //delay the display digit for 1 second

	  //display digit 0
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, 1); //A
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_1, 1);
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10,1);
	  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, 1);
	  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, 1);
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_0, 1);
	  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, 0);
	  HAL_Delay(1000); //delay the display digit for 1 second
      }


void yellow(){
	  //Turn on Yellow LED and turn off Green and Red LED
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0, 0); //LED RED
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, 1); //LED YELLOW
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, 0); //LED GREEN
	  }

void green(){
	  /*if there is no segment reset,
	  * the traffic light exchange session will be interrupted
	  turn off LED YELLOW and turn on LED GREEN for 9 second */
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, 0);
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_1, 0);
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10,0);
	  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, 0);
	  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, 0);
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_0, 0);
	  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, 0);

	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0, 0); //LED RED
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, 0); //LED YELLOW
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, 1); //LED GREEN
	  }

void reset(){
	  //resetting all peripherals to '0' states
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0, 0); //LED RED
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, 0); //LED YELLOW
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, 0); //LED GREEN

	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, 0); //A
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_1, 0); //B
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10,0); //C
	  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, 0); //D
	  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, 0); //E
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_0, 0); //F
	  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, 0); //G
	  HAL_Delay(1000); //delay the display digit for 1 second
	  }

void standby(){
      /* all LEDs and Seven Segment turned off
	  dash symbol emits as sign the system is operating */
	  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, 1);
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, 0);
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0, 1); //LED RED
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, 0); //LED Yellow
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, 0); //LED GREEN
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, 0);
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_1, 0);
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_0, 0);
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_10,0);
	  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, 0);
	  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, 0);
      }

int main(void)
{
  /* USER CODE BEGIN 1 */


  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  MX_USART2_UART_Init();
  /* USER CODE BEGIN 2 */

  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */

  while (1)
  {

    /* USER CODE END WHILE */
	  //if IR Sensor at Pin A9 detects obstacle
	  if (HAL_GPIO_ReadPin(GPIOA,GPIO_PIN_9)==0) //PA9-D8 ON BOARD
	  	  	  {

		  	  startup();
		  	  countdown();

		  	  reset();

		  	  green();
	          countdown();

	          yellow();
	          HAL_Delay(1000); //if delay is unavailable, the traffic light will change from red to green without yellow light

	          reset();
	  	  	  }


	  ////if IR Sensor at Pin A9 do not detect obstacle
	  else
	  	  	  {
	  	  	  standby();
	  	  	  }


    /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Configure the main internal regulator output voltage
  */
  __HAL_RCC_PWR_CLK_ENABLE();
  __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE2);
  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSI;
  RCC_OscInitStruct.PLL.PLLM = 8;
  RCC_OscInitStruct.PLL.PLLN = 72;
  RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV2;
  RCC_OscInitStruct.PLL.PLLQ = 7;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV2;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_2) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief USART2 Initialization Function
  * @param None
  * @retval None
  */
static void MX_USART2_UART_Init(void)
{

  /* USER CODE BEGIN USART2_Init 0 */

  /* USER CODE END USART2_Init 0 */

  /* USER CODE BEGIN USART2_Init 1 */

  /* USER CODE END USART2_Init 1 */
  huart2.Instance = USART2;
  huart2.Init.BaudRate = 115200;
  huart2.Init.WordLength = UART_WORDLENGTH_8B;
  huart2.Init.StopBits = UART_STOPBITS_1;
  huart2.Init.Parity = UART_PARITY_NONE;
  huart2.Init.Mode = UART_MODE_TX_RX;
  huart2.Init.HwFlowCtl = UART_HWCONTROL_NONE;
  huart2.Init.OverSampling = UART_OVERSAMPLING_16;
  if (HAL_UART_Init(&huart2) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN USART2_Init 2 */

  /* USER CODE END USART2_Init 2 */

}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOC_CLK_ENABLE();
  __HAL_RCC_GPIOH_CLK_ENABLE();
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_0|GPIO_PIN_1, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0|GPIO_PIN_1|GPIO_PIN_4|LD2_Pin
                          |GPIO_PIN_8|GPIO_PIN_10, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4|GPIO_PIN_5|GPIO_PIN_6, GPIO_PIN_RESET);

  /*Configure GPIO pin : B1_Pin */
  GPIO_InitStruct.Pin = B1_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_IT_FALLING;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(B1_GPIO_Port, &GPIO_InitStruct);

  /*Configure GPIO pins : PC0 PC1 */
  GPIO_InitStruct.Pin = GPIO_PIN_0|GPIO_PIN_1;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOC, &GPIO_InitStruct);

  /*Configure GPIO pins : PA0 PA1 PA4 PA8
                           PA10 */
  GPIO_InitStruct.Pin = GPIO_PIN_0|GPIO_PIN_1|GPIO_PIN_4|GPIO_PIN_8
                          |GPIO_PIN_10;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pin : LD2_Pin */
  GPIO_InitStruct.Pin = LD2_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_PULLDOWN;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(LD2_GPIO_Port, &GPIO_InitStruct);

  /*Configure GPIO pin : IR_SENSOR_Pin */
  GPIO_InitStruct.Pin = IR_SENSOR_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_PULLDOWN;
  HAL_GPIO_Init(IR_SENSOR_GPIO_Port, &GPIO_InitStruct);

  /*Configure GPIO pins : PB4 PB5 PB6 */
  GPIO_InitStruct.Pin = GPIO_PIN_4|GPIO_PIN_5|GPIO_PIN_6;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
