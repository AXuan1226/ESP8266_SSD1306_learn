/************************************************************
  ====================ESP8266连接WiFi测试=====================
  Author：码农爱学习
  Date: 2022/03/06
  Version: V1.0
  Blog: https://xxpcb.gitee.io/
  BiliBili: https://space.bilibili.com/146899653
  ------------------------------------------------------------
  硬件：ESP8266 NodeMCU
************************************************************/
#include <ESP8266WiFi.h>

const char ssid[] = "xxxxxxxxxx";      //WiFi名
const char pass[] = "xxxxxxxxxx";      //WiFi密码

WiFiClient client;
void initWiFi();

//初始化
void setup()
{
  Serial.begin(9600);
  Serial.println("esp8266 test");
  initWiFi();
}

//主循环
void loop()
{
  Serial.println("hello esp8266");
  delay(1000);
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
}
