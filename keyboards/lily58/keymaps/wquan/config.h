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
#define TAPPING_TERM 200

#define LTO_ENABLE

#ifdef OLED_ENABLE
    #define MINUTE_TO_MS                60000  // 60 seconds * 1000 milliseconds

    #define OLED_SCREENSAVER_TIMEOUT    .5 * MINUTE_TO_MS  // .5 minute of no activity to turn on OLED screensaver
    #define OLED_TIMEOUT                3 * MINUTE_TO_MS  // 2 minutes of no activity to turn OLED off
#endif

#define AUTO_SHIFT_NO_AUTO_REPEAT
#define AUTO_SHIFT_TIMEOUT 150

#define ONESHOT_TAP_TOGGLE 5  /* Tapping this number of times holds the key until tapped once again. */
#define ONESHOT_TIMEOUT 5000  /* Time (in ms) before the one shot key is released */

#undef RGBLED_NUM
#define RGBLED_NUM 10
#define RGBLED_SPLIT { 5, 5 }
#define RGBLIGHT_EFFECT_ALTERNATING
#define RGBLIGHT_EFFECT_BREATHING
#define RGBLIGHT_EFFECT_CHRISTMAS
#define RGBLIGHT_EFFECT_KNIGHT
#define RGBLIGHT_EFFECT_RAINBOW_MOOD
#define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#define RGBLIGHT_EFFECT_RGB_TEST
#define RGBLIGHT_EFFECT_SNAKE
#define RGBLIGHT_EFFECT_STATIC_GRADIENT
#define RGBLIGHT_EFFECT_TWINKLE

#define RGBLIGHT_DISABLE_KEYCODES
#define RGBLIGHT_DEFAULT_MODE RGBLIGHT_MODE_TWINKLE
#undef  RGBLIGHT_DEFAULT_HUE
#define RGBLIGHT_DEFAULT_HUE 190
#undef RGBLIGHT_DEFAULT_SAT
#define RGBLIGHT_DEFAULT_SAT 50

// Underglow
/*
#undef RGBLED_NUM
#define RGBLED_NUM 14    // Number of LEDs
#define RGBLIGHT_SLEEP
*/
