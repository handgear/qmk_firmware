// Copyright 2022 Luke Kwon (@Luke Kwon)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "config_common.h"

/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 22

#define MATRIX_ROW_PINS { B13, B14, B15, A8, A9, A3, A10, A1, A2, A15, A0 }
#define MATRIX_COL_PINS { B11, B10, B1, B0, A7, A6, A5, A4 }

#define NUM_LOCK_LED_PIN B5
#define SCROLL_LOCK_LED_PIN B4
#define CAPS_LOCK_LED_PIN B3

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
