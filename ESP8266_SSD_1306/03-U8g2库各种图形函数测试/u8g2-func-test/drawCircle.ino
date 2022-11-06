//画空心圆
void testDrawCircle()
{
  int t = 500;
  int stx = 0;  //画图起始x
  int sty = 16; //画图起始y
  int with = 16;//一个图块的间隔
  int r = 15;   //圆的半径
  u8g2.clearBuffer();
  u8g2.drawStr(0, 15, "drawCircle");

  u8g2.drawCircle(stx, sty - 1 + with, r, U8G2_DRAW_UPPER_RIGHT); //右上
  SEND_BUFFER_DISPLAY_MS(t);
  u8g2.drawCircle(stx + with, sty, r, U8G2_DRAW_LOWER_RIGHT); //右下
  SEND_BUFFER_DISPLAY_MS(t);
  u8g2.drawCircle(stx - 1 + with * 3, sty - 1 + with, r, U8G2_DRAW_UPPER_LEFT); //左上
  SEND_BUFFER_DISPLAY_MS(t);
  u8g2.drawCircle(stx - 1 + with * 4, sty, r, U8G2_DRAW_LOWER_LEFT); //左下
  SEND_BUFFER_DISPLAY_MS(t);
  u8g2.drawCircle(stx - 1 + with * 2, sty - 1 + with * 2, r, U8G2_DRAW_ALL);//整个圆
  SEND_BUFFER_DISPLAY_MS(t);
}

//画实心圆
void testDrawDisc()
{
  int t = 500;
  int stx = 0;  //画图起始x
  int sty = 16; //画图起始y
  int with = 16;//一个图块的间隔
  int r = 15;   //圆的半径
  u8g2.clearBuffer();
  u8g2.drawStr(0, 15, "drawDisc");

  u8g2.drawDisc(stx, sty - 1 + with, r, U8G2_DRAW_UPPER_RIGHT); //右上
  SEND_BUFFER_DISPLAY_MS(t);
  u8g2.drawDisc(stx + with, sty, r, U8G2_DRAW_LOWER_RIGHT); //右下
  SEND_BUFFER_DISPLAY_MS(t);
  u8g2.drawDisc(stx - 1 + with * 3, sty - 1 + with, r, U8G2_DRAW_UPPER_LEFT); //左上
  SEND_BUFFER_DISPLAY_MS(t);
  u8g2.drawDisc(stx - 1 + with * 4, sty, r, U8G2_DRAW_LOWER_LEFT); //左下
  SEND_BUFFER_DISPLAY_MS(t);
  u8g2.drawDisc(stx - 1 + with * 2, sty - 1 + with * 2, r, U8G2_DRAW_ALL);//整个圆
  SEND_BUFFER_DISPLAY_MS(t);
}

void testDrawCircleFun()
{
  testDrawCircle();
  testDrawDisc();
}
