/*
This is the c configuration file for the keymap
Copyright 2022 Noah Pederson
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

// #define USE_MATRIX_I2C

/* Select hand configuration */

#define MASTER_LEFT
// #define MASTER_RIGHT
// #define EE_HANDS

// #define TAPPING_FORCE_HOLD
// #define TAPPING_TERM 100

// # define I2C_DRIVER I2CD1

// Split keyboard sync config#define SPLIT_TRANSPORT_MIRROR
// #define SPLIT_LAYER_STATE_ENABLE
#define SPLIT_LED_STATE_ENABLE
#define SPLIT_MODS_ENABLE
#define SPLIT_WPM_ENABLE

// Don't let my OLEDs burn in
#define SPLIT_OLED_ENABLE
#define OLED_FADE_OUT
#define OLED_TIMEOUT 10000
// #define SPLIT_OLED_ENABLE
