/* USER CODE BEGIN Includes */
/*
 * commands.h
 *
 *  Created on: Jan 22, 2019
 *      Author: Caustic_Zinc
 */
#pragma once
#ifndef INC_COMMANDS_H_
#define INC_COMMANDS_H_



#endif /* INC_COMMANDS_H_ */
// ############################### COMMANDS AND STATES ###############################
#define POWER_ON 0x00;
#define POWER_OFF 0x01;
#define SET_SPEED 0x02;
#define REGENERATION_OFF 0x03;
#define REGENERATION_ON 0x04;
#define FATAL_ERROR 0x05;
#define MALFUNCTION 0x06;
#define AUTOMODE 0x07;
#define MANUALMODE 0x08;
#define DEBUG 0x09;
#define LOG 0x0A;
#define LOW_BATTERY 0x0B;
#define BATTERY_CHARGED 0x0C;
#define BATTERY_CHARGING 0x0D;
#define CONSERVATIVE_MODE 0x0E;
#define PERFORMANCE_MODE 0x0F;
#define BOARD_OVERHEATING 0x10;
#define SET_PID 0x11;
#define BASIC_CONTROL 0x12;
#define SIN_CONTROL 0x13;
#define FUC_CONTROL 0x14;
#define MULTIPOLE_CONTROL 0x15;
#define INVERT_MOTORL 0x16;
#define INVERT_MOTORR 0x17;
//#define NAME 0x18;
//#define NAME 0x19;
//#define NAME 0x1A;
//#define NAME 0x1B;
//#define NAME 0x1C;
//#define NAME 0x1D;
//#define NAME 0x1E;
//#define NAME 0x1F;
//#define NAME 0x20;
//#define NAME 0x21;
//#define NAME 0x22;
//#define NAME 0x23;
//#define NAME 0x24;
//#define NAME 0x25;
//#define NAME 0x26;
//#define NAME 0x27;
//#define NAME 0x28;
//#define NAME 0x29;
//#define NAME 0x2A;
//#define NAME 0x2B;
//#define NAME 0x2C;
//#define NAME 0x2D;
//#define NAME 0x2E;
//#define NAME 0x2F;
//#define NAME 0x30;
//#define NAME 0x31;
//#define NAME 0x32;
//#define NAME 0x33;
//#define NAME 0x34;
//#define NAME 0x35;
//#define NAME 0x36;
//#define NAME 0x37;
//#define NAME 0x38;
//#define NAME 0x39;
//#define NAME 0x3A;
//#define NAME 0x3B;
//#define NAME 0x3C;
//#define NAME 0x3D;
//#define NAME 0x3E;
//#define NAME 0x3F;
//#define NAME 0x40;
//#define NAME 0x41;
//#define NAME 0x42;
//#define NAME 0x43;
//#define NAME 0x44;
//#define NAME 0x45;
//#define NAME 0x46;
//#define NAME 0x47;
//#define NAME 0x48;
//#define NAME 0x49;
//#define NAME 0x4A;
//#define NAME 0x4B;
//#define NAME 0x4C;
//#define NAME 0x4D;
//#define NAME 0x4E;
//#define NAME 0x4F;
//#define NAME 0x50;
//#define NAME 0x51;
//#define NAME 0x52;
//#define NAME 0x53;
//#define NAME 0x54;
//#define NAME 0x55;
//#define NAME 0x56;
//#define NAME 0x57;
//#define NAME 0x58;
//#define NAME 0x59;
//#define NAME 0x5A;
//#define NAME 0x5B;
//#define NAME 0x5C;
//#define NAME 0x5D;
//#define NAME 0x5E;
//#define NAME 0x5F;
//#define NAME 0x60;
//#define NAME 0x61;
//#define NAME 0x62;
//#define NAME 0x63;
//#define NAME 0x64;
//#define NAME 0x65;
//#define NAME 0x66;
//#define NAME 0x67;
//#define NAME 0x68;
//#define NAME 0x69;
//#define NAME 0x6A;
//#define NAME 0x6B;
//#define NAME 0x6C;
//#define NAME 0x6D;
//#define NAME 0x6E;
//#define NAME 0x6F;
//#define NAME 0x70;
//#define NAME 0x71;
//#define NAME 0x72;
//#define NAME 0x73;
//#define NAME 0x74;
//#define NAME 0x75;
//#define NAME 0x76;
//#define NAME 0x77;
//#define NAME 0x78;
//#define NAME 0x79;
//#define NAME 0x7A;
//#define NAME 0x7B;
//#define NAME 0x7C;
//#define NAME 0x7D;
//#define NAME 0x7E;
//#define NAME 0x7F;
//#define NAME 0x80;
//#define NAME 0x81;
//#define NAME 0x82;
//#define NAME 0x83;
//#define NAME 0x84;
//#define NAME 0x85;
//#define NAME 0x86;
//#define NAME 0x87;
//#define NAME 0x88;
//#define NAME 0x89;
//#define NAME 0x8A;
//#define NAME 0x8B;
//#define NAME 0x8C;
//#define NAME 0x8D;
//#define NAME 0x8E;
//#define NAME 0x8F;
//#define NAME 0x90;
//#define NAME 0x91;
//#define NAME 0x92;
//#define NAME 0x93;
//#define NAME 0x94;
//#define NAME 0x95;
//#define NAME 0x96;
//#define NAME 0x97;
//#define NAME 0x98;
//#define NAME 0x99;
//#define NAME 0x9A;
//#define NAME 0x9B;
//#define NAME 0x9C;
//#define NAME 0x9D;
//#define NAME 0x9E;
//#define NAME 0x9F;
//#define NAME 0xA0;
//#define NAME 0xA1;
//#define NAME 0xA2;
//#define NAME 0xA3;
//#define NAME 0xA4;
//#define NAME 0xA5;
//#define NAME 0xA6;
//#define NAME 0xA7;
//#define NAME 0xA8;
//#define NAME 0xA9;
//#define NAME 0xAA;
//#define NAME 0xAB;
//#define NAME 0xAC;
//#define NAME 0xAD;
//#define NAME 0xAE;
//#define NAME 0xAF;
//#define NAME 0xB0;
//#define NAME 0xB1;
//#define NAME 0xB2;
//#define NAME 0xB3;
//#define NAME 0xB4;
//#define NAME 0xB5;
//#define NAME 0xB6;
//#define NAME 0xB7;
//#define NAME 0xB8;
//#define NAME 0xB9;
//#define NAME 0xBA;
//#define NAME 0xBB;
//#define NAME 0xBC;
//#define NAME 0xBD;
//#define NAME 0xBE;
//#define NAME 0xBF;
//#define NAME 0xC0;
//#define NAME 0xC1;
//#define NAME 0xC2;
//#define NAME 0xC3;
//#define NAME 0xC4;
//#define NAME 0xC5;
//#define NAME 0xC6;
//#define NAME 0xC7;

