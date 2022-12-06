// Copyright 2022 Luke Kwon (@Luke Kwon)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "config_common.h"

/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 24

// #define MATRIX_ROW_PINS { B11, B10, B1, B0, A7, A6 }
// #define MATRIX_COL_PINS { B13, B14, B15, A8, A9, A3, A10, A1, A2, A15, A0, A5, A4 }


// ROW drive pins
#define ROW_PIN_0 B0
#define ROW_PIN_1 A1
#define ROW_PIN_2 B1
#define ROW_PIN_3 B3
#define ROW_PIN_4 B5
#define ROW_PIN_5 B4   

// COL direct input pins
#define COL_PIN_16 A0
#define COL_PIN_17 A4
#define COL_PIN_18 A2	
#define COL_PIN_19 A3	
#define COL_PIN_20 A5	
#define COL_PIN_21 A6	
#define COL_PIN_22 A7	

// lock indication pins
#define NUM_LOCK_LED_PIN B14
#define CAPS_LOCK_LED_PIN B13
#define SCROLL_LOCK_LED_PIN B12 
#define LED_PIN_ON_STATE 0

#define TEST_LED_PIN C13


/* I2C related */
#define I2C1_SCL_PIN B6
#define I2C1_SDA_PIN B7
#define I2C1_SCL_PAL_MODE 4
#define I2C1_SDA_PAL_MODE 4



/* COL2ROW, ROW2COL */
#define DIODE_DIRECTION ROW2COL

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5


/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
