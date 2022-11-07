//画三角形
void testDrawTriangle()
{
  int t = 1000;
  int x0 = 0;
  int y0 = 16;
  int x1 = x0+50;
  int y1 = y0+5;
  int x2 = x0+30;
  int y2 = y0+25;
  int offsetx = 64;
  int offsety = 10;
  u8g2.clearBuffer();
  u8g2.drawStr(0, 14, "drawTriangle");

  u8g2.drawTriangle(x0, y0, x1, y1, x2, y2);
  SEND_BUFFER_DISPLAY_MS(t);
  u8g2.drawTriangle(x0+offsetx, y0+offsety, x1+offsetx, y1+offsety, x2+offsetx, y2+offsety);
  SEND_BUFFER_DISPLAY_MS(t);
}

void testDrawTriangleFun()
{
  testDrawTriangle();
}
