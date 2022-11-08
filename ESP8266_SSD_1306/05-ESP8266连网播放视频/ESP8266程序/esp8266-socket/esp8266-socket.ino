/************************************************************
  ========ESP8266连网播放视频实例(ESP8266作为客户端)=========
  Author：码农爱学习
  Date: 2022/05/29
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

#include <ESP8266WiFi.h>
#include <U8g2lib.h>
#include <Wire.h>

#define SCL 14
#define SDA 2

#define IP "192.168.31.208"
#define PORT 8080

U8G2_SSD1306_128X64_NONAME_F_SW_I2C u8g2(U8G2_R0, /*clock=*/SCL, /*data=*/SDA, /*reset=*/U8X8_PIN_NONE);   // All Boards without Reset of the Display
const char ssid[] = "Xiaomi_F312";      //WiFi名
const char pass[] = "08520852pp";      //WiFi密码
uint8_t testb[1024] = {};

WiFiClient client;
void initWiFi();

//初始化
void setup()
{
  Serial.begin(9600);
  Serial.println("esp8266 play video");

  u8g2.begin();
  u8g2.setFont(u8g2_font_unifont_t_symbols);
  u8g2.clearBuffer();
  u8g2.setCursor(0, 15);
  u8g2.drawStr(0, 15, "ESP8266");
  u8g2.drawStr(0, 32, "Play Vido Test");
  u8g2.sendBuffer();

  initWiFi();
}

//主循环
void loop()
{
  //Serial.println("hello esp8266");
  delay(10);
  while (client.available())
  {
    delay(12);
    client.read(testb, 1024);
    u8g2.firstPage();
    do {
      u8g2.drawXBM(0, 0, 128, 64, testb);
    } while (u8g2.nextPage());
  }
}

//初始化WIFI
void initWiFi()
{
  Serial.print("Connecting WiFi...");
  WiFi.mode(WIFI_STA); //配置WIFI为Station模式
  WiFi.begin(ssid, pass); //传入WIFI热点的ssid和密码
  while (WiFi.status() != WL_CONNECTED) //等待连接成功
  {
    delay(500);
    Serial.print(".");
  }

  Serial.println("");
  Serial.println("WiFi connected");
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP()); //打印自己的IP地址

  client.connect(IP, PORT);
}
