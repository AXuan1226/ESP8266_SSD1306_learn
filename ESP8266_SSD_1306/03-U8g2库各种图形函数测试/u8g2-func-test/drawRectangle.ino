
//画空心矩形
void testDrawFrame()
{
  int t = 500;
  int x = 16;
  int y = 32;
  int w = 50;
  int h = 20;
  u8g2.clearBuffer();
  u8g2.drawStr(0, 15, "drawFrame");

  u8g2.drawFrame(x, y, w, h);
  SEND_BUFFER_DISPLAY_MS(t);
  u8g2.drawFrame(x+w+5, y-10, w-20, h+20);
  SEND_BUFFER_DISPLAY_MS(t);
}

//画实心矩形
void testDrawBox()
{
  int t = 500;
  int x = 16;
  int y = 32;
  int w = 50;
  int h = 20;
  u8g2.clearBuffer();
  u8g2.drawStr(0, 15, "drawBox");

  u8g2.drawBox(x, y, w, h);
  SEND_BUFFER_DISPLAY_MS(t);
  u8g2.drawBox(x+w+5, y-10, w-20, h+20);
  SEND_BUFFER_DISPLAY_MS(t);
}

//画空心圆角矩形
void testDrawRFrame()
{
  int t = 500;
  int x = 16;
  int y = 32;
  int w = 50;
  int h = 20;
  int r = 3;
  u8g2.clearBuffer();
  u8g2.drawStr(0, 15, "drawRFrame");

  u8g2.drawRFrame(x, y, w, h, r);
  SEND_BUFFER_DISPLAY_MS(t);
  u8g2.drawRFrame(x+w+5, y-10, w-20, h+20, r);
  SEND_BUFFER_DISPLAY_MS(t);
}

//画实心圆角矩形
void testDrawRBox()
{
  int t = 500;
  int x = 16;
  int y = 32;
  int w = 50;
  int h = 20;
  int r = 3;
  u8g2.clearBuffer();
  u8g2.drawStr(0, 15, "drawRBox");

  u8g2.drawRBox(x, y, w, h, r);
  SEND_BUFFER_DISPLAY_MS(t);
  u8g2.drawRBox(x+w+5, y-10, w-20, h+20, r);
  SEND_BUFFER_DISPLAY_MS(t);
}

//画矩形
void testDrawRectangleFun()
{
  testDrawFrame();
  testDrawBox();
  testDrawRFrame();
  testDrawRBox();
}
