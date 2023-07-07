/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

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

//#define USE_MATRIX_I2C

/* Select hand configuration */

// #define MASTER_LEFT
#define MASTER_RIGHT // We do this as I only have OLED working on the right side
// #define EE_HANDS

#define QUICK_TAP_TERM 0
#define TAPPING_TERM 100
 
#ifdef OLED_ENABLE
    #define MINUTE_TO_MS                60000  // 60 seconds * 1000 milliseconds

    #define OLED_SCREENSAVER_TIMEOUT    .5 * MINUTE_TO_MS  // .5 minute of no activity to turn on OLED screensaver
    #define OLED_TIMEOUT                3 * MINUTE_TO_MS  // 2 minutes of no activity to turn OLED off
#endif

// Underglow
/*
#undef RGBLED_NUM
#define RGBLED_NUM 14    // Number of LEDs
#define RGBLIGHT_SLEEP
*/
