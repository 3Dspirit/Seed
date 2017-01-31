#ifndef UTF_MAPPER_H
#define UTF_MAPPER_H

#include  "language.h"

#if ENABLED(DOGLCD)
  #define HARDWARE_CHAR_OUT u8g.print
#else
  #define HARDWARE_CHAR_OUT lcd.write
#endif

#if DISABLED(SIMULATE_ROMFONT) && ENABLED(DOGLCD)
  #if ENABLED(DISPLAY_CHARSET_ISO10646_1)
    #define MAPPER_ONE_TO_ONE
  #elif ENABLED(DISPLAY_CHARSET_ISO10646_5)
    #define MAPPER_ONE_TO_ONE
  #elif ENABLED(DISPLAY_CHARSET_ISO10646_KANA)
    #define MAPPER_ONE_TO_ONE
  #endif
#else // SIMULATE_ROMFONT
  #if ENABLED(DISPLAY_CHARSET_HD44780_JAPAN)
    #if ENABLED(MAPPER_C2C3)
      const PROGMEM uint8_t utf_recode[] =
           { // 0    1    2    3    4    5    6    7    8    9    a    b    c    d    e    f          This is fair for symbols
             0x20,0x3f,0xec,0xed,0x3f,0x5c,0x7c,0x3f,0x22,0x63,0x61,0x7f,0x3f,0x3f,0x52,0xb0,  // c2a
  //          ' '       Ãƒâ€šÃ‚Â¢    Ãƒâ€šÃ‚Â£         Ãƒâ€šÃ‚Â­    l         "    c    a    Ãƒâ€šÃ‚Â«              R
             0xdf,0x3f,0x32,0x33,0x27,0xe4,0xf1,0xa5,0x2c,0x31,0xdf,0x7e,0x3f,0x3f,0x3f,0x3f,  // c2b but relatively bad for letters.
  //          Ãƒâ€šÃ‚Â°         2    3    `    N    p    .    ,    1    Ãƒâ€šÃ‚Â°    Ãƒâ€šÃ‚Â»
             0x3f,0x3f,0x3f,0x3f,0xe1,0x3f,0x3f,0x3f,0x3f,0x3f,0x3f,0x3f,0x3f,0x3f,0x3f,0x3f,  // c38
  //                              ÃƒÆ’Ã‚Â¤
             0x3f,0x3f,0x3f,0x3f,0x3f,0x3f,0xef,0x78,0x3f,0x3f,0x3f,0x3f,0xf5,0x3f,0x3f,0xe2,  // c39 missing characters display as '?'
  //                                        ÃƒÆ’Ã‚Â¶     x                       ÃƒÆ’Ã‚Â¼              ÃƒÆ’Ã…Â¸
             0x3f,0x3f,0x3f,0x3f,0xe1,0x3f,0x3f,0x3f,0x3f,0x3f,0x3f,0x3f,0x3f,0x3f,0x3f,0x3f,  // c3a
  //                              ÃƒÆ’Ã‚Â¤
             0x3f,0xee,0x3f,0x3f,0x3f,0x3f,0xef,0xfd,0x3f,0x3f,0x3f,0x3f,0xf5,0x3f,0x3f,0x3f   // c3b
  //               n                        ÃƒÆ’Ã‚Â¶    ÃƒÆ’Ã‚Â·                        ÃƒÆ’Ã‚Â¼
           };
    #elif ENABLED(MAPPER_E382E383)
      const PROGMEM uint8_t utf_recode[] =
           { // 0    1    2    3    4    5    6    7    8    9    a    b    c    d    e    f
             0x3d,0xb1,0xb1,0xa8,0xb2,0xa9,0xb3,0xaa,0xb4,0xab,0xb5,0xb6,0xb6,0xb7,0xb7,0xb8,  // e382a Please test and correct
  //          =    ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¢    ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¢    ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â£    ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¤    ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¥    ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¦    ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â§    ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¨    ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â©    ÃƒÂ£Ã¢â‚¬Å¡Ã‚Âª   ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¬    ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¬    ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â­   ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â­    ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¯
             0xb8,0xb9,0xb9,0xba,0xba,0xbb,0xbb,0xbc,0xbc,0xbd,0xbd,0xbe,0xbe,0xbf,0xbf,0xc0,  // e382b
  //          ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¯    ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â±    ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â±   ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â³    ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â³    ÃƒÂ£Ã¢â‚¬Å¡Ã‚Âµ    ÃƒÂ£Ã¢â‚¬Å¡Ã‚Âµ    ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â·    ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â·   ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¹    ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¹    ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â»    ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â»    ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â½   ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â½    ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¿
             0xc0,0xc1,0xc1,0xc2,0xc2,0xc2,0xc3,0xc3,0xc4,0xc4,0xc5,0xc6,0xc7,0xc8,0xc9,0xca,  // e3838
  //          ÃƒÂ£Ã¢â‚¬Å¡Ã‚Â¿    ÃƒÂ£Ã†â€™Ã¯Â¿Â½    ÃƒÂ£Ã†â€™Ã¯Â¿Â½    ÃƒÂ£Ã†â€™Ã†â€™    ÃƒÂ£Ã†â€™Ã†â€™    ÃƒÂ£Ã†â€™Ã†â€™    ÃƒÂ£Ã†â€™Ã¢â‚¬Â    ÃƒÂ£Ã†â€™Ã¢â‚¬Â     ÃƒÂ£Ã†â€™Ã‹â€     ÃƒÂ£Ã†â€™Ã‹â€     ÃƒÂ£Ã†â€™Ã…Â     ÃƒÂ£Ã†â€™Ã¢â‚¬Â¹    ÃƒÂ£Ã†â€™Ã…â€™    ÃƒÂ£Ã†â€™Ã¯Â¿Â½   ÃƒÂ£Ã†â€™Ã…Â½    ÃƒÂ£Ã†â€™Ã¯Â¿Â½
             0xca,0xca,0xcb,0xcb,0xcb,0xcc,0xcc,0xcc,0xcd,0xcd,0xcd,0xce,0xce,0xce,0xcf,0xd0,  // e3839
  //          ÃƒÂ£Ã†â€™Ã¯Â¿Â½    ÃƒÂ£Ã†â€™Ã¯Â¿Â½    ÃƒÂ£Ã†â€™Ã¢â‚¬â„¢   ÃƒÂ£Ã†â€™Ã¢â‚¬â„¢    ÃƒÂ£Ã†â€™Ã¢â‚¬â„¢     ÃƒÂ£Ã†â€™Ã¢â‚¬Â¢    ÃƒÂ£Ã†â€™Ã¢â‚¬Â¢   ÃƒÂ£Ã†â€™Ã¢â‚¬Â¢    ÃƒÂ£Ã†â€™Ã‹Å“    ÃƒÂ£Ã†â€™Ã‹Å“    ÃƒÂ£Ã†â€™Ã‹Å“    ÃƒÂ£Ã†â€™Ã¢â‚¬Âº    ÃƒÂ£Ã†â€™Ã¢â‚¬Âº    ÃƒÂ£Ã†â€™Ã¢â‚¬Âº   ÃƒÂ£Ã†â€™Ã…Â¾    ÃƒÂ£Ã†â€™Ã…Â¸
             0xd1,0xd2,0xd3,0xd4,0xd4,0xd5,0xd5,0xae,0xd6,0xd7,0xd8,0xd9,0xda,0xdb,0xdc,0xdc,  // e383a
  //          ÃƒÂ£Ã†â€™Ã‚Â     ÃƒÂ£Ã†â€™Ã‚Â¡    ÃƒÂ£Ã†â€™Ã‚Â¢    ÃƒÂ£Ã†â€™Ã‚Â£   ÃƒÂ£Ã†â€™Ã‚Â£    ÃƒÂ£Ã†â€™Ã‚Â¦    ÃƒÂ£Ã†â€™Ã‚Â¦    ÃƒÂ£Ã†â€™Ã‚Â§    ÃƒÂ£Ã†â€™Ã‚Â¨    ÃƒÂ£Ã†â€™Ã‚Â©    ÃƒÂ£Ã†â€™Ã‚Âª    ÃƒÂ£Ã†â€™Ã‚Â«    ÃƒÂ£Ã†â€™Ã‚Â¬    ÃƒÂ£Ã†â€™Ã‚Â­   ÃƒÂ£Ã†â€™Ã‚Â¯    ÃƒÂ£Ã†â€™Ã‚Â¯
             0xec,0xa7,0xa6,0xdd,0xcc,0x3f,0x3f,0x3f,0x3f,0x3f,0xa6,0xa5,0xb0,0xa4,0xa4,0x3f   // e383b
  //          ÃƒÂ£Ã†â€™Ã‚Â°    ÃƒÂ£Ã†â€™Ã‚Â±    ÃƒÂ£Ã†â€™Ã‚Â²    ÃƒÂ£Ã†â€™Ã‚Â³    ÃƒÂ£Ã†â€™Ã¢â‚¬Â¢    ?    ?   ?    ?    ?    ÃƒÂ£Ã†â€™Ã‚Â²    ÃƒÂ£Ã†â€™Ã‚Â»    ÃƒÂ£Ã†â€™Ã‚Â¼    ÃƒÂ£Ã†â€™Ã‚Â½    ÃƒÂ£Ã†â€™Ã‚Â½   ?
           };
    #elif ENABLED(MAPPER_D0D1)
      #error( "Cyrillic on a japanese dsplay makes no sense. There are no matching symbols.");
    #endif

  #elif ENABLED(DISPLAY_CHARSET_HD44780_WESTERN)
    #if ENABLED(MAPPER_C2C3)
      const PROGMEM uint8_t utf_recode[] =
           { // 0    1    2    3    4    5    6    7    8    9    a    b    c    d    e    f   This is relative complete.
             0x20,0xa1,0xa2,0xa3,0xa4,0xa5,0xa6,0xa7,0x22,0xa9,0xaa,0xab,0x3f,0x3f,0xae,0x3f,  // c2aÃƒâ€šÃ‚Â Ãƒâ€šÃ‚Â¡Ãƒâ€šÃ‚Â¢Ãƒâ€šÃ‚Â£Ãƒâ€šÃ‚Â¤Ãƒâ€šÃ‚Â¥Ãƒâ€šÃ‚Â¦Ãƒâ€šÃ‚Â§Ãƒâ€šÃ‚Â¨Ãƒâ€šÃ‚Â©Ãƒâ€šÃ‚ÂªÃƒâ€šÃ‚Â«Ãƒâ€šÃ‚Â¬Ãƒâ€šÃ‚Â­Ãƒâ€šÃ‚Â®Ãƒâ€šÃ‚Â¯
  //         ' '   Ãƒâ€šÃ‚Â¡    Ãƒâ€šÃ‚Â¢    Ãƒâ€šÃ‚Â£    Ãƒâ€šÃ‚Â¤    Ãƒâ€šÃ‚Â¥    Ãƒâ€šÃ‚Â¦    Ãƒâ€šÃ‚Â§    "    Ãƒâ€šÃ‚Â©    Ãƒâ€šÃ‚Âª    Ãƒâ€šÃ‚Â«    ?    ?    Ãƒâ€šÃ‚Â®    ?
             0xb0,0xb1,0xb2,0xb3,0x27,0xb5,0xb6,0xb7,0x2c,0xb9,0xba,0xbb,0xbc,0xbd,0xbe,0xbf,  // c2b Ãƒâ€šÃ‚Â°Ãƒâ€šÃ‚Â±Ãƒâ€šÃ‚Â²Ãƒâ€šÃ‚Â³Ãƒâ€šÃ‚Â´Ãƒâ€šÃ‚ÂµÃƒâ€šÃ‚Â¶Ãƒâ€šÃ‚Â·Ãƒâ€šÃ‚Â¸Ãƒâ€šÃ‚Â¹Ãƒâ€šÃ‚ÂºÃƒâ€šÃ‚Â»Ãƒâ€šÃ‚Â¼Ãƒâ€šÃ‚Â½Ãƒâ€šÃ‚Â¾Ãƒâ€šÃ‚Â¿
  //          Ãƒâ€šÃ‚Â°    Ãƒâ€šÃ‚Â±    Ãƒâ€šÃ‚Â³    Ãƒâ€šÃ‚Â²    ?    Ãƒâ€šÃ‚Âµ    Ãƒâ€šÃ‚Â¶    Ãƒâ€šÃ‚Â·    ,    Ãƒâ€šÃ‚Â¹    Ãƒâ€šÃ‚Âº    Ãƒâ€šÃ‚Â»    Ãƒâ€šÃ‚Â¼    Ãƒâ€šÃ‚Â½    Ãƒâ€šÃ‚Â¾    Ãƒâ€šÃ‚Â¿
             0xc0,0xc1,0xc2,0xc3,0xc4,0xc5,0xc6,0xc7,0xc8,0xc9,0xca,0xcb,0xcc,0xcd,0xce,0xcf,  // c38 ÃƒÆ’Ã¢â€šÂ¬ÃƒÆ’Ã¯Â¿Â½ÃƒÆ’Ã†â€™ÃƒÆ’Ã¢â‚¬Å¾ÃƒÆ’Ã¢â‚¬Â¦ÃƒÆ’Ã¢â‚¬Â ÃƒÆ’Ã¢â‚¬Â¡ÃƒÆ’Ã‹â€ ÃƒÆ’Ã¢â‚¬Â°ÃƒÆ’Ã…Â ÃƒÆ’Ã¢â‚¬Â¹ÃƒÆ’Ã…â€™ÃƒÆ’Ã¯Â¿Â½ÃƒÆ’Ã…Â½ÃƒÆ’Ã¯Â¿Â½
  //          ÃƒÆ’Ã¢â€šÂ¬    ÃƒÆ’Ã¯Â¿Â½    ÃƒÆ’Ã¢â‚¬Å¡    ÃƒÆ’Ã†â€™    ÃƒÆ’Ã¢â‚¬Å¾    ÃƒÆ’Ã¢â‚¬Â¦    ÃƒÆ’Ã¢â‚¬Â     ÃƒÆ’Ã¢â‚¬Â¡    ÃƒÆ’Ã‹â€     ÃƒÆ’Ã¢â‚¬Â°    ÃƒÆ’Ã…Â     ÃƒÆ’Ã¢â‚¬Â¹    ÃƒÆ’Ã…â€™    ÃƒÆ’Ã¯Â¿Â½    ÃƒÆ’Ã…Â½    ÃƒÆ’Ã¯Â¿Â½
             0xd0,0xd1,0xd2,0xd3,0xd4,0xd5,0xd6,0xd7,0xd8,0xd9,0xda,0xdb,0xdc,0xdd,0xde,0xdf,  // c39 ÃƒÆ’Ã¯Â¿Â½ÃƒÆ’Ã¢â‚¬ËœÃƒÆ’Ã¢â‚¬Å“ÃƒÆ’Ã¢â‚¬ï¿½ÃƒÆ’Ã¢â‚¬Â¢ÃƒÆ’Ã¢â‚¬â€œÃƒÆ’Ã¢â‚¬â€�ÃƒÆ’Ã‹Å“ÃƒÆ’Ã¢â€žÂ¢ÃƒÆ’Ã…Â¡ÃƒÆ’Ã¢â‚¬ÂºÃƒÆ’Ã…â€œÃƒÆ’Ã¯Â¿Â½ÃƒÆ’Ã…Â¾ÃƒÆ’Ã…Â¸
  //          ÃƒÆ’Ã¯Â¿Â½    ÃƒÆ’Ã¢â‚¬Ëœ    ÃƒÆ’Ã¢â‚¬â„¢    ÃƒÆ’Ã¢â‚¬Å“    ÃƒÆ’Ã¢â‚¬ï¿½    ÃƒÆ’Ã¢â‚¬Â¢    ÃƒÆ’Ã¢â‚¬â€œ    ÃƒÆ’Ã¢â‚¬â€�    ÃƒÆ’Ã‹Å“    ÃƒÆ’Ã¢â€žÂ¢    ÃƒÆ’Ã…Â¡    ÃƒÆ’Ã¢â‚¬Âº    ÃƒÆ’Ã…â€œ    ÃƒÆ’Ã¯Â¿Â½    ÃƒÆ’Ã…Â¾    ÃƒÆ’Ã…Â¸
             0xe0,0xe1,0xe2,0xe3,0xe4,0xe5,0xe6,0xe7,0xe8,0xe9,0xea,0xeb,0xec,0xed,0xee,0xef,  // c3a ÃƒÆ’Ã‚Â ÃƒÆ’Ã‚Â¡ÃƒÆ’Ã‚Â£ÃƒÆ’Ã‚Â¤ÃƒÆ’Ã‚Â¥ÃƒÆ’Ã‚Â¦ÃƒÆ’Ã‚Â§ÃƒÆ’Ã‚Â¨ÃƒÆ’Ã‚Â©ÃƒÆ’Ã‚ÂªÃƒÆ’Ã‚Â«ÃƒÆ’Ã‚Â¬ÃƒÆ’Ã‚Â­ÃƒÆ’Ã‚Â®ÃƒÆ’Ã‚Â¯
  //          ÃƒÆ’Ã‚Â     ÃƒÆ’Ã‚Â¡    ÃƒÆ’Ã‚Â¢    ÃƒÆ’Ã‚Â£    ÃƒÆ’Ã‚Â¤    ÃƒÆ’Ã‚Â¥    ÃƒÆ’Ã‚Â¦    ÃƒÆ’Ã‚Â§    ÃƒÆ’Ã‚Â¨    ÃƒÆ’Ã‚Â©    ÃƒÆ’Ã‚Âª    ÃƒÆ’Ã‚Â«    ÃƒÆ’Ã‚Â¬    ÃƒÆ’Ã‚Â­    ÃƒÆ’Ã‚Â®    ÃƒÆ’Ã‚Â¯
             0xf0,0xf1,0xf2,0xf3,0xf4,0xf5,0xf6,0xf7,0xf8,0xf9,0xfa,0xfb,0xfc,0xfd,0xfe,0xff   // c3b ÃƒÆ’Ã‚Â°ÃƒÆ’Ã‚Â±ÃƒÆ’Ã‚Â³ÃƒÆ’Ã‚Â´ÃƒÆ’Ã‚ÂµÃƒÆ’Ã‚Â¶ÃƒÆ’Ã‚Â·ÃƒÆ’Ã‚Â¸ÃƒÆ’Ã‚Â¹ÃƒÆ’Ã‚ÂºÃƒÆ’Ã‚Â»ÃƒÆ’Ã‚Â¼ÃƒÆ’Ã‚Â½ÃƒÆ’Ã‚Â¾ÃƒÆ’Ã‚Â¿
  //          ÃƒÆ’Ã‚Â°    ÃƒÆ’Ã‚Â±    ÃƒÆ’Ã‚Â²    ÃƒÆ’Ã‚Â³    ÃƒÆ’Ã‚Â´    ÃƒÆ’Ã‚Âµ    ÃƒÆ’Ã‚Â¶    ÃƒÆ’Ã‚Â·    ÃƒÆ’Ã‚Â¸    ÃƒÆ’Ã‚Â¹    ÃƒÆ’Ã‚Âº    ÃƒÆ’Ã‚Â»    ÃƒÆ’Ã‚Â¼    ÃƒÆ’Ã‚Â½    ÃƒÆ’Ã‚Â¾    ÃƒÆ’Ã‚Â¿
           };
    #elif ENABLED(MAPPER_D0D1)
      #define MAPPER_D0D1_MOD
      const PROGMEM uint8_t utf_recode[] =
           {//0    1    2    3    4    5    6    7    8    9    a    b    c    d    e    f
             0x41,0x80,0x42,0x92,0x81,0x45,0x82,0x83,0x84,0x85,0x4b,0x86,0x4d,0x48,0x4f,0x87,  // d0a
  //          A    Ãƒï¿½Ã¢â‚¬Ëœ    B    Ãƒï¿½Ã¢â‚¬Å“    Ãƒï¿½Ã¢â‚¬ï¿½    E    Ãƒï¿½Ã¢â‚¬â€œ    Ãƒï¿½Ã¢â‚¬â€�    Ãƒï¿½Ã‹Å“    Ãƒï¿½Ã¢â€žÂ¢    K    Ãƒï¿½Ã¢â‚¬Âº    M    H    O    Ãƒï¿½Ã…Â¸
             0x50,0x43,0x54,0x88,0xd8,0x58,0x89,0x8a,0x8b,0x8c,0x8d,0x8e,0x62,0x8f,0xac,0xad,  // d0b
  //          P    C    T    Ãƒï¿½Ã‚Â£    Ãƒï¿½Ã‚Â¤    X    Ãƒï¿½Ã‚Â§    Ãƒâ€˜Ã¢â‚¬Â¡    Ãƒï¿½Ã‚Â¨    Ãƒï¿½Ã‚Â©    Ãƒï¿½Ã‚Âª    Ãƒï¿½Ã‚Â«    b    Ãƒï¿½Ã‚Â­    Ãƒï¿½Ã‚Â®    Ãƒï¿½Ã‚Â¯
             0x61,0x36,0x42,0x92,0x81,0x65,0x82,0xb3,0x84,0x85,0x6b,0x86,0x4d,0x48,0x6f,0x87,  // d18
  //          a    6    B    Ãƒï¿½Ã¢â‚¬Å“    Ãƒï¿½Ã¢â‚¬ï¿½    e    Ãƒï¿½Ã¢â‚¬â€œ    Ãƒâ€šÃ‚Â³    Ãƒï¿½Ã‹Å“    Ãƒï¿½Ã¢â€žÂ¢    k    Ãƒï¿½Ã¢â‚¬Âº    M    H    o    Ãƒï¿½Ã…Â¸
             0x70,0x63,0x54,0x79,0xd8,0x78,0x89,0x8a,0x8b,0x8c,0x8d,0x8e,0x62,0x8f,0xac,0xad   // d19
  //          p    c    T    y    Ãƒï¿½Ã‚Â¤    x    Ãƒï¿½Ã‚Â§    Ãƒâ€˜Ã¢â‚¬Â¡    Ãƒï¿½Ã‚Â¨    Ãƒï¿½Ã‚Â©    Ãƒï¿½Ã‚Âª    Ãƒï¿½Ã‚Â«    b    Ãƒï¿½Ã‚Â­    Ãƒï¿½Ã‚Â®    Ãƒï¿½Ã‚Â¯
            };
    #elif ENABLED(MAPPER_E382E383)
      #error( "Katakana on a western display makes no sense. There are no matching symbols." );
    #endif

  #elif ENABLED(DISPLAY_CHARSET_HD44780_CYRILLIC)
    #if ENABLED(MAPPER_D0D1)
      #define MAPPER_D0D1_MOD
      // it is a Russian alphabet translation
      // except 0401 --> 0xa2 = Ãƒï¿½Ã¯Â¿Â½, 0451 --> 0xb5 = Ãƒâ€˜Ã¢â‚¬Ëœ
      const PROGMEM uint8_t utf_recode[] =
             { 0x41,0xa0,0x42,0xa1,0xe0,0x45,0xa3,0xa4,   // unicode U+0400 to U+047f
  //            A   Ãƒï¿½Ã¢â‚¬Ëœ->Ãƒï¿½Ã¯Â¿Â½  B    Ãƒï¿½Ã¢â‚¬Å“    Ãƒï¿½Ã¢â‚¬ï¿½    E    Ãƒï¿½Ã¢â‚¬â€œ    Ãƒï¿½Ã¢â‚¬â€�      // 0  Ãƒï¿½Ã¢â€šÂ¬ Ãƒï¿½Ã¯Â¿Â½ Ãƒï¿½Ã¢â‚¬Å¡ Ãƒï¿½Ã†â€™ Ãƒï¿½Ã¢â‚¬Å¾ Ãƒï¿½Ã¢â‚¬Â¦ Ãƒï¿½Ã¢â‚¬Â  Ãƒï¿½Ã¢â‚¬Â¡
               0xa5,0xa6,0x4b,0xa7,0x4d,0x48,0x4f,0xa8,   //    Ãƒï¿½Ã‹â€  Ãƒï¿½Ã¢â‚¬Â° Ãƒï¿½Ã…Â  Ãƒï¿½Ã¢â‚¬Â¹ Ãƒï¿½Ã…â€™ Ãƒï¿½Ã¯Â¿Â½ Ãƒï¿½Ã…Â½ Ãƒï¿½Ã¯Â¿Â½
  //            Ãƒï¿½Ã‹Å“    Ãƒï¿½Ã¢â€žÂ¢    K    Ãƒï¿½Ã¢â‚¬Âº    M    H    O    Ãƒï¿½Ã…Â¸      // 1  Ãƒï¿½Ã¯Â¿Â½ Ãƒï¿½Ã¢â‚¬Ëœ Ãƒï¿½Ã¢â‚¬â„¢ Ãƒï¿½Ã¢â‚¬Å“ Ãƒï¿½Ã¢â‚¬ï¿½ Ãƒï¿½Ã¢â‚¬Â¢ Ãƒï¿½Ã¢â‚¬â€œ Ãƒï¿½Ã¢â‚¬â€�
               0x50,0x43,0x54,0xa9,0xaa,0x58,0xe1,0xab,   //    Ãƒï¿½Ã‹Å“ Ãƒï¿½Ã¢â€žÂ¢ Ãƒï¿½Ã…Â¡ Ãƒï¿½Ã¢â‚¬Âº Ãƒï¿½Ã…â€œ Ãƒï¿½Ã¯Â¿Â½ Ãƒï¿½Ã…Â¾ Ãƒï¿½Ã…Â¸
  //            P    C    T    Ãƒï¿½Ã‚Â£    Ãƒï¿½Ã‚Â¤    X    Ãƒï¿½Ã‚Â§    Ãƒâ€˜Ã¢â‚¬Â¡      // 2  Ãƒï¿½Ã‚Â  Ãƒï¿½Ã‚Â¡ Ãƒï¿½Ã‚Â¢ Ãƒï¿½Ã‚Â£ Ãƒï¿½Ã‚Â¤ Ãƒï¿½Ã‚Â¥ Ãƒï¿½Ã¢â‚¬Å“ Ãƒï¿½Ã‚Â§
               0xac,0xe2,0xad,0xae,0x62,0xaf,0xb0,0xb1,   //    Ãƒï¿½Ã‚Â¨ Ãƒï¿½Ã‚Â© Ãƒï¿½Ã‚Âª Ãƒï¿½Ã‚Â« Ãƒï¿½Ã‚Â¬ Ãƒï¿½Ã‚Â­ Ãƒï¿½Ã‚Â® Ãƒï¿½Ã‚Â¯
  //            Ãƒï¿½Ã‚Â¨    Ãƒï¿½Ã‚Â©    Ãƒï¿½Ã‚Âª    Ãƒï¿½Ã‚Â«    b    Ãƒï¿½Ã‚Â­    Ãƒï¿½Ã‚Â®    Ãƒï¿½Ã‚Â¯      // 3  Ãƒï¿½Ã‚Â° Ãƒï¿½Ã‚Â± Ãƒï¿½Ã‚Â² Ãƒï¿½Ã‚Â³ Ãƒï¿½Ã‚Â´ Ãƒï¿½Ã‚Âµ Ãƒï¿½Ã‚Â¶ Ãƒï¿½Ã‚Â·
               0x61,0xb2,0xb3,0xb4,0xe3,0x65,0xb6,0xb7,   //    Ãƒï¿½Ã‚Â¸ Ãƒï¿½Ã‚Â¹ Ãƒï¿½Ã‚Âº Ãƒï¿½Ã‚Â» Ãƒï¿½Ã‚Â¼ Ãƒï¿½Ã‚Â½ Ãƒï¿½Ã‚Â¾ Ãƒï¿½Ã‚Â¿
  //            a   Ãƒï¿½Ã‚Â±->Ãƒâ€˜Ã¢â‚¬Ëœ  Ãƒï¿½Ã‚Â²    Ãƒï¿½Ã‚Â³    Ãƒï¿½Ã‚Â´    e    Ãƒï¿½Ã‚Â¶    Ãƒï¿½Ã‚Â·      // 4  Ãƒâ€˜Ã¢â€šÂ¬ Ãƒâ€˜Ã¯Â¿Â½ Ãƒâ€˜Ã¢â‚¬Å¡ Ãƒâ€˜Ã†â€™ Ãƒâ€˜Ã¢â‚¬Å¾ Ãƒâ€˜Ã¢â‚¬Â¦ Ãƒâ€˜Ã¢â‚¬Â  Ãƒâ€˜Ã¢â‚¬Â¡
               0xb8,0xb9,0xba,0xbb,0xbc,0xbd,0x6f,0xbe,   //    Ãƒâ€˜Ã‹â€  Ãƒâ€˜Ã¢â‚¬Â° Ãƒâ€˜Ã…Â  Ãƒâ€˜Ã¢â‚¬Â¹ Ãƒâ€˜Ã…â€™ Ãƒâ€˜Ã¯Â¿Â½ Ãƒâ€˜Ã…Â½ Ãƒâ€˜Ã¯Â¿Â½
  //            Ãƒï¿½Ã‚Â¸    Ãƒï¿½Ã‚Â¹    Ãƒï¿½Ã‚Âº    Ãƒï¿½Ã‚Â»    Ãƒï¿½Ã‚Â¼    Ãƒï¿½Ã‚Â½    o    Ãƒï¿½Ã‚Â¿      // 5  Ãƒâ€˜Ã¯Â¿Â½ Ãƒâ€˜Ã¢â‚¬Ëœ Ãƒâ€˜Ã¢â‚¬â„¢ Ãƒâ€˜Ã¢â‚¬Å“ Ãƒâ€˜Ã¢â‚¬ï¿½ Ãƒâ€˜Ã¢â‚¬Â¢ Ãƒâ€˜Ã¢â‚¬â€œ Ãƒâ€˜Ã¢â‚¬â€�
               0x70,0x63,0xbf,0x79,0xe4,0x78,0xe5,0xc0,   //    Ãƒâ€˜Ã‹Å“ Ãƒâ€˜Ã¢â€žÂ¢ Ãƒâ€˜Ã…Â¡ Ãƒâ€˜Ã¢â‚¬Âº Ãƒâ€˜Ã…â€œ Ãƒâ€˜Ã¯Â¿Â½ Ãƒâ€˜Ã…Â¾ Ãƒâ€˜Ã…Â¸
  //            p    c    Ãƒâ€˜Ã¢â‚¬Å¡    y    Ãƒâ€˜Ã¢â‚¬Å¾    x    Ãƒâ€˜Ã¢â‚¬Â     Ãƒâ€˜Ã¢â‚¬Â¡      // 6  Ãƒâ€˜Ã‚Â  Ãƒâ€˜Ã‚Â¡ Ãƒâ€˜Ã‚Â¢ Ãƒâ€˜Ã‚Â£ Ãƒâ€˜Ã‚Â¤ Ãƒâ€˜Ã‚Â¥ Ãƒâ€˜Ã‚Â¦ Ãƒâ€˜Ã‚Â§
               0xc1,0xe6,0xc2,0xc3,0xc4,0xc5,0xc6,0xc7    //    Ãƒâ€˜Ã‚Âª Ãƒâ€˜Ã‚Â© Ãƒâ€˜Ã‚Âª Ãƒâ€˜Ã‚Â« Ãƒâ€˜Ã‚Â¬ Ãƒâ€˜Ã‚Â­ Ãƒâ€˜Ã‚Â® Ãƒâ€˜Ã‚Â¯
  //            Ãƒâ€˜Ã‹â€     Ãƒâ€˜Ã¢â‚¬Â°    Ãƒâ€˜Ã…Â     Ãƒâ€˜Ã¢â‚¬Â¹    Ãƒâ€˜Ã…â€™    Ãƒâ€˜Ã¯Â¿Â½    Ãƒâ€˜Ã…Â½    Ãƒâ€˜Ã¯Â¿Â½      // 7  Ãƒâ€˜Ã‚Â° Ãƒâ€˜Ã‚Â± Ãƒâ€˜Ã‚Â² Ãƒâ€˜Ã‚Â³ Ãƒâ€˜Ã‚Â´ Ãƒâ€˜Ã‚Âµ Ãƒâ€˜Ã‚Â¶ Ãƒâ€˜Ã‚Â·
             };                                           //    Ãƒâ€˜Ã‚Â» Ãƒâ€˜Ã‚Â¹ Ãƒâ€˜Ã‚Âº Ãƒâ€˜Ã‚Â» Ãƒâ€˜Ã‚Â¼ Ãƒâ€˜Ã‚Â½ Ãƒâ€˜Ã‚Â¾ Ãƒâ€˜Ã‚Â¿
    #elif ENABLED(MAPPER_C2C3)
      #error( "Western languages on a cyrillic display makes no sense. There are no matching symbols." );
    #elif ENABLED(MAPPER_E382E383)
      #error( "Katakana on a cyrillic display makes no sense. There are no matching symbols." );
    #endif
  #else
    #error("Something went wrong in the selection of DISPLAY_CHARSET_HD44780's");
  #endif // DISPLAY_CHARSET_HD44780_CYRILLIC
