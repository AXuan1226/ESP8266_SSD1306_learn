void drawBattery(int x, int y)
{
  u8g2.drawBox(x, y + 8, 2, 14);//电池头
  u8g2.drawFrame(x + 3, y, 57, 30);//电池主体大矩形
  u8g2.drawFrame(x + 4, y + 1, 55, 28);//电池主体大矩形
  u8g2.drawLine(x + 2, y + 1, x + 2, y + 28);//左边竖线
  u8g2.drawLine(x + 60, y + 1, x + 60, y + 28);//右边竖线
}

void drawBatterycharging(int x, int y)
{
  int x1 = x + 21;
  int y1 = y + 5;
  u8g2.drawTriangle(x1, y1 + 4, x1 + 14, y1 + 18, x1 + 15, y1 + 9);
  u8g2.drawTriangle(x1 + 10, y1, x1 + 26, y1 + 15, x1 + 11, y1 + 9);
}

void drawBatteryFull(int x, int y)
{
  u8g2.drawBox(x + 7, y + 4, 46, 22);
}
void drawBatteryChargeN(int x, int y, int n)
{
  //一格电量宽7,间隔3, 满电量为5格
  for (int i = 0; i < n; i++)
  {
    u8g2.drawBox(x + 48 - (10 * i), y + 4, 7, 22);
  }
}

void testDrawBattery()
{
  int t = 1000;
  int x = 30;
  int y = 20;

  u8g2.clearBuffer();
  drawBattery(x, y);
  drawBatterycharging(x, y);
  SEND_BUFFER_DISPLAY_MS(t);

  t = 500;
  u8g2.clearBuffer();
  drawBattery(x, y);
  for (int n = 1; n <= 5; n++)
  {
    drawBatteryChargeN(x, y, n);
    SEND_BUFFER_DISPLAY_MS(t);
  }
}
