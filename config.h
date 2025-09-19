#pragma once

/* Matrix
#define MATRIX_ROWS 6
#define MATRIX_COLS 7
#define DIODE_DIRECTION COL2ROW 
Deprecated. */

/* Left-half matrix pins
#define MATRIX_ROW_PINS { F6, F7, B1 }
#define MATRIX_COL_PINS { D3, D4, C6, D7, E6, B4, B5 }
Deprecated. */

/* ===== Split over I²C (NOT serial) ===== */
// #define USE_I2C
#define EE_HANDS
#define SPLIT_USB_DETECT
//#define NO_USB_STARTUP_CHECK

/* AVR Pro Micro I²C pins (SCL=D0, SDA=D1)
#define I2C1_SCL_PIN D0
#define I2C1_SDA_PIN D1
#define I2C1_CLOCK_SPEED 100000
#define I2C_USE_INTERNAL_PULLUPS   // helps if external pullups are weak/missing
*/

/* QoL */
#define DEBOUNCE 5
#define TAPPING_TERM 200
// would suggest commenting this.
#define USE_SERIAL_PD2