#endif // SIMULATE_ROMFONT

#if ENABLED(MAPPER_NON)

  char charset_mapper(char c) {
    HARDWARE_CHAR_OUT( c );
    return 1;
  }

#elif ENABLED(MAPPER_C2C3)

  char charset_mapper(char c) {
    static uint8_t utf_hi_char; // UTF-8 high part
    static bool seen_c2 = false;
    uint8_t d = c;
    if ( d >= 0x80 ) { // UTF-8 handling
      if ( (d >= 0xc0) && (!seen_c2) ) {
        utf_hi_char = d - 0xc2;
        seen_c2 = true;
        return 0;
      }
      else if (seen_c2) {
        d &= 0x3f;
        #ifndef MAPPER_ONE_TO_ONE
          HARDWARE_CHAR_OUT((char)pgm_read_byte_near(utf_recode + d + (utf_hi_char << 6) - 0x20));
        #else
          HARDWARE_CHAR_OUT((char)(0x80 + (utf_hi_char << 6) + d)) ;
        #endif
      }
      else {
        HARDWARE_CHAR_OUT('?');
      }
    }
    else {
      HARDWARE_CHAR_OUT((char) c );
    }
    seen_c2 = false;
    return 1;
  }

#elif ENABLED(MAPPER_D0D1_MOD)

  char charset_mapper(char c) {
    // it is a Russian alphabet translation
    // except 0401 --> 0xa2 = Ãƒï¿½Ã¯Â¿Â½, 0451 --> 0xb5 = Ãƒâ€˜Ã¢â‚¬Ëœ
    static uint8_t utf_hi_char; // UTF-8 high part
    static bool seen_d5 = false;
    uint8_t d = c;
    if (d >= 0x80) { // UTF-8 handling
      if (d >= 0xd0 && !seen_d5) {
        utf_hi_char = d - 0xd0;
        seen_d5 = true;
        return 0;
      }
      else if (seen_d5) {
        d &= 0x3f;
        if (!utf_hi_char && d == 1) {
          HARDWARE_CHAR_OUT((char) 0xa2); // Ãƒï¿½Ã¯Â¿Â½
        }
        else if (utf_hi_char == 1 && d == 0x11) {
          HARDWARE_CHAR_OUT((char)0xb5); // Ãƒâ€˜Ã¢â‚¬Ëœ
        }
        else {
          HARDWARE_CHAR_OUT((char)pgm_read_byte_near(utf_recode + d + (utf_hi_char << 6) - 0x10));
        }
      }
      else {
        HARDWARE_CHAR_OUT('?');
      }
    }
    else {
      HARDWARE_CHAR_OUT((char) c );
    }
    seen_d5 = false;
    return 1;
  }

