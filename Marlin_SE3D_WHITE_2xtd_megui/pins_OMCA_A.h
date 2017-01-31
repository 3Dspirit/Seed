/**
 * Open Motion controller with enable based extruders (Alpha!)
 *
 *                        ATMega644
 *
 *                        +---\/---+
 *            (D 0) PB0  1|        |40  PA0 (AI 0 / D31)
 *            (D 1) PB1  2|        |39  PA1 (AI 1 / D30)
 *       INT2 (D 2) PB2  3|        |38  PA2 (AI 2 / D29)
 *        PWM (D 3) PB3  4|        |37  PA3 (AI 3 / D28)
 *        PWM (D 4) PB4  5|        |36  PA4 (AI 4 / D27)
 *       MOSI (D 5) PB5  6|        |35  PA5 (AI 5 / D26)
 *       MISO (D 6) PB6  7|        |34  PA6 (AI 6 / D25)
 *        SCK (D 7) PB7  8|        |33  PA7 (AI 7 / D24)
 *                  RST  9|        |32  AREF
 *                  VCC 10|        |31  GND
 *                  GND 11|        |30  AVCC
 *                XTAL2 12|        |29  PC7 (D 23)
 *                XTAL1 13|        |28  PC6 (D 22)
 *       RX0 (D 8)  PD0 14|        |27  PC5 (D 21) TDI
 *       TX0 (D 9)  PD1 15|        |26  PC4 (D 20) TDO
 *  INT0 RX1 (D 10) PD2 16|        |25  PC3 (D 19) TMS
 *  INT1 TX1 (D 11) PD3 17|        |24  PC2 (D 18) TCK
 *       PWM (D 12) PD4 18|        |23  PC1 (D 17) SDA
 *       PWM (D 13) PD5 19|        |22  PC0 (D 16) SCL
 *       PWM (D 14) PD6 20|        |21  PD7 (D 15) PWM
 *                        +--------+
 *
 */

#ifndef __AVR_ATmega644__
  #error Oops!  Make sure you have 'SanguinoA' selected from the 'Tools -> Boards' menu.
#endif

#define X_STEP_PIN         21
#define X_DIR_PIN          20
#define X_ENABLE_PIN       24
#define X_STOP_PIN          0

#define Y_STEP_PIN         23
#define Y_DIR_PIN          22
#define Y_ENABLE_PIN       24
#define Y_STOP_PIN          1

#define Z_STEP_PIN         26
#define Z_DIR_PIN          25
#define Z_ENABLE_PIN       24
#define Z_STOP_PIN          2

#define E0_STEP_PIN        28
#define E0_DIR_PIN         27
#define E0_ENABLE_PIN      24

#define E1_STEP_PIN        -1 // 19
#define E1_DIR_PIN         -1 // 18
#define E1_ENABLE_PIN      24

#define E2_STEP_PIN        -1 // 17
#define E2_DIR_PIN         -1 // 16
#define E2_ENABLE_PIN      24

#define SDPOWER            -1
#define SDSS               11
#define SD_DETECT_PIN      -1 // 10 optional also used as mode pin
#define LED_PIN            -1
#define FAN_PIN             3
#define PS_ON_PIN          -1
#define KILL_PIN           -1

#define HEATER_0_PIN        4
#define HEATER_1_PIN       -1 // 12
#define HEATER_2_PIN       -1 // 13
#define TEMP_0_PIN          0 //D27   // MUST USE ANALOG INPUT NUMBERING NOT DIGITAL OUTPUT NUMBERING!!!!!!!!!
#define TEMP_1_PIN         -1 // 1
#define TEMP_2_PIN         -1 // 2
#define HEATER_BED_PIN     -1 // 14/15
#define TEMP_BED_PIN       -1 // 1,2 or I2C
/*  Unused (1) (2) (3) 4 5 6 7 8 9 10 11 12 13 (14) (15) (16) 17 (18) (19) (20) (21) (22) (23) 24 (25) (26) (27) 28 (29) (30) (31)  */



