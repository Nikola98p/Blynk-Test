#define BLYNK_PRINT Serial
#include <WiFi.h>
#include <WiFiClient.h>
#include <Blynk.h>
#include <BlynkSimpleEsp32.h>
int pin = 2;
char auth[] = "";       // You should get Auth Token in the Blynk App.
char ssid[] = "";                    // Your Wi-Fi Credentials
char pass[] = "";
void setup() {  
  pinMode(pin, OUTPUT); 
  pinMode(pin, HIGH);
  Serial.begin(115200);
  delay(10);
  Serial.print("Connecting to ");
  Serial.println(ssid);
  WiFi.begin(ssid, pass);
  int wifi_ctr = 0;
  while (WiFi.status() != WL_CONNECTED) {
  delay(500);
  Serial.print(".");
  }
  Serial.println("WiFi connected");  
  Blynk.begin("", ssid, pass);
}
void loop(){
    Blynk.run();
}
