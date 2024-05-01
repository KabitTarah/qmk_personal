/* Copyright 2021 Tarah Tamayo
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define LAYOUT_wrapper(...)   LAYOUT(__VA_ARGS__)

#ifdef OLED_DRIVER_ENABLE
  #define OLED_DISPLAY_128X64
#endif

// #ifdef RGBLIGHT_ENABLE
//   #define RGBLIGHT_ANIMATIONS
//   #define RGBLIGHT_HUE_STEP 8
//   #define RGBLIGHT_SAT_STEP 8
//   #define RGBLIGHT_VAL_STEP 8
//   #define RGBLIGHT_LIMIT_VAL 150
// #endif

// If you are using an Elite C rev3 on the slave side, uncomment the lines below:
// #define SPLIT_USB_DETECT
// #define NO_USB_STARTUP_CHECK

// Leader key settings
// #define LEADER_TIMEOUT 500
// #define LEADER_PER_KEY_TIMING

// tap hold settings
// #define TAPPING_TERM 300
// #define IGNORE_MOD_TAP_INTERRUPT
// #define BILATERAL_COMBINATIONS 500

// Two taps to change layers
#define TAPPING_TOGGLE 2

#ifdef RGB_MATRIX_ENABLE
  #define USB_MAX_POWER_CONSUMPTION 500
  #define ENABLE_RGB_MATRIX_SOLID_COLOR
  #define RGB_MATRIX_KEYPRESSES
  #define SPLIT_LAYER_STATE_ENABLE
#endif