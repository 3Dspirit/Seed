/**
 * Japanese (Kana UTF8 version)
 *
 * LCD Menu Messages
 * See also documentation/LCDLanguageFont.md
 *
 */

#ifndef LANGUAGE_KANA_UTF_H
#define LANGUAGE_KANA_UTF_H

#define MAPPER_E382E383
// Define SIMULATE_ROMFONT to see what is seen on the character based display defined in Configuration.h
//#define SIMULATE_ROMFONT
#define DISPLAY_CHARSET_ISO10646_KANA

// This is very crude replacement of the codes used in language_kana.h from somebody who really does not know what he is doing.
// Just to show the potential benefit of unicode.
// This translation can be improved by using the full charset of unicode codeblock U+30A0 to U+30FF.

// ÃƒÂ§Ã¢â‚¬Â°Ã¢â‚¬Â¡ÃƒÂ¤Ã‚Â»Ã‚Â®ÃƒÂ¥Ã¯Â¿Â½Ã¯Â¿Â½ÃƒÂ¨Ã‚Â¡Ã‚Â¨ÃƒÂ§Ã‚Â¤Ã‚ÂºÃƒÂ¥Ã‚Â®Ã…Â¡ÃƒÂ§Ã‚Â¾Ã‚Â©
#define WELCOME_MSG                         MACHINE_NAME " ready."
#define MSG_SD_INSERTED                     "ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â«ÃƒÂ£Ã†â€™Ã‚Â¼ÃƒÂ£Ã†â€™Ã¢â‚¬Â° ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â½ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¦ÃƒÂ£Ã†â€™Ã¢â‚¬Â¹ÃƒÂ£Ã†â€™Ã‚Â¥ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¦ÃƒÂ£Ã¢â‚¬Å¡Ã‚ÂµÃƒÂ£Ã†â€™Ã‚Â¬ÃƒÂ£Ã†â€™Ã…Â¾ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â·ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¿"          // "Card inserted"
#define MSG_SD_REMOVED                      "ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â«ÃƒÂ£Ã†â€™Ã‚Â¼ÃƒÂ£Ã†â€™Ã¢â‚¬Â°ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¬ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¢ÃƒÂ£Ã†â€™Ã‚ÂªÃƒÂ£Ã†â€™Ã…Â¾ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â»ÃƒÂ£Ã†â€™Ã‚Â³"               // "Card removed"
#define MSG_MAIN                            "ÃƒÂ£Ã†â€™Ã‚Â¡ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¤ÃƒÂ£Ã†â€™Ã‚Â³"                        // "Main"
#define MSG_AUTOSTART                       "ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¸ÃƒÂ£Ã†â€™Ã¢â‚¬Â°ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¦ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â«ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¤ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â·"                   // "Autostart"
#define MSG_DISABLE_STEPPERS                "ÃƒÂ£Ã†â€™Ã‚Â¢ÃƒÂ£Ã†â€™Ã‚Â¼ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¿ÃƒÂ£Ã†â€™Ã‚Â¼ÃƒÂ£Ã†â€™Ã¢â‚¬Â¡ÃƒÂ£Ã†â€™Ã‚Â³ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â²ÃƒÂ£Ã†â€™Ã‚Â³ ÃƒÂ£Ã¢â‚¬Å¡Ã‚ÂªÃƒÂ£Ã†â€™Ã¢â‚¬Â¢"             // "Disable steppers"
#define MSG_AUTO_HOME                       "ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â²ÃƒÂ£Ã†â€™Ã‚Â³ÃƒÂ£Ã†â€™Ã¢â‚¬Â ÃƒÂ£Ã†â€™Ã‚Â³ÃƒÂ£Ã†â€™Ã¢â‚¬Â¹ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¤ÃƒÂ£Ã†â€™Ã¢â‚¬Â°ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¦"                // "Auto home"
#define MSG_SET_HOME_OFFSETS                "ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â­ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¸ÃƒÂ£Ã†â€™Ã‚Â¥ÃƒÂ£Ã†â€™Ã‚Â³ÃƒÂ£Ã¢â‚¬Å¡Ã‚ÂªÃƒÂ£Ã†â€™Ã¢â‚¬Â¢ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â»ÃƒÂ£Ã†â€™Ã†â€™ÃƒÂ£Ã†â€™Ã‹â€ ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â»ÃƒÂ£Ã†â€™Ã†â€™ÃƒÂ£Ã†â€™Ã¢â‚¬Â ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¤"         // "Set home offsets"
#define MSG_SET_ORIGIN                      "ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â­ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¸ÃƒÂ£Ã†â€™Ã‚Â¥ÃƒÂ£Ã†â€™Ã‚Â³ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â»ÃƒÂ£Ã†â€™Ã†â€™ÃƒÂ£Ã†â€™Ã‹â€ "                 // "Set origin"
#define MSG_PREHEAT_PLA                     "PLA ÃƒÂ£Ã†â€™Ã‚Â¨ÃƒÂ£Ã†â€™Ã¯Â¿Â½ÃƒÂ£Ã†â€™Ã¢â‚¬Å¾"                    // "Preheat PLA"
#define MSG_PREHEAT_PLA_N                   MSG_PREHEAT_PLA " "
#define MSG_PREHEAT_PLA_ALL                 MSG_PREHEAT_PLA " ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¹ÃƒÂ£Ã†â€™Ã¢â€žÂ¢ÃƒÂ£Ã†â€™Ã¢â‚¬Â "      // " All"
#define MSG_PREHEAT_PLA_BEDONLY             MSG_PREHEAT_PLA " ÃƒÂ£Ã†â€™Ã¢â€žÂ¢ÃƒÂ£Ã†â€™Ã†â€™ÃƒÂ£Ã†â€™Ã¢â‚¬Â°"    // "Bed"
#define MSG_PREHEAT_PLA_SETTINGS            MSG_PREHEAT_PLA " ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â»ÃƒÂ£Ã†â€™Ã†â€™ÃƒÂ£Ã†â€™Ã¢â‚¬Â ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¤"     // "conf"
#define MSG_PREHEAT_ABS                     "ABS ÃƒÂ£Ã†â€™Ã‚Â¨ÃƒÂ£Ã†â€™Ã¯Â¿Â½ÃƒÂ£Ã†â€™Ã¢â‚¬Å¾"                    // "Preheat ABS"
#define MSG_PREHEAT_ABS_N                   MSG_PREHEAT_ABS " "
#define MSG_PREHEAT_ABS_ALL                 MSG_PREHEAT_ABS " ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¹ÃƒÂ£Ã†â€™Ã¢â€žÂ¢ÃƒÂ£Ã†â€™Ã¢â‚¬Â "      // " All"
#define MSG_PREHEAT_ABS_BEDONLY             MSG_PREHEAT_ABS " ÃƒÂ£Ã†â€™Ã¢â€žÂ¢ÃƒÂ£Ã†â€™Ã†â€™ÃƒÂ£Ã†â€™Ã¢â‚¬Â°"    // "Bed"
#define MSG_PREHEAT_ABS_SETTINGS            MSG_PREHEAT_ABS " ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â»ÃƒÂ£Ã†â€™Ã†â€™ÃƒÂ£Ã†â€™Ã¢â‚¬Â ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¤"    // "conf"
#define MSG_COOLDOWN                        "ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â«ÃƒÂ£Ã†â€™Ã¯Â¿Â½ÃƒÂ£Ã†â€™Ã¢â‚¬Å¾ÃƒÂ£Ã†â€™Ã¢â‚¬Â ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¤ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â·"                    // "Cooldown"
#define MSG_SWITCH_PS_ON                    "ÃƒÂ£Ã†â€™Ã¢â‚¬Â¡ÃƒÂ£Ã†â€™Ã‚Â³ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â²ÃƒÂ£Ã†â€™Ã‚Â³ ÃƒÂ£Ã¢â‚¬Å¡Ã‚ÂªÃƒÂ£Ã†â€™Ã‚Â³"                 // "Switch power on"
#define MSG_SWITCH_PS_OFF                   "ÃƒÂ£Ã†â€™Ã¢â‚¬Â¡ÃƒÂ£Ã†â€™Ã‚Â³ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â²ÃƒÂ£Ã†â€™Ã‚Â³ ÃƒÂ£Ã¢â‚¬Å¡Ã‚ÂªÃƒÂ£Ã†â€™Ã¢â‚¬Â¢"                 // "Switch power off"
#define MSG_EXTRUDE                         "ÃƒÂ£Ã¢â‚¬Å¡Ã‚ÂªÃƒÂ£Ã¢â‚¬Å¡Ã‚Â·ÃƒÂ£Ã†â€™Ã¢â€šÂ¬ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â·"                     // "Extrude"
#define MSG_RETRACT                         "ÃƒÂ£Ã†â€™Ã‚ÂªÃƒÂ£Ã†â€™Ã‹â€ ÃƒÂ£Ã†â€™Ã‚Â©ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¯ÃƒÂ£Ã†â€™Ã‹â€ "                     // "Retract"
#define MSG_MOVE_AXIS                       "ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¸ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¯ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¤ÃƒÂ£Ã†â€™Ã¢â‚¬Â°ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¦"                   // "Move axis"
#define MSG_MOVE_X                          "XÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¸ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¯ ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¤ÃƒÂ£Ã†â€™Ã¢â‚¬Â°ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¦"                 // "Move X"
#define MSG_MOVE_Y                          "YÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¸ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¯ ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¤ÃƒÂ£Ã†â€™Ã¢â‚¬Â°ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¦"                 // "Move Y"
#define MSG_MOVE_Z                          "ZÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¸ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¯ ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¤ÃƒÂ£Ã†â€™Ã¢â‚¬Â°ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¦"                 // "Move Z"
#define MSG_MOVE_E                          "ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¨ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¯ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¹ÃƒÂ£Ã†â€™Ã‹â€ ÃƒÂ£Ã†â€™Ã‚Â«ÃƒÂ£Ã†â€™Ã‚Â¼ÃƒÂ£Ã†â€™Ã¢â€šÂ¬ÃƒÂ£Ã†â€™Ã‚Â¼"                // "Extruder"
#define MSG_MOVE_01MM                       "0.1mm ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¤ÃƒÂ£Ã†â€™Ã¢â‚¬Â°ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¦"                 // "Move 0.1mm"
#define MSG_MOVE_1MM                        "  1mm ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¤ÃƒÂ£Ã†â€™Ã¢â‚¬Â°ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¦"                 // "Move 1mm"
#define MSG_MOVE_10MM                       " 10mm ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¤ÃƒÂ£Ã†â€™Ã¢â‚¬Â°ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¦"                 // "Move 10mm"
#define MSG_SPEED                           "ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¹ÃƒÂ£Ã†â€™Ã¢â‚¬ï¿½ÃƒÂ£Ã†â€™Ã‚Â¼ÃƒÂ£Ã†â€™Ã¢â‚¬Â°"                     // "Speed"
#define MSG_NOZZLE                          "ÃƒÂ£Ã†â€™Ã…Â½ÃƒÂ£Ã¢â‚¬Å¡Ã‚ÂºÃƒÂ£Ã†â€™Ã‚Â«"                       // "Nozzle"
#define MSG_BED                             "ÃƒÂ£Ã†â€™Ã¢â€žÂ¢ÃƒÂ£Ã†â€™Ã†â€™ÃƒÂ£Ã†â€™Ã¢â‚¬Â°"                     // "Bed"
#define MSG_FAN_SPEED                       "ÃƒÂ£Ã†â€™Ã¢â‚¬Â¢ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¡ÃƒÂ£Ã†â€™Ã‚Â³ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â½ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¯ÃƒÂ£Ã†â€™Ã¢â‚¬Â°"                    // "Fan speed"
#define MSG_FLOW                            "ÃƒÂ£Ã¢â‚¬Å¡Ã‚ÂªÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¯ÃƒÂ£Ã†â€™Ã‚ÂªÃƒÂ£Ã†â€™Ã‚ÂªÃƒÂ£Ã†â€™Ã‚Â§ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¦"                     // "Flow"
#define MSG_CONTROL                         "ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â³ÃƒÂ£Ã†â€™Ã‚Â³ÃƒÂ£Ã†â€™Ã‹â€ ÃƒÂ£Ã†â€™Ã‚Â­ÃƒÂ£Ã†â€™Ã‚Â¼ÃƒÂ£Ã†â€™Ã‚Â«"                    // "Control"
#define MSG_MIN                             LCD_STR_THERMOMETER " Min"
#define MSG_MAX                             LCD_STR_THERMOMETER " Max"
#define MSG_FACTOR                          LCD_STR_THERMOMETER " Fact"
#define MSG_AUTOTEMP                        "ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¸ÃƒÂ£Ã†â€™Ã¢â‚¬Â°ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¦ÃƒÂ£Ã¢â‚¬Å¡Ã‚ÂªÃƒÂ£Ã†â€™Ã‚Â³ÃƒÂ£Ã†â€™Ã¢â‚¬Â°"                  // "Autotemp"
#define MSG_ON                              "On "
#define MSG_OFF                             "Off"
#define MSG_PID_P                           "PID-P"
#define MSG_PID_I                           "PID-I"
#define MSG_PID_D                           "PID-D"
#define MSG_PID_C                           "PID-C"
#define MSG_ACC                             "ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â«ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â½ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¯ÃƒÂ£Ã†â€™Ã¢â‚¬Â°"                     // "Accel"
#define MSG_VXY_JERK                        "Vxy-jerk"
#define MSG_VZ_JERK                         "Vz-jerk"
#define MSG_VE_JERK                         "Ve-jerk"
#define MSG_VMAX                            "Vmax "
#define MSG_X                               "x"
#define MSG_Y                               "y"
#define MSG_Z                               "z"
#define MSG_E                               "e"
#define MSG_VMIN                            "Vmin"
#define MSG_VTRAV_MIN                       "VTrav min"
#define MSG_AMAX                            "Amax "
#define MSG_A_RETRACT                       "A-retract"
#define MSG_XSTEPS                          "Xsteps/mm"
#define MSG_YSTEPS                          "Ysteps/mm"
#define MSG_ZSTEPS                          "Zsteps/mm"
#define MSG_ESTEPS                          "Esteps/mm"
#define MSG_TEMPERATURE                     "ÃƒÂ£Ã¢â‚¬Å¡Ã‚ÂªÃƒÂ£Ã†â€™Ã‚Â³ÃƒÂ£Ã†â€™Ã¢â‚¬Â°"                      // "Temperature"
#define MSG_MOTION                          "ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¦ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â´ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â­ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â»ÃƒÂ£Ã†â€™Ã†â€™ÃƒÂ£Ã†â€™Ã¢â‚¬Â ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¤"                // "Motion"
#define MSG_VOLUMETRIC                      "ÃƒÂ£Ã†â€™Ã¢â‚¬Â¢ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â£ÃƒÂ£Ã†â€™Ã‚Â©ÃƒÂ£Ã†â€™Ã‚Â¡ÃƒÂ£Ã†â€™Ã‚Â³ÃƒÂ£Ã†â€™Ã‹â€ "                    // "Filament"
#define MSG_VOLUMETRIC_ENABLED              "E in mm3"
#define MSG_FILAMENT_DIAM                   "Fil. Dia."
#define MSG_CONTRAST                        "LCDÃƒÂ£Ã¢â‚¬Å¡Ã‚Â³ÃƒÂ£Ã†â€™Ã‚Â³ÃƒÂ£Ã†â€™Ã‹â€ ÃƒÂ£Ã†â€™Ã‚Â©ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¹ÃƒÂ£Ã†â€™Ã‹â€ "                 // "LCD contrast"
#define MSG_STORE_EPROM                     "ÃƒÂ£Ã†â€™Ã‚Â¡ÃƒÂ£Ã†â€™Ã‚Â¢ÃƒÂ£Ã†â€™Ã‚ÂªÃƒÂ£Ã†â€™Ã‹Å“ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â«ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¯ÃƒÂ£Ã†â€™Ã…Â½ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¦"                 // "Store memory"
#define MSG_LOAD_EPROM                      "ÃƒÂ£Ã†â€™Ã‚Â¡ÃƒÂ£Ã†â€™Ã‚Â¢ÃƒÂ£Ã†â€™Ã‚ÂªÃƒÂ£Ã¢â‚¬Å¡Ã‚Â«ÃƒÂ£Ã†â€™Ã‚Â©ÃƒÂ£Ã†â€™Ã‚Â¨ÃƒÂ£Ã†â€™Ã…Â¸ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â³ÃƒÂ£Ã†â€™Ã…Â¸"               // "Load memory"
#define MSG_RESTORE_FAILSAFE                "ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â»ÃƒÂ£Ã†â€™Ã†â€™ÃƒÂ£Ã†â€™Ã¢â‚¬Â ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¤ÃƒÂ£Ã†â€™Ã‚ÂªÃƒÂ£Ã¢â‚¬Å¡Ã‚Â»ÃƒÂ£Ã†â€™Ã†â€™ÃƒÂ£Ã†â€™Ã‹â€ "               // "Restore failsafe"
#define MSG_REFRESH                         "ÃƒÂ£Ã†â€™Ã‚ÂªÃƒÂ£Ã†â€™Ã¢â‚¬Â¢ÃƒÂ£Ã†â€™Ã‚Â¬ÃƒÂ£Ã†â€™Ã†â€™ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â·ÃƒÂ£Ã†â€™Ã‚Â¥"                  // "Refresh"
#define MSG_WATCH                           "ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¤ÃƒÂ£Ã†â€™Ã‚Â³ÃƒÂ£Ã†â€™Ã¢â‚¬Â¢ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â©"                     // "Info screen"
#define MSG_PREPARE                         "ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¸ÃƒÂ£Ã†â€™Ã‚Â¥ÃƒÂ£Ã†â€™Ã‚Â³ÃƒÂ£Ã†â€™Ã¢â‚¬Å“ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â»ÃƒÂ£Ã†â€™Ã†â€™ÃƒÂ£Ã†â€™Ã¢â‚¬Â ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¤"             //"Prepare"
#define MSG_TUNE                            "ÃƒÂ£Ã†â€™Ã¯Â¿Â½ÃƒÂ£Ã†â€™Ã‚Â§ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¦ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â»ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¤"                    // "Tune"
#define MSG_PAUSE_PRINT                     "ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¤ÃƒÂ£Ã†â€™Ã¯Â¿Â½ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¸ÃƒÂ£Ã†â€™Ã¢â‚¬Â ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¤ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â·"                  // "Pause print"
#define MSG_RESUME_PRINT                    "ÃƒÂ£Ã†â€™Ã¢â‚¬â€�ÃƒÂ£Ã†â€™Ã‚ÂªÃƒÂ£Ã†â€™Ã‚Â³ÃƒÂ£Ã†â€™Ã‹â€ ÃƒÂ£Ã¢â‚¬Å¡Ã‚ÂµÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¤ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â«ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¤"                // "Resume print"
#define MSG_STOP_PRINT                      "ÃƒÂ£Ã†â€™Ã¢â‚¬â€�ÃƒÂ£Ã†â€™Ã‚ÂªÃƒÂ£Ã†â€™Ã‚Â³ÃƒÂ£Ã†â€™Ã‹â€ ÃƒÂ£Ã†â€™Ã¢â‚¬Â ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¤ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â·"                 // "Stop print"
#define MSG_CARD_MENU                       "SDÃƒÂ£Ã¢â‚¬Å¡Ã‚Â«ÃƒÂ£Ã†â€™Ã‚Â¼ÃƒÂ£Ã†â€™Ã¢â‚¬Â°ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â«ÃƒÂ£Ã†â€™Ã‚Â©ÃƒÂ£Ã†â€™Ã¢â‚¬â€�ÃƒÂ£Ã†â€™Ã‚ÂªÃƒÂ£Ã†â€™Ã‚Â³ÃƒÂ£Ã†â€™Ã‹â€ "            // "Print from SD"
#define MSG_NO_CARD                         "SDÃƒÂ£Ã¢â‚¬Å¡Ã‚Â«ÃƒÂ£Ã†â€™Ã‚Â¼ÃƒÂ£Ã†â€™Ã¢â‚¬Â°ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¬ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¢ÃƒÂ£Ã†â€™Ã‚ÂªÃƒÂ£Ã†â€™Ã…Â¾ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â»ÃƒÂ£Ã†â€™Ã‚Â³"            // "No SD card"
#define MSG_DWELL                           "ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¹ÃƒÂ£Ã†â€™Ã‚ÂªÃƒÂ£Ã†â€™Ã‚Â¼ÃƒÂ£Ã†â€™Ã¢â‚¬â€�"                     // "Sleep..."
#define MSG_USERWAIT                        "ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â·ÃƒÂ£Ã†â€™Ã¯Â¿Â½ÃƒÂ£Ã†â€™Ã‚Â©ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¯ÃƒÂ£Ã¢â‚¬Å¡Ã‚ÂªÃƒÂ£Ã†â€™Ã…Â¾ÃƒÂ£Ã†â€™Ã¯Â¿Â½ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¯ÃƒÂ£Ã†â€™Ã¢â€šÂ¬ÃƒÂ£Ã¢â‚¬Å¡Ã‚ÂµÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¤"           // "Wait for user..."
#define MSG_RESUMING                        "ÃƒÂ£Ã†â€™Ã¢â‚¬â€�ÃƒÂ£Ã†â€™Ã‚ÂªÃƒÂ£Ã†â€™Ã‚Â³ÃƒÂ£Ã†â€™Ã‹â€ ÃƒÂ£Ã¢â‚¬Å¡Ã‚ÂµÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¤ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â«ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¤"                // "Resuming print"
#define MSG_PRINT_ABORTED                   "ÃƒÂ£Ã†â€™Ã¢â‚¬â€�ÃƒÂ£Ã†â€™Ã‚ÂªÃƒÂ£Ã†â€™Ã‚Â³ÃƒÂ£Ã†â€™Ã‹â€ ÃƒÂ£Ã†â€™Ã¯Â¿Â½ÃƒÂ£Ã†â€™Ã‚Â¥ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¦ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â·ÃƒÂ£Ã¢â‚¬Å¡Ã‚ÂµÃƒÂ£Ã†â€™Ã‚Â¬ÃƒÂ£Ã†â€™Ã…Â¾ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â·ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¿"          // "Print aborted"
#define MSG_NO_MOVE                         "ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¦ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â´ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â­ÃƒÂ£Ã†â€™Ã…Â¾ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â»ÃƒÂ£Ã†â€™Ã‚Â³"                  // "No move."
#define MSG_KILLED                          "ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â·ÃƒÂ£Ã†â€™Ã‚Â§ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¦ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â­ÃƒÂ£Ã†â€™Ã‚Â§"                     // "KILLED. "
#define MSG_STOPPED                         "ÃƒÂ£Ã†â€™Ã¢â‚¬Â ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¤ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â·ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â·ÃƒÂ£Ã†â€™Ã…Â¾ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â·ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¿"                  // "STOPPED. "
#define MSG_CONTROL_RETRACT                 "Retract mm"
#define MSG_CONTROL_RETRACT_SWAP            "Swap Re.mm"
#define MSG_CONTROL_RETRACTF                "Retract  V"
#define MSG_CONTROL_RETRACT_ZLIFT           "Hop mm"
#define MSG_CONTROL_RETRACT_RECOVER         "UnRet +mm"
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    "S UnRet+mm"
#define MSG_CONTROL_RETRACT_RECOVERF        "UnRet  V"
#define MSG_AUTORETRACT                     "AutoRetr."
#define MSG_FILAMENTCHANGE                  "ÃƒÂ£Ã†â€™Ã¢â‚¬Â¢ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â£ÃƒÂ£Ã†â€™Ã‚Â©ÃƒÂ£Ã†â€™Ã‚Â¡ÃƒÂ£Ã†â€™Ã‚Â³ÃƒÂ£Ã†â€™Ã‹â€ ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â³ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¦ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â«ÃƒÂ£Ã†â€™Ã‚Â³"               // "Change filament"
#define MSG_INIT_SDCARD                     "SDÃƒÂ£Ã¢â‚¬Å¡Ã‚Â«ÃƒÂ£Ã†â€™Ã‚Â¼ÃƒÂ£Ã†â€™Ã¢â‚¬Â°ÃƒÂ£Ã¢â‚¬Å¡Ã‚ÂµÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¤ÃƒÂ£Ã†â€™Ã‚Â¨ÃƒÂ£Ã†â€™Ã…Â¸ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â³ÃƒÂ£Ã†â€™Ã…Â¸"              // "Init. SD card"
#define MSG_CNG_SDCARD                      "SDÃƒÂ£Ã¢â‚¬Å¡Ã‚Â«ÃƒÂ£Ã†â€™Ã‚Â¼ÃƒÂ£Ã†â€™Ã¢â‚¬Â°ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â³ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¦ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â«ÃƒÂ£Ã†â€™Ã‚Â³"                // "Change SD card"
#define MSG_ZPROBE_OUT                      "ZÃƒÂ£Ã†â€™Ã¢â‚¬â€�ÃƒÂ£Ã†â€™Ã‚Â­ÃƒÂ£Ã†â€™Ã‚Â¼ÃƒÂ£Ã†â€™Ã¢â‚¬â€œ ÃƒÂ£Ã†â€™Ã¢â€žÂ¢ÃƒÂ£Ã†â€™Ã†â€™ÃƒÂ£Ã†â€™Ã¢â‚¬Â°ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¬ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¤"         // "Z probe out. bed"
#define MSG_POSITION_UNKNOWN                "ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â²ÃƒÂ£Ã†â€™Ã‚Â³ÃƒÂ£Ã†â€™Ã¢â‚¬Â ÃƒÂ£Ã†â€™Ã‚Â³ÃƒÂ£Ã†â€™Ã¯Â¿Â½XYÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¤ÃƒÂ£Ã†â€™Ã¢â‚¬Â°ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¦ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â´Z"           // "Home X/Y before Z"
#define MSG_ZPROBE_ZOFFSET                  "ZÃƒÂ£Ã¢â‚¬Å¡Ã‚ÂªÃƒÂ£Ã†â€™Ã¢â‚¬Â¢ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â»ÃƒÂ£Ã†â€™Ã†â€™ÃƒÂ£Ã†â€™Ã‹â€ "                   // "Z Offset"
#define MSG_BABYSTEP_X                      "ÃƒÂ£Ã†â€™Ã¢â‚¬Å“ÃƒÂ£Ã†â€™Ã¢â‚¬Â°ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¦ X"                    // "Babystep X"
#define MSG_BABYSTEP_Y                      "ÃƒÂ£Ã†â€™Ã¢â‚¬Å“ÃƒÂ£Ã†â€™Ã¢â‚¬Â°ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¦ Y"                    // "Babystep Y"
#define MSG_BABYSTEP_Z                      "ÃƒÂ£Ã†â€™Ã¢â‚¬Å“ÃƒÂ£Ã†â€™Ã¢â‚¬Â°ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¦ Z"                    // "Babystep Z"
#define MSG_ENDSTOP_ABORT                   "Endstop abort"
#define MSG_END_HOUR                        "hours"
#define MSG_END_MINUTE                      "minutes"

#if ENABLED(DELTA_CALIBRATION_MENU)
  #define MSG_DELTA_CALIBRATE               "Delta Calibration"
  #define MSG_DELTA_CALIBRATE_X             "Calibrate X"
  #define MSG_DELTA_CALIBRATE_Y             "Calibrate Y"
  #define MSG_DELTA_CALIBRATE_Z             "Calibrate Z"
  #define MSG_DELTA_CALIBRATE_CENTER        "Calibrate Center"
#endif // DELTA_CALIBRATION_MENU

#endif // LANGUAGE_KANA_UTF_H



