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
// #define MASTER_RIGHT
// #define EE_HANDS

#define USB_SUSPEND_WAKEUP_DELAY 5000

#define QUICK_TAP_TERM 0
#define TAPPING_TERM 200

#define LTO_ENABLE

#ifdef OLED_ENABLE
    #define MINUTE_TO_MS                60000  // 60 seconds * 1000 milliseconds

    #define OLED_SCREENSAVER_TIMEOUT    .5 * MINUTE_TO_MS  // .5 minute of no activity to turn on OLED screensaver
    #define OLED_TIMEOUT                3 * MINUTE_TO_MS  // 2 minutes of no activity to turn OLED off
#endif

#define AUTO_SHIFT_NO_AUTO_REPEAT
#define AUTO_SHIFT_TIMEOUT 140

#define COMBO_TERM 25

#undef RGBLED_NUM
#define RGBLED_NUM 22
#define RGBLED_SPLIT { 11, 11 }
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
#define RGBLIGHT_SLEEP

// Underglow
/*
#undef RGBLED_NUM
#define RGBLED_NUM 14    // Number of LEDs
#define RGBLIGHT_SLEEP
*/
