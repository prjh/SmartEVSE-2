#include "GLCD.h"

#ifdef GLCD_HIRES_FONT

#ifdef GLCD_FULL_CHARSET
const unsigned char font2[0x100][23] = {
#else
const unsigned char font2[0x7F][23] = {
#endif
    {0x0},                                                                                                                                     // 0x00
    {0x0},                                                                                                                                     // 0x01
    {0x0},                                                                                                                                     // 0x02
    {0x0},                                                                                                                                     // 0x03
    {0x0},                                                                                                                                     // 0x04
    {0x0},                                                                                                                                     // 0x05
    {0x0},                                                                                                                                     // 0x06
    {0x0},                                                                                                                                     // 0x07
    {0x0},                                                                                                                                     // 0x08
    {0x0},                                                                                                                                     // 0x09
    {0x0},                                                                                                                                     // 0x0A
    {0x0},                                                                                                                                     // 0x0B
    {0x0},                                                                                                                                     // 0x0C
    {0x0},                                                                                                                                     // 0x0D
    {0x0},                                                                                                                                     // 0x0E
    {0x0},                                                                                                                                     // 0x0F
    {0x0},                                                                                                                                     // 0x10
    {0x0},                                                                                                                                     // 0x11
    {0x0},                                                                                                                                     // 0x12
    {0x0},                                                                                                                                     // 0x13
    {0x0},                                                                                                                                     // 0x14
    {0x0},                                                                                                                                     // 0x15
    {0x0},                                                                                                                                     // 0x16
    {0x0},                                                                                                                                     // 0x17
    {0x0},                                                                                                                                     // 0x18
    {0x0},                                                                                                                                     // 0x19
    {0x0},                                                                                                                                     // 0x1A
    {0x0},                                                                                                                                     // 0x1B
    {0x0},                                                                                                                                     // 0x1C
    {0x0},                                                                                                                                     // 0x1D
    {0x0},                                                                                                                                     // 0x1E
    {0x0},                                                                                                                                     // 0x1F
    {0x3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},                                                                                                 // 0x20 Space
    {0x4, 0x7C, 0x00, 0xFF, 0x33, 0xFF, 0x33, 0x7C, 0x00},                                                                                     // 0x21 !
    {0x6, 0x3C, 0x00, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3C, 0x00, 0x3C, 0x00},                                                             // 0x22 "
    {0xB, 0x00, 0x02, 0x10, 0x1E, 0x90, 0x1F, 0xF0, 0x03, 0x7E, 0x02, 0x1E, 0x1E, 0x90, 0x1F, 0xF0, 0x03, 0x7E, 0x02, 0x1E, 0x00, 0x10, 0x00}, // 0x23 #
    {0x8, 0x78, 0x04, 0xFC, 0x0C, 0xCC, 0x0C, 0xFF, 0x3F, 0xFF, 0x3F, 0xCC, 0x0C, 0xCC, 0x0F, 0x88, 0x07},                                     // 0x24 $
    {0xB, 0x00, 0x30, 0x38, 0x38, 0x38, 0x1C, 0x38, 0x0E, 0x00, 0x07, 0x80, 0x03, 0xC0, 0x01, 0xE0, 0x38, 0x70, 0x38, 0x38, 0x38, 0x1C, 0x00}, // 0x25 %
    {0x9, 0x00, 0x1F, 0xB8, 0x3F, 0xFC, 0x31, 0xC6, 0x21, 0xE2, 0x37, 0x3E, 0x1E, 0x1C, 0x1C, 0x00, 0x36, 0x00, 0x22},                         // 0x26 &
    {0x3, 0x27, 0x00, 0x3F, 0x00, 0x1F, 0x00},                                                                                                 // 0x27 '
    {0x6, 0xF0, 0x03, 0xFC, 0x0F, 0xFE, 0x1F, 0x07, 0x38, 0x01, 0x20, 0x01, 0x20},                                                             // 0x28 (
    {0x6, 0x01, 0x20, 0x01, 0x20, 0x07, 0x38, 0xFE, 0x1F, 0xFC, 0x0F, 0xF0, 0x03},                                                             // 0x29 )
    {0x8, 0x98, 0x0C, 0xB8, 0x0E, 0xE0, 0x03, 0xF8, 0x0F, 0xF8, 0x0F, 0xE0, 0x03, 0xB8, 0x0E, 0x98, 0x0C},                                     // 0x2A *
    {0x8, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0xF0, 0x0F, 0xF0, 0x0F, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01},                                     // 0x2B +
    {0x3, 0x00, 0xB8, 0x00, 0xF8, 0x00, 0x78},                                                                                                 // 0x2C ,
    {0x8, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01},                                     // 0x2D -
    {0x3, 0x00, 0x38, 0x00, 0x38, 0x00, 0x38},                                                                                                 // 0x2E .
    {0xB, 0x00, 0x18, 0x00, 0x1C, 0x00, 0x0E, 0x00, 0x07, 0x80, 0x03, 0xC0, 0x01, 0xE0, 0x00, 0x70, 0x00, 0x38, 0x00, 0x1C, 0x00, 0x0E, 0x00}, // 0x2F /
    {0xB, 0xF8, 0x07, 0xFE, 0x1F, 0x06, 0x1E, 0x03, 0x33, 0x83, 0x31, 0xC3, 0x30, 0x63, 0x30, 0x33, 0x30, 0x1E, 0x18, 0xFE, 0x1F, 0xF8, 0x07}, // 0x30 0
    {0xB, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x30, 0x0C, 0x30, 0x0E, 0x30, 0xFF, 0x3F, 0xFF, 0x3F, 0x00, 0x30, 0x00, 0x30, 0x00, 0x30, 0x00, 0x00}, // 0x31 1
    {0xB, 0x1C, 0x30, 0x1E, 0x38, 0x07, 0x3C, 0x03, 0x3E, 0x03, 0x37, 0x83, 0x33, 0xC3, 0x31, 0xE3, 0x30, 0x77, 0x30, 0x3E, 0x30, 0x1C, 0x30}, // 0x32 2
    {0xB, 0x0C, 0x0C, 0x0E, 0x1C, 0x07, 0x38, 0xC3, 0x30, 0xC3, 0x30, 0xC3, 0x30, 0xC3, 0x30, 0xC3, 0x30, 0xE7, 0x39, 0x7E, 0x1F, 0x3C, 0x0E}, // 0x33 3
    {0xB, 0xC0, 0x03, 0xE0, 0x03, 0x70, 0x03, 0x38, 0x03, 0x1C, 0x03, 0x0E, 0x03, 0x07, 0x03, 0xFF, 0x3F, 0xFF, 0x3F, 0x00, 0x03, 0x00, 0x03}, // 0x34 4
    {0xB, 0x3F, 0x0C, 0x7F, 0x1C, 0x63, 0x38, 0x63, 0x30, 0x63, 0x30, 0x63, 0x30, 0x63, 0x30, 0x63, 0x30, 0xE3, 0x38, 0xC3, 0x1F, 0x83, 0x0F}, // 0x35 5
    {0xB, 0xC0, 0x0F, 0xF0, 0x1F, 0xF8, 0x39, 0xDC, 0x30, 0xCE, 0x30, 0xC7, 0x30, 0xC3, 0x30, 0xC3, 0x30, 0xC3, 0x39, 0x80, 0x1F, 0x00, 0x0F}, // 0x36 6
    {0xB, 0x03, 0x00, 0x03, 0x00, 0x03, 0x00, 0x03, 0x30, 0x03, 0x3C, 0x03, 0x0F, 0xC3, 0x03, 0xF3, 0x00, 0x3F, 0x00, 0x0F, 0x00, 0x03, 0x00}, // 0x37 7
    {0xB, 0x00, 0x0F, 0xBC, 0x1F, 0xFE, 0x39, 0xE7, 0x30, 0xC3, 0x30, 0xC3, 0x30, 0xC3, 0x30, 0xE7, 0x30, 0xFE, 0x39, 0xBC, 0x1F, 0x00, 0x0F}, // 0x38 8
    {0xB, 0x3C, 0x00, 0x7E, 0x00, 0xE7, 0x30, 0xC3, 0x30, 0xC3, 0x30, 0xC3, 0x38, 0xC3, 0x1C, 0xC3, 0x0E, 0xE7, 0x07, 0xFE, 0x03, 0xFC, 0x00}, // 0x39 9
    {0x3, 0x70, 0x1C, 0x70, 0x1C, 0x70, 0x1C},                                                                                                 // 0x3A :
    {0x3, 0x70, 0x9C, 0x70, 0xFC, 0x70, 0x7C},                                                                                                 // 0x3B ;
    {0x8, 0xC0, 0x00, 0xE0, 0x01, 0xF0, 0x03, 0x38, 0x07, 0x1C, 0x0E, 0x0E, 0x1C, 0x07, 0x38, 0x03, 0x30},                                     // 0x3C <
    {0x9, 0x60, 0x06, 0x60, 0x06, 0x60, 0x06, 0x60, 0x06, 0x60, 0x06, 0x60, 0x06, 0x60, 0x06, 0x60, 0x06, 0x60, 0x06},                         // 0x3D =
    {0x8, 0x03, 0x30, 0x07, 0x38, 0x0E, 0x1C, 0x1C, 0x0E, 0x38, 0x07, 0xF0, 0x03, 0xE0, 0x01, 0xC0, 0x00},                                     // 0x3E >
    {0xA, 0x1C, 0x00, 0x1E, 0x00, 0x07, 0x00, 0x03, 0x00, 0x83, 0x37, 0xC3, 0x37, 0xE3, 0x00, 0x77, 0x00, 0x3E, 0x00, 0x1C, 0x00},             // 0x3F ?
    {0xB, 0xF8, 0x0F, 0xFE, 0x1F, 0x07, 0x18, 0xF3, 0x33, 0xFB, 0x37, 0x1B, 0x36, 0xFB, 0x37, 0xFB, 0x37, 0x07, 0x36, 0xFE, 0x03, 0xF8, 0x01}, // 0x40 @
    {0xA, 0x00, 0x38, 0x00, 0x3F, 0xE0, 0x07, 0xFC, 0x06, 0x1F, 0x06, 0x1F, 0x06, 0xFC, 0x06, 0xE0, 0x07, 0x00, 0x3F, 0x00, 0x38},             // 0x41 A
    {0xA, 0xFF, 0x3F, 0xFF, 0x3F, 0xC3, 0x30, 0xC3, 0x30, 0xC3, 0x30, 0xC3, 0x30, 0xE7, 0x30, 0xFE, 0x39, 0xBC, 0x1F, 0x00, 0x0F},             // 0x42 B
    {0xA, 0xF0, 0x03, 0xFC, 0x0F, 0x0E, 0x1C, 0x07, 0x38, 0x03, 0x30, 0x03, 0x30, 0x03, 0x30, 0x07, 0x38, 0x0E, 0x1C, 0x0C, 0x0C},             // 0x43 C
    {0xA, 0xFF, 0x3F, 0xFF, 0x3F, 0x03, 0x30, 0x03, 0x30, 0x03, 0x30, 0x03, 0x30, 0x07, 0x38, 0x0E, 0x1C, 0xFC, 0x0F, 0xF0, 0x03},             // 0x44 D
    {0xA, 0xFF, 0x3F, 0xFF, 0x3F, 0xC3, 0x30, 0xC3, 0x30, 0xC3, 0x30, 0xC3, 0x30, 0xC3, 0x30, 0xC3, 0x30, 0x03, 0x30, 0x03, 0x30},             // 0x45 E
    {0xA, 0xFF, 0x3F, 0xFF, 0x3F, 0xC3, 0x00, 0xC3, 0x00, 0xC3, 0x00, 0xC3, 0x00, 0xC3, 0x00, 0xC3, 0x00, 0x03, 0x00, 0x03, 0x00},             // 0x46 F
    {0xA, 0xF0, 0x03, 0xFC, 0x0F, 0x0E, 0x1C, 0x07, 0x38, 0x03, 0x30, 0xC3, 0x30, 0xC3, 0x30, 0xC3, 0x30, 0xC7, 0x3F, 0xC6, 0x3F},             // 0x47 G
    {0xA, 0xFF, 0x3F, 0xFF, 0x3F, 0xC0, 0x00, 0xC0, 0x00, 0xC0, 0x00, 0xC0, 0x00, 0xC0, 0x00, 0xC0, 0x00, 0xFF, 0x3F, 0xFF, 0x3F},             // 0x48 H
    {0x6, 0x03, 0x30, 0x03, 0x30, 0xFF, 0x3F, 0xFF, 0x3F, 0x03, 0x30, 0x03, 0x30},                                                             // 0x49 I
    {0xA, 0x00, 0x0E, 0x00, 0x1E, 0x00, 0x38, 0x00, 0x30, 0x00, 0x30, 0x00, 0x30, 0x00, 0x30, 0x00, 0x38, 0xFF, 0x1F, 0xFF, 0x07},             // 0x4A J
    {0xA, 0xFF, 0x3F, 0xFF, 0x3F, 0xC0, 0x00, 0xE0, 0x01, 0xF0, 0x03, 0x38, 0x07, 0x1C, 0x0E, 0x0E, 0x1C, 0x07, 0x38, 0x03, 0x30},             // 0x4B K
    {0xA, 0xFF, 0x3F, 0xFF, 0x3F, 0x00, 0x30, 0x00, 0x30, 0x00, 0x30, 0x00, 0x30, 0x00, 0x30, 0x00, 0x30, 0x00, 0x30, 0x00, 0x30},             // 0x4C L
    {0xA, 0xFF, 0x3F, 0xFF, 0x3F, 0x1E, 0x00, 0x78, 0x00, 0xE0, 0x01, 0xE0, 0x01, 0x78, 0x00, 0x1E, 0x00, 0xFF, 0x3F, 0xFF, 0x3F},             // 0x4D M
    {0xA, 0xFF, 0x3F, 0xFF, 0x3F, 0x0E, 0x00, 0x38, 0x00, 0xF0, 0x00, 0xC0, 0x03, 0x00, 0x07, 0x00, 0x1C, 0xFF, 0x3F, 0xFF, 0x3F},             // 0x4E N
    {0xA, 0xF0, 0x03, 0xFC, 0x0F, 0x0E, 0x1C, 0x07, 0x38, 0x03, 0x30, 0x03, 0x30, 0x07, 0x38, 0x0E, 0x1C, 0xFC, 0x0F, 0xF0, 0x03},             // 0x4F O
    {0xA, 0xFF, 0x3F, 0xFF, 0x3F, 0x83, 0x01, 0x83, 0x01, 0x83, 0x01, 0x83, 0x01, 0x83, 0x01, 0xC7, 0x01, 0xFE, 0x00, 0x7C, 0x00},             // 0x50 P
    {0xA, 0xF0, 0x03, 0xFC, 0x0F, 0x0E, 0x1C, 0x07, 0x38, 0x03, 0x30, 0x03, 0x36, 0x07, 0x3E, 0x0E, 0x1C, 0xFC, 0x3F, 0xF0, 0x33},             // 0x51 Q
    {0xA, 0xFF, 0x3F, 0xFF, 0x3F, 0x83, 0x01, 0x83, 0x01, 0x83, 0x03, 0x83, 0x07, 0x83, 0x0F, 0xC7, 0x1D, 0xFE, 0x38, 0x7C, 0x30},             // 0x52 R
    {0xA, 0x3C, 0x0C, 0x7E, 0x1C, 0xE7, 0x38, 0xC3, 0x30, 0xC3, 0x30, 0xC3, 0x30, 0xC3, 0x30, 0xC7, 0x39, 0x8E, 0x1F, 0x0C, 0x0F},             // 0x53 S
    {0x8, 0x03, 0x00, 0x03, 0x00, 0x03, 0x00, 0xFF, 0x3F, 0xFF, 0x3F, 0x03, 0x00, 0x03, 0x00, 0x03, 0x00},                                     // 0x54 T
    {0xA, 0xFF, 0x07, 0xFF, 0x1F, 0x00, 0x38, 0x00, 0x30, 0x00, 0x30, 0x00, 0x30, 0x00, 0x30, 0x00, 0x38, 0xFF, 0x1F, 0xFF, 0x07},             // 0x55 U
    {0xA, 0x07, 0x00, 0x3F, 0x00, 0xF8, 0x01, 0xC0, 0x0F, 0x00, 0x3E, 0x00, 0x3E, 0xC0, 0x0F, 0xF8, 0x01, 0x3F, 0x00, 0x07, 0x00},             // 0x56 V
    {0xA, 0xFF, 0x3F, 0xFF, 0x3F, 0x00, 0x1C, 0x00, 0x06, 0x80, 0x03, 0x80, 0x03, 0x00, 0x06, 0x00, 0x1C, 0xFF, 0x3F, 0xFF, 0x3F},             // 0x57 W
    {0xA, 0x03, 0x30, 0x0F, 0x3C, 0x1C, 0x0E, 0x30, 0x03, 0xE0, 0x01, 0xE0, 0x01, 0x30, 0x03, 0x1C, 0x0E, 0x0F, 0x3C, 0x03, 0x30},             // 0x58 X
    {0xA, 0x03, 0x00, 0x0F, 0x00, 0x3C, 0x00, 0xF0, 0x00, 0xC0, 0x3F, 0xC0, 0x3F, 0xF0, 0x00, 0x3C, 0x00, 0x0F, 0x00, 0x03, 0x00},             // 0x59 Y
    {0xA, 0x03, 0x30, 0x03, 0x3C, 0x03, 0x3E, 0x03, 0x33, 0xC3, 0x31, 0xE3, 0x30, 0x33, 0x30, 0x1F, 0x30, 0x0F, 0x30, 0x03, 0x30},             // 0x5A Z
    {0x6, 0xFF, 0x3F, 0xFF, 0x3F, 0x03, 0x30, 0x03, 0x30, 0x03, 0x30, 0x03, 0x30},                                                             // 0x5B [
    {0xB, 0x0E, 0x00, 0x1C, 0x00, 0x38, 0x00, 0x70, 0x00, 0xE0, 0x00, 0xC0, 0x01, 0x80, 0x03, 0x00, 0x07, 0x00, 0x0E, 0x00, 0x1C, 0x00, 0x18}, // 0x5C Backslash
    {0x6, 0x03, 0x30, 0x03, 0x30, 0x03, 0x30, 0x03, 0x30, 0xFF, 0x3F, 0xFF, 0x3F},                                                             // 0x5D ]
    {0xB, 0x60, 0x00, 0x70, 0x00, 0x38, 0x00, 0x1C, 0x00, 0x0E, 0x00, 0x07, 0x00, 0x0E, 0x00, 0x1C, 0x00, 0x38, 0x00, 0x70, 0x00, 0x60, 0x00}, // 0x5E ^
    {0xB, 0x00, 0xC0, 0x00, 0xC0, 0x00, 0xC0, 0x00, 0xC0, 0x00, 0xC0, 0x00, 0xC0, 0x00, 0xC0, 0x00, 0xC0, 0x00, 0xC0, 0x00, 0xC0, 0x00, 0xC0}, // 0x5F _
    {0x3, 0x3E, 0x00, 0x7E, 0x00, 0x4E, 0x00},                                                                                                 // 0x60 `
    {0xA, 0x00, 0x1C, 0x40, 0x3E, 0x60, 0x33, 0x60, 0x33, 0x60, 0x33, 0x60, 0x33, 0x60, 0x33, 0x60, 0x33, 0xE0, 0x3F, 0xC0, 0x3F},             // 0x61 a
    {0xA, 0xFF, 0x3F, 0xFF, 0x3F, 0xC0, 0x30, 0x60, 0x30, 0x60, 0x30, 0x60, 0x30, 0x60, 0x30, 0xE0, 0x38, 0xC0, 0x1F, 0x80, 0x0F},             // 0x62 b
    {0xA, 0x80, 0x0F, 0xC0, 0x1F, 0xE0, 0x38, 0x60, 0x30, 0x60, 0x30, 0x60, 0x30, 0x60, 0x30, 0x60, 0x30, 0xC0, 0x18, 0x80, 0x08},             // 0x63 c
    {0xA, 0x80, 0x0F, 0xC0, 0x1F, 0xE0, 0x38, 0x60, 0x30, 0x60, 0x30, 0x60, 0x30, 0xE0, 0x30, 0xC0, 0x30, 0xFF, 0x3F, 0xFF, 0x3F},             // 0x64 d
    {0xA, 0x80, 0x0F, 0xC0, 0x1F, 0xE0, 0x3B, 0x60, 0x33, 0x60, 0x33, 0x60, 0x33, 0x60, 0x33, 0x60, 0x33, 0xC0, 0x13, 0x80, 0x01},             // 0x65 e
    {0x8, 0xC0, 0x00, 0xC0, 0x00, 0xFC, 0x3F, 0xFE, 0x3F, 0xC7, 0x00, 0xC3, 0x00, 0xC3, 0x00, 0x03, 0x00},                                     // 0x66 f
    {0xA, 0x80, 0x03, 0xC0, 0xC7, 0xE0, 0xCE, 0x60, 0xCC, 0x60, 0xCC, 0x60, 0xCC, 0x60, 0xCC, 0x60, 0xE6, 0xE0, 0x7F, 0xE0, 0x3F},             // 0x67 g
    {0x9, 0xFF, 0x3F, 0xFF, 0x3F, 0xC0, 0x00, 0x60, 0x00, 0x60, 0x00, 0x60, 0x00, 0xE0, 0x00, 0xC0, 0x3F, 0x80, 0x3F},                         // 0x68 h
    {0x6, 0x00, 0x30, 0x60, 0x30, 0xEC, 0x3F, 0xEC, 0x3F, 0x00, 0x30, 0x00, 0x30},                                                             // 0x69 i
    {0x6, 0x00, 0x60, 0x00, 0xE0, 0x00, 0xC0, 0x60, 0xC0, 0xEC, 0xFF, 0xEC, 0x7F},                                                             // 0x6A j
    {0x8, 0xFF, 0x3F, 0xFF, 0x3F, 0x00, 0x03, 0x80, 0x07, 0xC0, 0x0F, 0xE0, 0x1C, 0x60, 0x38, 0x00, 0x30},                                     // 0x6B k
    {0x6, 0x00, 0x30, 0x03, 0x30, 0xFF, 0x3F, 0xFF, 0x3F, 0x00, 0x30, 0x00, 0x30},                                                             // 0x6C l
    {0xA, 0xE0, 0x3F, 0xC0, 0x3F, 0xE0, 0x00, 0xE0, 0x00, 0xC0, 0x3F, 0xC0, 0x3F, 0xE0, 0x00, 0xE0, 0x00, 0xC0, 0x3F, 0x80, 0x3F},             // 0x6D m
    {0x9, 0xE0, 0x3F, 0xE0, 0x3F, 0x60, 0x00, 0x60, 0x00, 0x60, 0x00, 0x60, 0x00, 0xE0, 0x00, 0xC0, 0x3F, 0x80, 0x3F},                         // 0x6E n
    {0xA, 0x80, 0x0F, 0xC0, 0x1F, 0xE0, 0x38, 0x60, 0x30, 0x60, 0x30, 0x60, 0x30, 0x60, 0x30, 0xE0, 0x38, 0xC0, 0x1F, 0x80, 0x0F},             // 0x6F o
    {0xA, 0xE0, 0xFF, 0xE0, 0xFF, 0x60, 0x0C, 0x60, 0x18, 0x60, 0x18, 0x60, 0x18, 0x60, 0x18, 0xE0, 0x1C, 0xC0, 0x0F, 0x80, 0x07},             // 0x70 p
    {0xA, 0x80, 0x07, 0xC0, 0x0F, 0xE0, 0x1C, 0x60, 0x18, 0x60, 0x18, 0x60, 0x18, 0x60, 0x18, 0x60, 0x0C, 0xE0, 0xFF, 0xE0, 0xFF},             // 0x71 q
    {0x9, 0xE0, 0x3F, 0xE0, 0x3F, 0xC0, 0x00, 0x60, 0x00, 0x60, 0x00, 0x60, 0x00, 0x60, 0x00, 0xE0, 0x00, 0xC0, 0x00},                         // 0x72 r
    {0x8, 0xC0, 0x11, 0xE0, 0x33, 0x60, 0x33, 0x60, 0x33, 0x60, 0x33, 0x60, 0x33, 0x60, 0x3F, 0x40, 0x1E},                                     // 0x73 s
    {0x8, 0x60, 0x00, 0x60, 0x00, 0xFE, 0x1F, 0xFE, 0x3F, 0x60, 0x30, 0x60, 0x30, 0x60, 0x30, 0x00, 0x30},                                     // 0x74 t
    {0xA, 0xE0, 0x0F, 0xE0, 0x1F, 0x00, 0x38, 0x00, 0x30, 0x00, 0x30, 0x00, 0x30, 0x00, 0x30, 0x00, 0x18, 0xE0, 0x3F, 0xE0, 0x3F},             // 0x75 u
    {0xA, 0x60, 0x00, 0xE0, 0x01, 0x80, 0x07, 0x00, 0x1E, 0x00, 0x38, 0x00, 0x38, 0x00, 0x1E, 0x80, 0x07, 0xE0, 0x01, 0x60, 0x00},             // 0x76 v
    {0xA, 0xE0, 0x07, 0xE0, 0x1F, 0x00, 0x38, 0x00, 0x1C, 0xE0, 0x0F, 0xE0, 0x0F, 0x00, 0x1C, 0x00, 0x38, 0xE0, 0x1F, 0xE0, 0x07},             // 0x77 w
    {0x9, 0x60, 0x30, 0xE0, 0x38, 0xC0, 0x1D, 0x80, 0x0F, 0x00, 0x07, 0x80, 0x0F, 0xC0, 0x1D, 0xE0, 0x38, 0x60, 0x30},                         // 0x78 x
    {0x8, 0x60, 0x00, 0xE0, 0x81, 0x80, 0xE7, 0x00, 0x7E, 0x00, 0x1E, 0x80, 0x07, 0xE0, 0x01, 0x60, 0x00},                                     // 0x79 y
    {0x9, 0x60, 0x30, 0x60, 0x38, 0x60, 0x3C, 0x60, 0x36, 0x60, 0x33, 0xE0, 0x31, 0xE0, 0x30, 0x60, 0x30, 0x20, 0x30},                         // 0x7A z
    {0x8, 0x80, 0x00, 0xC0, 0x01, 0xFC, 0x1F, 0x7E, 0x3F, 0x07, 0x70, 0x03, 0x60, 0x03, 0x60, 0x03, 0x60},                                     // 0x7B {
    {0x2, 0xBF, 0x3F, 0xBF, 0x3F},                                                                                                             // 0x7C |
    {0x8, 0x03, 0x60, 0x03, 0x60, 0x03, 0x60, 0x07, 0x70, 0x7E, 0x3F, 0xFC, 0x1F, 0xC0, 0x01, 0x80, 0x00},                                     // 0x7D }
    {0xA, 0x10, 0x00, 0x18, 0x00, 0x0C, 0x00, 0x04, 0x00, 0x0C, 0x00, 0x18, 0x00, 0x10, 0x00, 0x18, 0x00, 0x0C, 0x00, 0x04, 0x00},             // 0x7E ~
#ifdef GLCD_FULL_CHARSET
    {0xA, 0x00, 0x0F, 0x80, 0x0F, 0xC0, 0x0C, 0x60, 0x0C, 0x30, 0x0C, 0x30, 0x0C, 0x60, 0x0C, 0xC0, 0x0C, 0x80, 0x0F, 0x00, 0x0F},             // 0x7F Delete
    {0x0},                                                                                                                                     // 0x80
    {0x0},                                                                                                                                     // 0x81
    {0x0},                                                                                                                                     // 0x82
    {0x0},                                                                                                                                     // 0x83
    {0x0},                                                                                                                                     // 0x84
    {0x0},                                                                                                                                     // 0x85
    {0x0},                                                                                                                                     // 0x86
    {0x0},                                                                                                                                     // 0x87
    {0x0},                                                                                                                                     // 0x88
    {0x0},                                                                                                                                     // 0x89
    {0x0},                                                                                                                                     // 0x8A
    {0x0},                                                                                                                                     // 0x8B
    {0x0},                                                                                                                                     // 0x8C
    {0x0},                                                                                                                                     // 0x8D
    {0x0},                                                                                                                                     // 0x8E
    {0x0},                                                                                                                                     // 0x8F
    {0x0},                                                                                                                                     // 0x90
    {0x0},                                                                                                                                     // 0x91
    {0x0},                                                                                                                                     // 0x92
    {0x0},                                                                                                                                     // 0x93
    {0x0},                                                                                                                                     // 0x94
    {0x0},                                                                                                                                     // 0x95
    {0x0},                                                                                                                                     // 0x96
    {0x0},                                                                                                                                     // 0x97
    {0x0},                                                                                                                                     // 0x98
    {0x0},                                                                                                                                     // 0x99
    {0x0},                                                                                                                                     // 0x9A
    {0x0},                                                                                                                                     // 0x9B
    {0x0},                                                                                                                                     // 0x9C
    {0x0},                                                                                                                                     // 0x9D
    {0x0},                                                                                                                                     // 0x9E
    {0x0},                                                                                                                                     // 0x9F
    {0x0},                                                                                                                                     // 0xA0
    {0x4, 0x80, 0x0F, 0xF3, 0x3F, 0xF3, 0x3F, 0x80, 0x0F},                                                                                     // 0xA1 �
    {0x8, 0xE0, 0x03, 0xF0, 0x07, 0x38, 0x0E, 0xFE, 0x3F, 0xFE, 0x3F, 0x18, 0x0C, 0x38, 0x0E, 0x30, 0x06},                                     // 0xA2 �
    {0x9, 0x00, 0x18, 0x80, 0x1C, 0xF8, 0x1F, 0xFC, 0x0B, 0x8C, 0x18, 0x8C, 0x18, 0x1C, 0x18, 0x18, 0x18, 0x00, 0x08},                         // 0xA3 �
    {0x9, 0x20, 0x01, 0xF0, 0x03, 0xFC, 0x0F, 0x2E, 0x1D, 0x27, 0x39, 0x23, 0x31, 0x23, 0x30, 0x07, 0x38, 0x0E, 0x1C},                         // 0xA4 �
    {0xA, 0x03, 0x00, 0x0F, 0x0A, 0x3C, 0x0A, 0xF0, 0x0A, 0xC0, 0x3F, 0xC0, 0x3F, 0xF0, 0x0A, 0x3C, 0x0A, 0x0F, 0x0A, 0x03, 0x00},             // 0xA5 �
    {0xA, 0x60, 0x0C, 0xF0, 0x1C, 0xF9, 0x39, 0x9B, 0x31, 0x9E, 0x31, 0x9E, 0x31, 0x9B, 0x31, 0xB9, 0x3B, 0x30, 0x1F, 0x20, 0x0E},             // 0xA6 �
    {0x8, 0xDC, 0x08, 0xFE, 0x19, 0x22, 0x11, 0x22, 0x11, 0x22, 0x11, 0x22, 0x11, 0xE6, 0x1F, 0xC4, 0x0E},                                     // 0xA7 �
    {0x8, 0xC0, 0x11, 0xE2, 0x33, 0x66, 0x33, 0x6C, 0x33, 0x6C, 0x33, 0x66, 0x33, 0x62, 0x3F, 0x40, 0x1E},                                     // 0xA8 �
    {0xB, 0xF0, 0x07, 0xF8, 0x0F, 0x1C, 0x1C, 0xCC, 0x19, 0xEC, 0x1B, 0x2C, 0x1A, 0x6C, 0x1B, 0x4C, 0x19, 0x1C, 0x1C, 0xF8, 0x0F, 0xF0, 0x07}, // 0xA9 �
    {0xA, 0x70, 0x00, 0xFA, 0x06, 0xDB, 0x06, 0xDB, 0x06, 0xDB, 0x06, 0xDB, 0x06, 0xDB, 0x06, 0xDB, 0x06, 0xFF, 0x06, 0xFE, 0x00},             // 0xAA �
    {0x9, 0x80, 0x00, 0xC0, 0x01, 0x60, 0x03, 0x20, 0x02, 0x00, 0x00, 0x80, 0x00, 0xC0, 0x01, 0x60, 0x03, 0x20, 0x02},                         // 0xAB �
    {0xA, 0x18, 0x00, 0x18, 0x00, 0x18, 0x00, 0x18, 0x00, 0x18, 0x00, 0x18, 0x00, 0x18, 0x00, 0x18, 0x00, 0xF8, 0x03, 0xF8, 0x03},             // 0xAC �
    {0x6, 0xC0, 0x00, 0xC0, 0x00, 0xC0, 0x00, 0xC0, 0x00, 0xC0, 0x00, 0xC0, 0x00},                                                             // 0xAD �
    {0xB, 0xF0, 0x07, 0xF8, 0x0F, 0x1C, 0x1C, 0xEC, 0x1B, 0xEC, 0x1B, 0xAC, 0x18, 0xEC, 0x1B, 0x4C, 0x1B, 0x1C, 0x1C, 0xF8, 0x0F, 0xF0, 0x07}, // 0xAE �
    {0x4, 0x0C, 0x00, 0x0C, 0x00, 0x0C, 0x00, 0x0C, 0x00},                                                                                     // 0xAF �
    {0x6, 0x1E, 0x00, 0x3F, 0x00, 0x33, 0x00, 0x33, 0x00, 0x3F, 0x00, 0x1E, 0x00},                                                             // 0xB0 �
    {0x6, 0xC0, 0x18, 0xC0, 0x18, 0xF0, 0x1B, 0xF0, 0x1B, 0xC0, 0x18, 0xC0, 0x18},                                                             // 0xB1 �
    {0x5, 0x19, 0x00, 0x1D, 0x00, 0x15, 0x00, 0x17, 0x00, 0x12, 0x00},                                                                         // 0xB2 �
    {0x5, 0x11, 0x00, 0x15, 0x00, 0x15, 0x00, 0x1F, 0x00, 0x0A, 0x00},                                                                         // 0xB3 �
    {0xA, 0x18, 0x30, 0x18, 0x38, 0x19, 0x3C, 0x1B, 0x36, 0x1E, 0x33, 0x9E, 0x31, 0xDB, 0x30, 0x79, 0x30, 0x38, 0x30, 0x18, 0x30},             // 0xB4 �
    {0x9, 0xF0, 0xFF, 0xF0, 0xFF, 0x00, 0x0E, 0x00, 0x0C, 0x00, 0x0C, 0x00, 0x0C, 0x00, 0x06, 0xF0, 0x0F, 0xF0, 0x0F},                         // 0xB5 �
    {0xA, 0x38, 0x00, 0x7C, 0x00, 0xC6, 0x00, 0x82, 0x00, 0xFE, 0x3F, 0xFE, 0x3F, 0x02, 0x00, 0xFE, 0x3F, 0xFE, 0x3F, 0x02, 0x00},             // 0xB6 �
    {0x3, 0x80, 0x01, 0xC0, 0x03, 0x80, 0x01},                                                                                                 // 0xB7 �
    {0x9, 0x60, 0x30, 0x62, 0x38, 0x66, 0x3C, 0x6C, 0x36, 0x6C, 0x33, 0xE6, 0x31, 0xE2, 0x30, 0x60, 0x30, 0x20, 0x30},                         // 0xB8 �
    {0x3, 0x02, 0x00, 0x1F, 0x00, 0x1F, 0x00},                                                                                                 // 0xB9 �
    {0xA, 0x3C, 0x00, 0x7E, 0x06, 0xE7, 0x06, 0xC3, 0x06, 0xC3, 0x06, 0xC3, 0x06, 0xC3, 0x06, 0xE7, 0x06, 0x7E, 0x06, 0x3C, 0x00},             // 0xBA �
    {0x9, 0x20, 0x02, 0x60, 0x03, 0xC0, 0x01, 0x80, 0x00, 0x00, 0x00, 0x20, 0x02, 0x60, 0x03, 0xC0, 0x01, 0x80, 0x00},                         // 0xBB �
    {0xA, 0xF0, 0x03, 0xFC, 0x0F, 0x0E, 0x1C, 0x07, 0x38, 0x03, 0x30, 0xFF, 0x3F, 0xFF, 0x3F, 0xC3, 0x30, 0xC3, 0x30, 0xC3, 0x30},             // 0xBC �
    {0xA, 0x80, 0x0F, 0xC0, 0x1F, 0xE0, 0x38, 0x60, 0x30, 0xC0, 0x1F, 0xE0, 0x3B, 0x60, 0x33, 0x60, 0x33, 0xC0, 0x13, 0x80, 0x01},             // 0xBD �
    {0xA, 0x08, 0x00, 0x18, 0x00, 0x33, 0x00, 0x63, 0x00, 0xC0, 0x3F, 0xC0, 0x3F, 0x63, 0x00, 0x33, 0x00, 0x18, 0x00, 0x08, 0x00},             // 0xBE �
    {0xA, 0x00, 0x0E, 0x00, 0x1F, 0x80, 0x3B, 0xC0, 0x31, 0xFB, 0x30, 0x7B, 0x30, 0x00, 0x30, 0x00, 0x38, 0x00, 0x1E, 0x00, 0x0E},             // 0xBF �
    {0xA, 0x00, 0x38, 0x00, 0x3E, 0x80, 0x0F, 0xE1, 0x0D, 0x7B, 0x0C, 0x7E, 0x0C, 0xE4, 0x0D, 0x80, 0x0F, 0x00, 0x3E, 0x00, 0x38},             // 0xC0 �
    {0xA, 0x00, 0x38, 0x00, 0x3E, 0x80, 0x0F, 0xE4, 0x0D, 0x7E, 0x0C, 0x7B, 0x0C, 0xE1, 0x0D, 0x80, 0x0F, 0x00, 0x3E, 0x00, 0x38},             // 0xC1 �
    {0xA, 0x00, 0x38, 0x00, 0x3E, 0x84, 0x0F, 0xE6, 0x0D, 0x7B, 0x0C, 0x7B, 0x0C, 0xE6, 0x0D, 0x84, 0x0F, 0x00, 0x3E, 0x00, 0x38},             // 0xC2 �
    {0xA, 0x00, 0x38, 0x00, 0x3E, 0x82, 0x0F, 0xE3, 0x0D, 0x79, 0x0C, 0x7B, 0x0C, 0xE2, 0x0D, 0x83, 0x0F, 0x01, 0x3E, 0x00, 0x38},             // 0xC3 �
    {0xA, 0x00, 0x38, 0x00, 0x3E, 0x83, 0x0F, 0xE3, 0x0D, 0x78, 0x0C, 0x78, 0x0C, 0xE3, 0x0D, 0x83, 0x0F, 0x00, 0x3E, 0x00, 0x38},             // 0xC4 �
    {0xA, 0x00, 0x38, 0x00, 0x3E, 0x80, 0x0F, 0xE2, 0x0D, 0x75, 0x0C, 0x75, 0x0C, 0xE2, 0x0D, 0x80, 0x0F, 0x00, 0x3E, 0x00, 0x38},             // 0xC5 �
    {0xA, 0x00, 0x3C, 0x80, 0x3F, 0xF0, 0x07, 0x7C, 0x06, 0x1F, 0x06, 0xFF, 0x3F, 0xFF, 0x3F, 0xC3, 0x30, 0xC3, 0x30, 0x03, 0x30},             // 0xC6 �
    {0xA, 0xF0, 0x01, 0xFC, 0x07, 0x0E, 0xCE, 0x07, 0xDC, 0x03, 0xF8, 0x03, 0xF8, 0x03, 0x18, 0x07, 0x1C, 0x1E, 0x0E, 0x1C, 0x06},             // 0xC7 �
    {0xA, 0xF8, 0x3F, 0xF8, 0x3F, 0x99, 0x31, 0x9B, 0x31, 0x9E, 0x31, 0x9C, 0x31, 0x98, 0x31, 0x98, 0x31, 0x18, 0x30, 0x18, 0x30},             // 0xC8 �
    {0xA, 0xF8, 0x3F, 0xF8, 0x3F, 0x98, 0x31, 0x98, 0x31, 0x9C, 0x31, 0x9E, 0x31, 0x9B, 0x31, 0x99, 0x31, 0x18, 0x30, 0x18, 0x30},             // 0xC9 �
    {0xA, 0xF8, 0x3F, 0xF8, 0x3F, 0x9C, 0x31, 0x9E, 0x31, 0x9B, 0x31, 0x9B, 0x31, 0x9E, 0x31, 0x9C, 0x31, 0x18, 0x30, 0x18, 0x30},             // 0xCA �
    {0xA, 0xF8, 0x3F, 0xF8, 0x3F, 0x9B, 0x31, 0x9B, 0x31, 0x98, 0x31, 0x98, 0x31, 0x9B, 0x31, 0x9B, 0x31, 0x18, 0x30, 0x18, 0x30},             // 0xCB �
    {0x6, 0x19, 0x30, 0x1B, 0x30, 0xFE, 0x3F, 0xFC, 0x3F, 0x18, 0x30, 0x18, 0x30},                                                             // 0xCC �
    {0x6, 0x18, 0x30, 0x18, 0x30, 0xFC, 0x3F, 0xFE, 0x3F, 0x1B, 0x30, 0x19, 0x30},                                                             // 0xCD �
    {0x6, 0x1C, 0x30, 0x1E, 0x30, 0xFB, 0x3F, 0xFB, 0x3F, 0x1E, 0x30, 0x1C, 0x30},                                                             // 0xCE �
    {0x6, 0x1B, 0x30, 0x1B, 0x30, 0xF8, 0x3F, 0xF8, 0x3F, 0x1B, 0x30, 0x1B, 0x30},                                                             // 0xCF �
    {0xA, 0xC0, 0x00, 0xFF, 0x3F, 0xFF, 0x3F, 0xC3, 0x30, 0x03, 0x30, 0x03, 0x30, 0x07, 0x38, 0x0E, 0x1C, 0xFC, 0x0F, 0xF0, 0x03},             // 0xD0 �
    {0xA, 0xF8, 0x3F, 0xF8, 0x3F, 0x72, 0x00, 0xE3, 0x00, 0xC1, 0x01, 0x83, 0x03, 0x02, 0x07, 0x03, 0x0E, 0xF9, 0x3F, 0xF8, 0x3F},             // 0xD1 �
    {0xA, 0xE0, 0x0F, 0xF0, 0x1F, 0x39, 0x38, 0x1B, 0x30, 0x1E, 0x30, 0x1C, 0x30, 0x18, 0x30, 0x38, 0x38, 0xF0, 0x1F, 0xE0, 0x0F},             // 0xD2 �
    {0xA, 0xE0, 0x0F, 0xF0, 0x1F, 0x38, 0x38, 0x18, 0x30, 0x1C, 0x30, 0x1E, 0x30, 0x1B, 0x30, 0x39, 0x38, 0xF0, 0x1F, 0xE0, 0x0F},             // 0xD3 �
    {0xA, 0xE0, 0x0F, 0xF0, 0x1F, 0x3C, 0x38, 0x1E, 0x30, 0x1B, 0x30, 0x1B, 0x30, 0x1E, 0x30, 0x3C, 0x38, 0xF0, 0x1F, 0xE0, 0x0F},             // 0xD4 �
    {0xA, 0xE0, 0x0F, 0xF0, 0x1F, 0x3A, 0x38, 0x1B, 0x30, 0x19, 0x30, 0x1B, 0x30, 0x1A, 0x30, 0x3B, 0x38, 0xF1, 0x1F, 0xE0, 0x0F},             // 0xD5 �
    {0xA, 0xE0, 0x0F, 0xF0, 0x1F, 0x3B, 0x38, 0x1B, 0x30, 0x18, 0x30, 0x18, 0x30, 0x1B, 0x30, 0x3B, 0x38, 0xF0, 0x1F, 0xE0, 0x0F},             // 0xD6 �
    {0x8, 0x10, 0x04, 0x30, 0x06, 0x60, 0x03, 0xC0, 0x01, 0xC0, 0x01, 0x60, 0x03, 0x30, 0x06, 0x10, 0x04},                                     // 0xD7 �
    {0xA, 0xF0, 0x2F, 0xF8, 0x3F, 0x1C, 0x18, 0x0C, 0x3E, 0x8C, 0x37, 0xEC, 0x31, 0x7C, 0x30, 0x18, 0x38, 0xFC, 0x1F, 0xF4, 0x0F},             // 0xD8 �
    {0xA, 0xF8, 0x07, 0xF8, 0x1F, 0x01, 0x38, 0x03, 0x30, 0x06, 0x30, 0x04, 0x30, 0x00, 0x30, 0x00, 0x38, 0xF8, 0x1F, 0xF8, 0x07},             // 0xD9 �
    {0xA, 0xF8, 0x07, 0xF8, 0x1F, 0x00, 0x38, 0x00, 0x30, 0x04, 0x30, 0x06, 0x30, 0x03, 0x30, 0x01, 0x38, 0xF8, 0x1F, 0xF8, 0x07},             // 0xDA �
    {0xA, 0xF8, 0x07, 0xF8, 0x1F, 0x04, 0x38, 0x06, 0x30, 0x03, 0x30, 0x03, 0x30, 0x06, 0x30, 0x04, 0x38, 0xF8, 0x1F, 0xF8, 0x07},             // 0xDB �
    {0xA, 0xE0, 0x0F, 0xE0, 0x1F, 0x0C, 0x38, 0x0C, 0x30, 0x00, 0x30, 0x00, 0x30, 0x0C, 0x30, 0x0C, 0x18, 0xE0, 0x3F, 0xE0, 0x3F},             // 0xDC �
    {0xA, 0x08, 0x00, 0x18, 0x00, 0x30, 0x00, 0x60, 0x00, 0xC4, 0x3F, 0xC6, 0x3F, 0x63, 0x00, 0x31, 0x00, 0x18, 0x00, 0x08, 0x00},             // 0xDD �
    {0x8, 0x03, 0x30, 0xFF, 0x3F, 0xFF, 0x3F, 0x1B, 0x36, 0x18, 0x06, 0x18, 0x06, 0xF8, 0x07, 0xF0, 0x03},                                     // 0xDE �
    {0x8, 0xC0, 0xFF, 0xE0, 0xFF, 0x30, 0x21, 0x10, 0x21, 0x10, 0x21, 0x30, 0x33, 0xE0, 0x3F, 0xC0, 0x1E},                                     // 0xDF �
    {0xA, 0x00, 0x1C, 0x40, 0x3E, 0x60, 0x33, 0x62, 0x33, 0x66, 0x33, 0x6C, 0x33, 0x68, 0x33, 0x60, 0x33, 0xE0, 0x3F, 0xC0, 0x3F},             // 0xE0 �
    {0xA, 0x00, 0x1C, 0x40, 0x3E, 0x60, 0x33, 0x68, 0x33, 0x6C, 0x33, 0x66, 0x33, 0x62, 0x33, 0x60, 0x33, 0xE0, 0x3F, 0xC0, 0x3F},             // 0xE1 �
    {0xA, 0x00, 0x1C, 0x40, 0x3E, 0x68, 0x33, 0x6C, 0x33, 0x66, 0x33, 0x66, 0x33, 0x6C, 0x33, 0x68, 0x33, 0xE0, 0x3F, 0xC0, 0x3F},             // 0xE2 �
    {0xA, 0x00, 0x1C, 0x40, 0x3E, 0x68, 0x33, 0x6C, 0x33, 0x64, 0x33, 0x6C, 0x33, 0x68, 0x33, 0x6C, 0x33, 0xE4, 0x3F, 0xC0, 0x3F},             // 0xE3 �
    {0xA, 0x00, 0x1C, 0x40, 0x3E, 0x6C, 0x33, 0x6C, 0x33, 0x60, 0x33, 0x60, 0x33, 0x6C, 0x33, 0x6C, 0x33, 0xE0, 0x3F, 0xC0, 0x3F},             // 0xE4 �
    {0xA, 0x00, 0x1C, 0x40, 0x3E, 0x60, 0x33, 0x64, 0x33, 0x6A, 0x33, 0x6A, 0x33, 0x64, 0x33, 0x60, 0x33, 0xE0, 0x3F, 0xC0, 0x3F},             // 0xE5 �
    {0xA, 0x80, 0x1C, 0xC0, 0x3E, 0x40, 0x22, 0x40, 0x22, 0xC0, 0x1F, 0x80, 0x3F, 0x40, 0x22, 0x40, 0x22, 0xC0, 0x33, 0x80, 0x11},             // 0xE6 �
    {0xA, 0x80, 0x0F, 0xC0, 0x1F, 0xE0, 0xB8, 0x60, 0xB0, 0x60, 0xF0, 0x60, 0xF0, 0x60, 0x30, 0xE0, 0x38, 0xC0, 0x18, 0x80, 0x08},             // 0xE7 �
    {0xA, 0x80, 0x0F, 0xC0, 0x1F, 0xE0, 0x33, 0x62, 0x33, 0x66, 0x33, 0x6C, 0x33, 0x68, 0x33, 0x60, 0x33, 0xC0, 0x13, 0x80, 0x03},             // 0xE8 �
    {0xA, 0x80, 0x0F, 0xC0, 0x1F, 0xE0, 0x3B, 0x60, 0x33, 0x68, 0x33, 0x6C, 0x33, 0x66, 0x33, 0x62, 0x33, 0xC0, 0x13, 0x80, 0x03},             // 0xE9 �
    {0xA, 0x80, 0x0F, 0xC0, 0x1F, 0xE8, 0x33, 0x6C, 0x33, 0x66, 0x33, 0x66, 0x33, 0x6C, 0x33, 0x68, 0x33, 0xC0, 0x13, 0x80, 0x03},             // 0xEA �
    {0xA, 0x80, 0x0F, 0xC0, 0x1F, 0xEC, 0x33, 0x6C, 0x33, 0x60, 0x33, 0x60, 0x33, 0x6C, 0x33, 0x6C, 0x33, 0xC0, 0x13, 0x80, 0x03},             // 0xEB �
    {0x6, 0x00, 0x30, 0x62, 0x30, 0xE6, 0x3F, 0xEC, 0x3F, 0x08, 0x30, 0x00, 0x30},                                                             // 0xEC �
    {0x6, 0x00, 0x30, 0x68, 0x30, 0xEC, 0x3F, 0xE6, 0x3F, 0x02, 0x30, 0x00, 0x30},                                                             // 0xED �
    {0x6, 0x08, 0x30, 0x6C, 0x30, 0xE6, 0x3F, 0xE6, 0x3F, 0x0C, 0x30, 0x08, 0x30},                                                             // 0xEE �
    {0x6, 0x0C, 0x30, 0x6C, 0x30, 0xE0, 0x3F, 0xEC, 0x3F, 0x0C, 0x30, 0x00, 0x30},                                                             // 0xEF �
    {0x6, 0x78, 0x1C, 0xFC, 0x3E, 0xCC, 0x33, 0x8C, 0x33, 0x0C, 0x3F, 0x18, 0x1E},                                                             // 0xF0 �
    {0x9, 0xE0, 0x3F, 0xE8, 0x3F, 0x6C, 0x00, 0x64, 0x00, 0x6C, 0x00, 0x68, 0x00, 0xEC, 0x00, 0xC4, 0x3F, 0x80, 0x3F},                         // 0xF1 �
    {0xA, 0x80, 0x0F, 0xC0, 0x1F, 0xE0, 0x38, 0x62, 0x30, 0x66, 0x30, 0x6C, 0x30, 0x68, 0x30, 0xE0, 0x38, 0xC0, 0x1F, 0x80, 0x0F},             // 0xF2 �
    {0xA, 0x80, 0x0F, 0xC0, 0x1F, 0xE0, 0x38, 0x68, 0x30, 0x6C, 0x30, 0x66, 0x30, 0x62, 0x30, 0xE0, 0x38, 0xC0, 0x1F, 0x80, 0x0F},             // 0xF3 �
    {0xA, 0x80, 0x0F, 0xC0, 0x1F, 0xE8, 0x38, 0x6C, 0x30, 0x66, 0x30, 0x66, 0x30, 0x6C, 0x30, 0xE8, 0x38, 0xC0, 0x1F, 0x80, 0x0F},             // 0xF4 �
    {0xA, 0x80, 0x0F, 0xC8, 0x1F, 0xEC, 0x38, 0x64, 0x30, 0x6C, 0x30, 0x68, 0x30, 0x6C, 0x30, 0xE4, 0x38, 0xC0, 0x1F, 0x80, 0x0F},             // 0xF5 �
    {0xA, 0x80, 0x0F, 0xC0, 0x1F, 0xEC, 0x38, 0x6C, 0x30, 0x60, 0x30, 0x60, 0x30, 0x6C, 0x30, 0xEC, 0x38, 0xC0, 0x1F, 0x80, 0x0F},             // 0xF6 �
    {0x8, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01, 0xB0, 0x0D, 0xB0, 0x0D, 0x80, 0x01, 0x80, 0x01, 0x80, 0x01},                                     // 0xF7 �
    {0xA, 0x80, 0x2F, 0xC0, 0x3F, 0xE0, 0x18, 0x60, 0x3C, 0x60, 0x36, 0x60, 0x33, 0xE0, 0x31, 0xC0, 0x38, 0xE0, 0x1F, 0xA0, 0x0F},             // 0xF8 �
    {0xA, 0xE0, 0x0F, 0xE0, 0x1F, 0x00, 0x38, 0x02, 0x30, 0x06, 0x30, 0x0C, 0x30, 0x08, 0x30, 0x00, 0x18, 0xE0, 0x3F, 0xE0, 0x3F},             // 0xF9 �
    {0xA, 0xE0, 0x0F, 0xE0, 0x1F, 0x00, 0x38, 0x08, 0x30, 0x0C, 0x30, 0x06, 0x30, 0x02, 0x30, 0x00, 0x18, 0xE0, 0x3F, 0xE0, 0x3F},             // 0xFA �
    {0xA, 0xE0, 0x0F, 0xE0, 0x1F, 0x08, 0x38, 0x0C, 0x30, 0x06, 0x30, 0x06, 0x30, 0x0C, 0x30, 0x08, 0x18, 0xE0, 0x3F, 0xE0, 0x3F},             // 0xFB �
    {0xA, 0xE0, 0x0F, 0xE0, 0x1F, 0x0C, 0x38, 0x0C, 0x30, 0x00, 0x30, 0x00, 0x30, 0x0C, 0x30, 0x0C, 0x18, 0xE0, 0x3F, 0xE0, 0x3F},             // 0xFC �
    {0x8, 0x60, 0x00, 0xE0, 0x81, 0x80, 0xE7, 0x10, 0x7E, 0x18, 0x1E, 0x8C, 0x07, 0xE4, 0x01, 0x60, 0x00},                                     // 0xFD �
    {0x8, 0x0C, 0x30, 0xFC, 0x3F, 0xFC, 0x3F, 0x6C, 0x36, 0x60, 0x06, 0x60, 0x06, 0xE0, 0x07, 0xC0, 0x03},                                     // 0xFE �
    {0x8, 0x60, 0x00, 0xEC, 0x81, 0x8C, 0xE7, 0x00, 0x7E, 0x00, 0x1E, 0x8C, 0x07, 0xEC, 0x01, 0x60, 0x00},                                     // 0xFF �
#endif
};

#endif
