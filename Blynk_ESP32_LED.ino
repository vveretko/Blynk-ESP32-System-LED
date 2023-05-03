#define BLYNK_TEMPLATE_ID "TMPL8T7DjYTdo"
#define BLYNK_TEMPLATE_NAME "Blinking Built In LED using ESP32"
#define BLYNK_AUTH_TOKEN "esg54D2Y-Yl6SYE9Q3A6k_p5_KbTDcdh"
#define BLYNK_SERVER "blynk-qa.com"

#include <WiFi.h>
#include <WiFiClientSecure.h>
#include <BlynkSimpleEsp32_SSL.h>

#define LED_PIN 2

char ssid[] = "vveretko";
char pass[] = "25252525";

void setup()
{
  pinMode(LED_PIN, OUTPUT);
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass, BLYNK_SERVER);
}

void loop()
{
  Blynk.run();
}

BLYNK_WRITE(V0)
{
  int value = param.asInt();

  if (value == 1)
  {
    digitalWrite(LED_PIN, HIGH);
  }
  else
  {
    digitalWrite(LED_PIN, LOW);
  }
}
