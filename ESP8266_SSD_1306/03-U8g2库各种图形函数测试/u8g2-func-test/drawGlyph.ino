void testGlyph()
{
  int t = 1000;
  u8g2.clearBuffer();
  u8g2.drawStr(0, 14, "drawGlyph");

  u8g2.drawGlyph(0, 32, 0x23f0);
  SEND_BUFFER_DISPLAY_MS(t);

  u8g2.drawGlyph(16, 32, 0x23f3);
  SEND_BUFFER_DISPLAY_MS(t);

  u8g2.drawGlyph(32, 32, 0x2603);
  SEND_BUFFER_DISPLAY_MS(t);

  u8g2.drawGlyph(48, 32, 0x2615);
  SEND_BUFFER_DISPLAY_MS(t);

  u8g2.drawGlyph(64, 32, 0x2618);
  SEND_BUFFER_DISPLAY_MS(t);
}

void testGlyphFun()
{
  testGlyph();
  }