// ############################### MATH ###############################
#define MILLI_R (R * 1000)
#define MILLI_PSI (PSI * 1000)
#define MILLI_V (V * 1000)
#define NO 0
#define YES 1
#define ABS(a) (((a) < 0.0) ? -(a) : (a))
#define LIMIT(x, lowhigh) (((x) > (lowhigh)) ? (lowhigh) : (((x) < (-lowhigh)) ? (-lowhigh) : (x)))
#define SAT(x, lowhigh) (((x) > (lowhigh)) ? (1.0) : (((x) < (-lowhigh)) ? (-1.0) : (0.0)))
#define SAT2(x, low, high) (((x) > (high)) ? (1.0) : (((x) < (low)) ? (-1.0) : (0.0)))
#define STEP(from, to, step) (((from) < (to)) ? (MIN((from) + (step), (to))) : (MAX((from) - (step), (to))))
#define DEG(a) ((a)*M_PI / 180.0)
#define RAD(a) ((a)*180.0 / M_PI)
#define SIGN(a) (((a) < 0.0) ? (-1.0) : (((a) > 0.0) ? (1.0) : (0.0)))
#define CLAMP(x, low, high) (((x) > (high)) ? (high) : (((x) < (low)) ? (low) : (x)))
#define SCALE(value, high, max) MIN(MAX(((max) - (value)) / ((max) - (high)), 0.0), 1.0)
#define MIN(a, b) (((a) < (b)) ? (a) : (b))
#define MAX(a, b) (((a) > (b)) ? (a) : (b))
#define MIN3(a, b, c) MIN(a, MIN(b, c))
#define MAX3(a, b, c) MAX(a, MAX(b, c))
// ############################### DO-NOT-TOUCH SETTINGS ###############################

#define PWM_FREQ         16000      // PWM frequency in Hz
#define DEAD_TIME        32         // PWM deadtime

#define DELAY_IN_MAIN_LOOP 5        // in ms. default 5. it is independent of all the timing critical stuff. do not touch if you do not know what you are doing.

#define TIMEOUT          5          // number of wrong / missing input commands before emergency off

// ############################### GENERAL ###############################

// How to calibrate: connect GND and RX of a 3.3v uart-usb adapter to the right sensor board cable (be careful not to use the red wire of the cable. 15v will destroye verything.). if you are using nunchuck, disable it temporarily. enable DEBUG_SERIAL_USART3 and DEBUG_SERIAL_ASCII use asearial terminal.

// Battery voltage calibration: connect power source. see <How to calibrate>. write value nr 5 to BAT_CALIB_ADC. make and flash firmware. then you can verify voltage on value 6 (devide it by 100.0 to get calibrated voltage).
#define BAT_CALIB_REAL_VOLTAGE        43.0       // input voltage measured by multimeter
#define BAT_CALIB_ADC                 1704       // adc-value measured by mainboard (value nr 5 on UART debug output)

