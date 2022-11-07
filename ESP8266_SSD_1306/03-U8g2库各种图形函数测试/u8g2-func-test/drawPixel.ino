
//画像素点-填充屏幕
void testDrawPixelToFillScreen()
{
  int t = 1000;
  u8g2.clearBuffer();

  for (int j = 0; j < 64; j++)
  {
    for (int i = 0; i < 128; i++)
    {
      u8g2.drawPixel(i, j);
    }
  }
  SEND_BUFFER_DISPLAY_MS(t);
}

//画像素点
void testDrawPixel()
{
  int t = 500;
  u8g2.clearBuffer();
  u8g2.drawStr(0, 14, "drawPixel");

  for (int j = 16; j < 64; j+=8)
  {
    for (int i = 0; i < 128; i+=8)
    {
      u8g2.drawPixel(i, j);
    }
    SEND_BUFFER_DISPLAY_MS(t);
  }
}

void testDrawPixelFun()
{
  testDrawPixelToFillScreen();
  testDrawPixel();
}
