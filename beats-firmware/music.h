// extern const ILI9341_t3_font_t Arial_18;

static const unsigned char Arial_18_data[] = {
0x17,0xcf,0xe0,0x07,0x03,0xf0,0x7d,0x06,0x1a,0x08,
0x20,0x9e,0x0b,0xe7,0xbe,0xfb,0xd1,0xe0,0x00,0x13,
0xe6,0x98,0x02,0x08,0xa2,0x30,0xf8,0x62,0x28,0x82,
0x20,0x8a,0x23,0x0f,0x86,0x22,0x89,0x04,0x00,
};
/* font data size: 39 bytes */

static const unsigned char Arial_18_index[] = {
0x01,0x30,
};
/* font index size: 2 bytes */

static const unsigned char Arial_18_codepoints[] = {
0x01,0x33,0x58,0x09,0x9b,0xc0,
};
/* Unicode codepoint table size: 6 bytes */

const ILI9341_t3_font_t Marial_18 = {
    Arial_18_index,
    Arial_18_codepoints,
    Arial_18_data,
    1,
    0,
    0,
    2,
    0,
    0,
    6,
    4,
    4,
    2,
    3,
    4,
    21,
    13
};
