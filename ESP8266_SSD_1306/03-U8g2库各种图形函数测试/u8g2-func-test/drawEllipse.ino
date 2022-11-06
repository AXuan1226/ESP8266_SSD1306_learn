//画空心椭圆
void testDrawEllipse()
{
  int t = 500;
  int with = 16;//一个图块的间隔
  int rx = 27;  //椭圆x方向的半径
  int ry = 22;  //椭圆y方向的半径
  u8g2.clearBuffer();
  u8g2.drawStr(0, 14, "drawEllipse");

  SEND_BUFFER_DISPLAY_MS(t);
  u8g2.drawEllipse(0, with, rx, ry, U8G2_DRAW_LOWER_RIGHT);//右下
  SEND_BUFFER_DISPLAY_MS(t);
  u8g2.drawEllipse(with * 4 - 1, with, rx, ry, U8G2_DRAW_LOWER_LEFT); //左下
  SEND_BUFFER_DISPLAY_MS(t);
  u8g2.drawEllipse(0, with * 4 - 1, rx, ry, U8G2_DRAW_UPPER_RIGHT); //右上
  SEND_BUFFER_DISPLAY_MS(t);
  u8g2.drawEllipse(with * 4 - 1, with * 4 - 1, rx, ry, U8G2_DRAW_UPPER_LEFT); //左上
  SEND_BUFFER_DISPLAY_MS(t);
  u8g2.drawEllipse(with * 6, with * 2.5, rx, ry, U8G2_DRAW_ALL);//整个椭圆
  SEND_BUFFER_DISPLAY_MS(t);
}

//画实心椭圆
void testDrawFilledEllipse()
{
  int t = 500;
  int with = 16;//一个图块的间隔
  int rx = 27;  //椭圆x方向的半径
  int ry = 22;  //椭圆y方向的半径
  u8g2.clearBuffer();
  u8g2.drawStr(0, 14, "drawFilledEllipse");

  SEND_BUFFER_DISPLAY_MS(t);
  u8g2.drawFilledEllipse(0, with, rx, ry, U8G2_DRAW_LOWER_RIGHT);//右下
  SEND_BUFFER_DISPLAY_MS(t);
  u8g2.drawFilledEllipse(with * 4 - 1, with, rx, ry, U8G2_DRAW_LOWER_LEFT); //左下
  SEND_BUFFER_DISPLAY_MS(t);
  u8g2.drawFilledEllipse(0, with * 4 - 1, rx, ry, U8G2_DRAW_UPPER_RIGHT); //右上
  SEND_BUFFER_DISPLAY_MS(t);
  u8g2.drawFilledEllipse(with * 4 - 1, with * 4 - 1, rx, ry, U8G2_DRAW_UPPER_LEFT); //左上
  SEND_BUFFER_DISPLAY_MS(t);
  u8g2.drawFilledEllipse(with * 6, with * 2.5, rx, ry, U8G2_DRAW_ALL);//整个椭圆
  SEND_BUFFER_DISPLAY_MS(t);
}

void testDrawEllipseFun()
{
  testDrawEllipse();
  testDrawFilledEllipse();
}
