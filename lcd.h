#ifndef LCD_H
#define LCD_H
//------------------------------------------------------------------------------
// Makelangelo - firmware for various robot kinematic models
// dan@marginallycelver.com 2013-12-26
// Copyright at end of file.  Please see
// http://www.github.com/MarginallyClever/makelangeloFirmware for more information.
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
// INCLUDES
//------------------------------------------------------------------------------
#ifdef HAS_LCD

// only uncomment one of these options
#define LCD_IS_128X64  // reprapdiscount Full Graphic Smart LCD Controller
//#define LCD_IS_SMART  // reprapdiscount Smart LCD Controller (including XXL model)


//----------------------------------------------------

#ifdef LCD_IS_128X64


// Smart controller settings
#define BEEPER             44
#define LCD_PINS_RS        19
#define LCD_PINS_ENABLE    42
#define LCD_PINS_D4        18
#define LCD_PINS_D5        38
#define LCD_PINS_D6        41
#define LCD_PINS_D7        40

// Encoder rotation values
#define BTN_EN1            11
#define BTN_EN2            12
#define BTN_ENC            43

// SD card settings
#define SDPOWER            -1
#define SDSS               53
#define SDCARDDETECT       49

#define LCD_PIXEL_HEIGHT   64
#define LCD_PIXEL_WIDTH    128

#define FONT_HEIGHT        9
#define FONT_WIDTH         6
#define LCD_HEIGHT         (LCD_PIXEL_HEIGHT/FONT_HEIGHT)
#define LCD_WIDTH          (LCD_PIXEL_WIDTH/FONT_WIDTH)

#define BLEN_C             2
#define BLEN_B             1
#define BLEN_A             0
  
#define encrot0            0
#define encrot1            2
#define encrot2            3
#define encrot3            1

#include "dogm_font_data_6x9.h"

#endif

#ifdef LCD_IS_SMART

// Smart controller settings
#define BEEPER             44
#define LCD_PINS_RS        19
#define LCD_PINS_ENABLE    42
#define LCD_PINS_D4        18
#define LCD_PINS_D5        38
#define LCD_PINS_D6        41
#define LCD_PINS_D7        40

// Encoder rotation values
#define BTN_EN1            11
#define BTN_EN2            12
#define BTN_ENC            43

// SD card settings
#define SDPOWER            -1
#define SDSS               53
#define SDCARDDETECT       49

#define LCD_HEIGHT         4
#define LCD_WIDTH          20

#define BLEN_C             2
#define BLEN_B             1
#define BLEN_A             0
  
#define encrot0            0
#define encrot1            2
#define encrot2            3
#define encrot3            1

#endif

//------------------------------------------------------------------------------
// Stuff that's calculated automatically
//------------------------------------------------------------------------------

#define LCD_MESSAGE_LENGTH (LCD_HEIGHT * (LCD_WIDTH + 1))  // we have two lines of 20 characters avialable in 7.16
#define LCD_DRAW_DELAY     (150)
#define LCD_TURN_PER_MENU  (5)

extern char lcd_message[LCD_MESSAGE_LENGTH+1];

#endif // HAS_LCD

#endif // LCD_H