#elif ENABLED(MAPPER_D0D1)

  char charset_mapper(char c) {
    static uint8_t utf_hi_char; // UTF-8 high part
    static bool seen_d5 = false;
    uint8_t d = c;
    if (d >= 0x80u) { // UTF-8 handling
      if (d >= 0xd0u && !seen_d5) {
        utf_hi_char = d - 0xd0u;
        seen_d5 = true;
        return 0;
      }
      else if (seen_d5) {
        d &= 0x3fu;
        #ifndef MAPPER_ONE_TO_ONE
          HARDWARE_CHAR_OUT((char)pgm_read_byte_near(utf_recode + d + (utf_hi_char << 6) - 0x20));
        #else
          HARDWARE_CHAR_OUT((char)(0xa0u + (utf_hi_char << 6) + d)) ;
        #endif
      }
      else {
        HARDWARE_CHAR_OUT('?');
      }
    }
    else {
      HARDWARE_CHAR_OUT((char) c );
    }
    seen_d5 = false;
    return 1;
  }

#elif ENABLED(MAPPER_E382E383)

  char charset_mapper(char c) {
    static uint8_t utf_hi_char; // UTF-8 high part
    static bool seen_e3 = false;
    static bool seen_82_83 = false;
    uint8_t d = c;
    if (d >= 0x80) { // UTF-8 handling
      if (d == 0xe3 && !seen_e3) {
        seen_e3 = true;
        return 0;      // eat 0xe3
      }
      else if (d >= 0x82 && seen_e3 && !seen_82_83) {
        utf_hi_char = d - 0x82;
        seen_82_83 = true;
        return 0;
      }
      else if (seen_e3 && seen_82_83) {
        d &= 0x3f;
        #ifndef MAPPER_ONE_TO_ONE
          HARDWARE_CHAR_OUT((char)pgm_read_byte_near(utf_recode + d + (utf_hi_char << 6) - 0x20));
        #else
          HARDWARE_CHAR_OUT((char)(0x80 + (utf_hi_char << 6) + d)) ;
        #endif
      }
      else {
        HARDWARE_CHAR_OUT((char) '?' );
      }
    }
    else {
      HARDWARE_CHAR_OUT((char) c );
    }
    seen_e3 = false;
    seen_82_83 = false;
    return 1;
  }

#else

  #error "You have to define one of the DISPLAY_INPUT_CODE_MAPPERs in your language_xx.h file" // should not occur because (en) will set.

#endif // code mappers

#endif // UTF_MAPPER_H



