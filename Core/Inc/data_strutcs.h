/* USER CODE BEGIN Includes */
/*
 * data_strutcs.h
 *
 *  Created on: Jan 22, 2019
 *      Author: Caustic_Zinc
 */


#ifndef INC_DATA_STRUTCS_H_
#define INC_DATA_STRUTCS_H_

#endif /* INC_DATA_STRUTCS_H_ */
/* USER CODE END Includes */

/* USER CODE BEGIN Private defines */
typedef struct {
	uint16_t cmd; //Command code. Side boards will act depending on it.
	int16_t steer;
	int16_t speed;
//uint32_t crc;
} SerialOutCommandB; //Structure for sending data to side boards.

typedef struct {
	uint16_t cmd; //Command code. Side boards will act depending on it.
	int16_t speedR;                    //  output speed: 0-1000
	int16_t speedL;                    //  output speed: 0-1000
	int32_t posL;                    //  output location: 0-1000
		int32_t posR;                    //  output location: 0-1000
	int16_t batt1;          //  for battery voltage calibration
	int16_t batteryVoltage; //  for verifying battery voltage calibration
	int16_t board_temp_adc_filtered;   //  for board temperature calibration
	int16_t board_temp_deg_c;  //  for verifying board temperature calibration
	int16_t currL;  //  for left motor current
	int16_t currR;  //  for right motor current
//uint32_t crc;
} SerialInCommandB; //Structure for receiving data from side boards.

typedef struct {
	float x;
	float y;
	float z;
} Position;	//General position structure. Can be used for anything
typedef struct {
	float x;
	float y;
	float z;
} Rotation;//General rotation structure. Can be used for anything
typedef struct {
	float x;
	float y;
	float z;
	float magnitude;
} FieldVector; //General vector structure. Can be used for anything
typedef struct {
	uint8_t numOfSensors;
	Position Positions[numOfSensors];
	Rotation Rotations[numOfSensors];
	FieldVector FieldVectors[numOfSensors];
} MagField; //Structure to hold all of the magnetic field sensor data.
/* USER CODE END Private defines */
/* USER CODE BEGIN Prototypes */

/* USER CODE END Prototypes */

