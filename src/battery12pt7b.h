const uint8_t battery12pt7bBitmaps[] PROGMEM = {
  0x0E, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0C, 0x3F, 0xF8, 0x06,
  0x01, 0x80, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0x0E, 0x1F, 0xFE, 0x00, 0xC0, 0x18, 0x03, 0x00,
  0x60, 0x0C, 0x01, 0x80, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0x0C, 0x3F, 0xF8, 0x06, 0x01, 0x80, 0x60, 0x18, 0x06, 0x01,
  0x80, 0x60, 0x18, 0x06, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0E, 0x1F,
  0xFE, 0x00, 0xC0, 0x18, 0x03, 0x00, 0x60, 0x0C, 0x01, 0x80, 0x30, 0x06,
  0x00, 0xC0, 0x18, 0x03, 0x00, 0x60, 0x0F, 0xFF };

const GFXglyph battery12pt7bGlyphs[] PROGMEM = {
  {     0,  10,  16,  12,    1,  -15 },   // 0x41 'A'
  {    20,  10,  16,  11,    1,  -15 },   // 0x42 'B'
  {    40,  11,  16,  11,    0,  -15 },   // 0x43 'C'
  {    62,  10,  16,  11,    1,  -15 },   // 0x44 'D'
  {    82,  11,  16,  11,    0,  -15 } }; // 0x45 'E'

const GFXfont battery12pt7b PROGMEM = {
  (uint8_t  *)battery12pt7bBitmaps,
  (GFXglyph *)battery12pt7bGlyphs,
  0x41, 0x45, 24 };

// Approx. 146 bytes