#define BAT_NUMBER_OF_CELLS     10        // normal Hoverboard battery: 10s
#define BAT_LOW_LVL1_ENABLE     0         // to beep or not to beep, 1 or 0
#define BAT_LOW_LVL1            3.6       // gently beeps at this voltage level. [V/cell]
#define BAT_LOW_LVL2_ENABLE     1         // to beep or not to beep, 1 or 0
#define BAT_LOW_LVL2            3.5       // your battery is almost empty. Charge now! [V/cell]
#define BAT_LOW_DEAD            3.37      // undervoltage poweroff. (while not driving) [V/cell]

#define DC_CUR_LIMIT     15         // DC current limit in amps per motor. so 15 means it will draw 30A out of your battery. it does not disable motors, it is a soft current limit.

// Board overheat detection: the sensor is inside the STM/GD chip. it is very inaccurate without calibration (up to 45°C). so only enable this funcion after calibration! let your board cool down. see <How to calibrate>. get the real temp of the chip by thermo cam or another temp-sensor taped on top of the chip and write it to TEMP_CAL_LOW_DEG_C. write debug value 8 to TEMP_CAL_LOW_ADC. drive around to warm up the board. it should be at least 20°C warmer. repeat it for the HIGH-values. enable warning and/or poweroff and make and flash firmware.
#define TEMP_CAL_LOW_ADC        1655      // temperature 1: ADC value
#define TEMP_CAL_LOW_DEG_C      35.8      // temperature 1: measured temperature [°C]
#define TEMP_CAL_HIGH_ADC       1588      // temperature 2: ADC value
#define TEMP_CAL_HIGH_DEG_C     48.9      // temperature 2: measured temperature [°C]
#define TEMP_WARNING_ENABLE     0         // to beep or not to beep, 1 or 0, DO NOT ACTIVITE WITHOUT CALIBRATION!
#define TEMP_WARNING            60        // annoying fast beeps [°C]
#define TEMP_POWEROFF_ENABLE    0         // to poweroff or not to poweroff, 1 or 0, DO NOT ACTIVITE WITHOUT CALIBRATION!
#define TEMP_POWEROFF           65        // overheat poweroff. (while not driving) [°C]

#define INACTIVITY_TIMEOUT 8        // minutes of not driving until poweroff. it is not very precise.


// ############################### DRIVING BEHAVIOR ###############################

// inputs:
// - cmd1 and cmd2: analog normalized input values. -1000 to 1000
// - button1 and button2: digital input values. 0 or 1
// - adc_buffer.l_tx2 and adc_buffer.l_rx2: unfiltered ADC values (you do not need them). 0 to 4095
// outputs:
// - speedR and speedL: normal driving -1000 to 1000
// - weakr and weakl: field weakening for extra boost at high speed (speedR > 700 and speedL > 700). 0 to ~400

#define FILTER              0.1  // lower value == softer filter. do not use values <0.01, you will get float precision issues.
#define SPEED_COEFFICIENT   0.5  // higher value == stronger. 0.0 to ~2.0?
#define STEER_COEFFICIENT   0.5  // higher value == stronger. if you do not want any steering, set it to 0.0; 0.0 to 1.0
#define INVERT_R_DIRECTION
#define INVERT_L_DIRECTION
#define BEEPS_BACKWARD 1    // 0 or 1

//Turbo boost at high speeds while button1 is pressed:
//#define ADDITIONAL_CODE \
if (button1 && speedR > 700) { /* field weakening at high speeds */ \
  weakl = cmd1 - 700; /* weak should never exceed 400 or 450 MAX!! */ \
  weakr = cmd1 - 700; } \
else { \
  weakl = 0; \
  weakr = 0; }


// ############################### VALIDATE SETTINGS ###############################

#if defined CONTROL_SERIAL_USART2 && defined CONTROL_ADC
  #error CONTROL_ADC and CONTROL_SERIAL_USART2 not allowed. it is on the same cable.
#endif

#if defined CONTROL_SERIAL_USART2 && defined CONTROL_PPM
  #error CONTROL_PPM and CONTROL_SERIAL_USART2 not allowed. it is on the same cable.
#endif

#if defined DEBUG_SERIAL_USART3 && defined CONTROL_NUNCHUCK
  #error CONTROL_NUNCHUCK and DEBUG_SERIAL_USART3 not allowed. it is on the same cable.
#endif

#if defined DEBUG_SERIAL_USART3 && defined DEBUG_I2C_LCD
  #error DEBUG_I2C_LCD and DEBUG_SERIAL_USART3 not allowed. it is on the same cable.
#endif

#if defined CONTROL_PPM && defined CONTROL_ADC && defined CONTROL_NUNCHUCK || defined CONTROL_PPM && defined CONTROL_ADC || defined CONTROL_ADC && defined CONTROL_NUNCHUCK || defined CONTROL_PPM && defined CONTROL_NUNCHUCK
  #error only 1 input method allowed. use CONTROL_PPM or CONTROL_ADC or CONTROL_NUNCHUCK.
#endif





/* USER CODE END Includes */
