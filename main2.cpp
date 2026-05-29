#include<WiFi.h>
#include<BlynkSimpleEsp32.h>



#define BLYNK_TEMPLATE_ID "TMPLxxxx"
#define BLYNK_TEMPLATE_NAME "BulbControl"
#define BLYNK_AUTH_TOKEN "YOUR_AUTH_TOKEN_HERE"


char ssid[] = "Your_WiFi_Name";
char pass[] = "Your_WiFi_Password";

#define RELAY_PIN 26

// Blynk App Button Logic
BLYNK_WRITE(V0) {
  int status = param.asInt(); 
  
  if (status == 1) {
    digitalWrite(RELAY_PIN, LOW);  
  } else {
    digitalWrite(RELAY_PIN, HIGH); 
  }
}

void setup() {
  pinMode(RELAY_PIN, OUTPUT);
  digitalWrite(RELAY_PIN, HIGH); 

  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
}

void loop() {
  Blynk.run();
}