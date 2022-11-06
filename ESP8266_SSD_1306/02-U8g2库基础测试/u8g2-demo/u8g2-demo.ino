/************************************************************
  ========================U8g2使用基础========================
  Author：码农爱学习
  Date: 2022/03/06
  Version: V1.0
  Blog: https://xxpcb.gitee.io/
  BiliBili: https://space.bilibili.com/146899653
  ------------------------------------------------------------
  硬件：ESP8266 NodeMCU + 12864 SSD1306 OLED显示屏（4pin IIC引脚）
  接线：[ESP8266]  --- [OLED]
       3.3V     ---  VCC
       G (GND)  ---  GND
       D1(GPIO5)---  SCL
       D2(GPIO4)---  SDA
************************************************************/

#include <U8g2lib.h>
#include <Wire.h>

#define SCL 14
#define SDA 2

U8G2_SSD1306_128X64_NONAME_F_SW_I2C u8g2(U8G2_R0, /*clock=*/SCL, /*data=*/SDA, /*reset=*/U8X8_PIN_NONE);   // All Boards without Reset of the Display

void setup()
{
  u8g2.begin();
  u8g2.enableUTF8Print(); // enable UTF8 support for the Arduino print() function
}

void loop()
{
  u8g2.setFont(u8g2_font_unifont_t_symbols);
  u8g2.firstPage();
  do
  {
    u8g2.setCursor(0, 15); //指定显示位置
    u8g2.print("Hello World！"); //使用print来显示字符串
  } while (u8g2.nextPage());
  delay(1000);
}
