/*
Copyright 2018 Mattia Dal Ben <matthewdibi@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

/* Use I2C or Serial, not both */
// #define USE_SERIAL
#define USE_I2C


/* Select hand configuration */
#define MASTER_LEFT
// #define MASTER_RIGHT
#define EE_HANDS
#undef MATRIX_ROWS
#undef MATRIX_COLS
/* key matrix size */
#define MATRIX_ROWS 10
#define MATRIX_COLS 7
#undef DEBOUNCE
#define DEBOUNCE 1
/*
 * Keyboard Matrix Assignments
 *
 * Change this to how you wired your keyboard
 * COLS: AVR pins used for columns, left to right
 * ROWS: AVR pins used for rows, top to bottom
 * DIODE_DIRECTION: COL2ROW = COL = Anode (+), ROW = Cathode (-, marked on diode)
 *                  ROW2COL = ROW = Anode (+), COL = Cathode (-, marked on diode)
 *
 */
#undef MATRIX_ROW_PINS
#define MATRIX_ROW_PINS \
    { B5, B4, E6, D7, D4 }
    // { D4, D7, E6, B4, B5 }
#define MATRIX_COL_PINS \
    { F5, F6, F7, B1, B3, B2, B6 }
    // { D0, D4, C6, D7, E6, B4, B5 }
#define MATRIX_ROW_PINS_RIGHT \
    { D4, D7, E6, B4, B5 }
#define MATRIX_COL_PINS_RIGHT \
    { B6, B2, B3, B1, F7, F6, F5 }
#define UNUSED_PINS

/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION COL2ROW


#undef RGBLED_NUM
#define RGBLIGHT_ANIMATIONS
#define RGBLED_NUM 14
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8

