
//画直线
void testDrawLine()
{
  int t = 500;
  u8g2.clearBuffer();
  u8g2.drawStr(33, 14, "drawLine");

  u8g2.drawLine(0, 0, 127, 63);
  SEND_BUFFER_DISPLAY_MS(t);
  u8g2.drawLine(0, 0, 127, 0);
  SEND_BUFFER_DISPLAY_MS(t);
  u8g2.drawLine(32, 15, 127, 15);
  SEND_BUFFER_DISPLAY_MS(t);
  u8g2.drawLine(33, 16, 127, 16);
  SEND_BUFFER_DISPLAY_MS(t);
  u8g2.drawLine(127, 0, 127, 15);
  SEND_BUFFER_DISPLAY_MS(t);
  u8g2.drawLine(127, 16, 127, 63);
  SEND_BUFFER_DISPLAY_MS(t);
}

//画水平直线
void testDrawHLine()
{
  int t = 1000;
  int x = 5;
  int y = 16;
  int w = 40;
  u8g2.clearBuffer();
  u8g2.drawStr(0, 14, "drawHLine");

  u8g2.drawHLine(x, y, w);
  SEND_BUFFER_DISPLAY_MS(t);
  u8g2.drawHLine(x, y * 2, w * 2);
  SEND_BUFFER_DISPLAY_MS(t);
  u8g2.drawHLine(x, y * 3, w * 3);
  SEND_BUFFER_DISPLAY_MS(t);
}

//画竖直直线
void testDrawVLine()
{
  int t = 1000;
  int x = 5;
  int y = 16;
  int h = 15;
  u8g2.clearBuffer();
  u8g2.drawStr(0, 14, "drawVLine");

  u8g2.drawVLine(x, y, h);
  SEND_BUFFER_DISPLAY_MS(t);
  u8g2.drawVLine(x + x * 3, y, h * 2);
  SEND_BUFFER_DISPLAY_MS(t);
  u8g2.drawVLine(x + x * 6, y, h * 3);
  SEND_BUFFER_DISPLAY_MS(t);
}

void testDrawLineFun()
{
  testDrawLine();
  testDrawHLine();
  testDrawVLine();
}
