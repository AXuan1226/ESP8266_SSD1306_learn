//画三角形
void testDrawStr()
{
  int t = 1000;
  u8g2.clearBuffer();
  u8g2.drawStr(0, 14, "drawStr / print");
  SEND_BUFFER_DISPLAY_MS(t);

  u8g2.drawStr(0, 32, "~!@#$%^&*()_+");
  SEND_BUFFER_DISPLAY_MS(t);

  u8g2.enableUTF8Print();//enable UTF8
  u8g2.setFont(u8g2_font_wqy12_t_gb2312b);//设置中文字符集
  u8g2.setCursor(0, 48);
  u8g2.print("陈小贵儿");
  SEND_BUFFER_DISPLAY_MS(t);

  int a = 111;
  u8g2.setCursor(0, 64);
  u8g2.print("int a = ");
  u8g2.setCursor(40, 64);
  u8g2.print(a);//显示变量
  SEND_BUFFER_DISPLAY_MS(t);
}

void testDrawStrFun()
{
  testDrawStr();
}
