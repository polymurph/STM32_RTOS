#include "app_main.h"

#include "main.h"
#include "stm32f4xx_hal.h"
#include "cmsis_os.h"

void appMain(void* args)
{

	while(1)
	{
		HAL_GPIO_WritePin(LD6_GPIO_Port, LD6_Pin, GPIO_PIN_SET);

		osDelay(100);

		HAL_GPIO_WritePin(LD6_GPIO_Port, LD6_Pin, GPIO_PIN_RESET);

		osDelay(100);
	}
}
