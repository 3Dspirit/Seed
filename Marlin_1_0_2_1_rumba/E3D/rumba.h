rumba.h



#ifndef MOTHERBOARD
  #define MOTHERBOARD BOARD_RUMBA 
#endif
// This defines the number of extruders
#define EXTRUDERS 2


#define TEMP_SENSOR_0 5
#define TEMP_SENSOR_1 5
#define TEMP_SENSOR_2 0
#define TEMP_SENSOR_3 0
#define TEMP_SENSOR_BED 5


// Offset of the extruders (uncomment if using more than one and relying on firmware to position when changing).
// The offset has to be X=0, Y=0 for the extruder 0 hotend (default extruder).
// For the other hotends it is their distance from the extruder 0 hotend.
// #define EXTRUDER_OFFSET_X {0.0, 20.00} // (in mm) for each extruder, offset of the hotend on the X axis
// #define EXTRUDER_OFFSET_Y {0.0, 5.00}  // (in mm) for each extruder, offset of the hotend on the Y axis
#define EXTRUDER_OFFSET_X {0.0, -40.00} // (in mm) for each extruder, offset of the hotend on the X axis
#define EXTRUDER_OFFSET_Y {0.0, 0.0}  // (in mm) for each extruder, offset of the hotend on the Y axis



Frankestein:
//COnfiguracion general
// ENDSTOP SETTINGS:
// Sets direction of endstops when homing; 1=MAX, -1=MIN
// :[-1,1]
#define X_HOME_DIR -1
#define Y_HOME_DIR -1
#define Z_HOME_DIR -1

// Invert the stepper direction. Change (or reverse the motor connector) if an axis goes the wrong way.
#define INVERT_X_DIR false
#define INVERT_Y_DIR false
#define INVERT_Z_DIR true
// Travel limits after homing (units are in mm)

#define X_MIN_POS 0
#define Y_MIN_POS 0
#define Z_MIN_POS 0
#define X_MAX_POS 70
#define Y_MAX_POS 77
#define Z_MAX_POS 150

white seed:
#define X_MIN_POS 0
#define Y_MIN_POS 0
#define Z_MIN_POS 0
#define X_MAX_POS 220
#define Y_MAX_POS 210
#define Z_MAX_POS 195


//Purga manual para cada uno 
  MENU_ITEM(gcode, "Purga Manual 1", PSTR("M6 T0\nM83\nG1 E50 F200\nM83"));
  MENU_ITEM(gcode, "Purga Manual 2", PSTR("M6 T1\nM83\nG1 E50 F200\nM83"));

  //Preparar PLA 
    MENU_ITEM(function, MSG_PREHEAT_PLA_ALL, lcd_preheat_pla_menu);