/************************************************************
  ===================U8g2库各类画图函数测试实例==================
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

#define SEND_BUFFER_DISPLAY_MS(ms)\
  do {\
    u8g2.sendBuffer(); \
    delay(ms);\
  }while(0);

void initOLED();

void testDrawPixelFun();
void testDrawLineFun();
void testDrawTriangleFun();
void testDrawRectangleFun();
void testDrawCircleFun();
void testDrawEllipseFun();
void testGlyphFun();
void testDrawStrFun();
void testDrawXBMFun();

void testDrawBattery();


void setup()
{
  Serial.begin(9600);
  initOLED();
}

void loop()
{
  u8g2.firstPage();
  do
  {
    testDrawPixelFun(); //画像素点测试
    testDrawLineFun(); //画线测试
    testDrawTriangleFun(); //画三角形测试
    testDrawRectangleFun(); //画矩形测试
    testDrawCircleFun(); //画圆测试
    testDrawEllipseFun(); //画椭圆测试
    testGlyphFun(); //画图标测试
    testDrawStrFun(); //字符、汉字、变量显示测试
    u8g2.setFont(u8g2_font_unifont_t_symbols);
    testDrawBattery(); //画电池
    testDrawXBMFun(); //画自定义图片
  } while (u8g2.nextPage());
  delay(1000);
}

void initOLED()
{
  u8g2.begin();
  u8g2.setFont(u8g2_font_unifont_t_symbols);
}
