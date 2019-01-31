/* USER CODE BEGIN Includes */
/*
 * init.h
 *
 *  Created on: Jan 28, 2019
 *      Author: Caustic_Zinc
 */
#pragma once
#ifndef INC_INIT_H_
#define INC_INIT_H_
#include "stdbool.h"


bool PowerOn(); //Sends HIGH pulses to hoverboard boards to turn them on
bool Hanshake(); //Sends handshake to all boards to check for comunication validaty.
void calibrateSensors();


#endif /* INC_INIT_H_ */
/* USER CODE END Includes */
