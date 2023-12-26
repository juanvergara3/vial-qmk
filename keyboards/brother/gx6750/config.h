#pragma once

#include_next <config.h>

// Vial
#define VIAL_KEYBOARD_UID {0x40, 0xBF, 0x1F, 0xCB, 0xD1, 0x06, 0xC3, 0xEA}
#define VIAL_UNLOCK_COMBO_ROWS { 1, 6 }
#define VIAL_UNLOCK_COMBO_COLS { 1, 2 }

// Solenoid
#define SOLENOID_ACTIVE true
#define SOLENOID_DEFAULT_DWELL 10 
#define SOLENOID_MAX_DWELL 20
#define SOLENOID_MIN_DWELL 5
#define SOLENOID_PIN GP16

// 2KRO
#define MATRIX_HAS_GHOST

// Optimizations
#define DYNAMIC_KEYMAP_LAYER_COUNT 2
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
//#define NO_PRINT
//#define NO_DEBUG
