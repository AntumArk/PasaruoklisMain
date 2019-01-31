/* USER CODE BEGIN Includes */
/*
 * init.c
 *
 *  Created on: Jan 28, 2019
 *      Author: Caustic_Zinc
 */
#include "init.h"
#include "config.h"
#include "gpio.h"
bool PowerOn(){
	//Power ON boards
	HAL_GPIO_WritePin(FrontBoard_PowerPin_GPIO_Port,FrontBoard_PowerPin_Pin,GPIO_PIN_SET);
	HAL_GPIO_WritePin(MiddleBoard_PowerPin_GPIO_Port,MiddleBoard_PowerPin_Pin,GPIO_PIN_SET);
	HAL_GPIO_WritePin(BackBoard_PowerPin_GPIO_Port,BackBoard_PowerPin_Pin,GPIO_PIN_SET);
	HAL_GPIO_WritePin(VESC_PowerPin_GPIO_Port,VESC_PowerPin_Pin,GPIO_PIN_SET);
	return true; //Return false on failure
}
bool Hanshake(){


	return true;
}


/* USER CODE END Includes */
