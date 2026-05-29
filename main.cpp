
#include <WiFi.h>
#include <BlynkSimpleEsp32.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>



#define BLYNK_TEMPLATE_ID "TMPLxxxx"
#define BLYNK_TEMPLATE_NAME "EnergyMeter"
#define BLYNK_AUTH_TOKEN "yExzd9NS9TGLLWzF6NRA9daW7Df6LGq8"


// WIFI
char ssid[] = "Manish";
char pass[] = "8439923487";

// LCD
LiquidCrystal_I2C lcd(0x27, 16, 2);

// PINS
#define VOLTAGE_PIN 34
#define CURRENT_PIN 35

// VARIABLES
float Vrms = 0, Irms = 0;
float Power = 0, Energy = 0, Cost = 0;
float PF = 0.9;
float frequency = 50.0;

float costPerUnit = 6.0;

unsigned long lastTime = 0;
unsigned long lcdTimer = 0;
unsigned long blynkTimer = 0; // 🔥 Blynk ke liye naya timer
bool page = 0;

// AC detection variables
int offCounter = 0;
bool acState = true; // true = ON, false = OFF

// SETUP
void setup() {
  Serial.begin(115200);

  lcd.init();
  lcd.backlight();

  lcd.setCursor(0, 0);
  lcd.print("  By Manish Pal");
  lcd.setCursor(0, 1);
  lcd.print(" Energy Meter ");
  delay(2500);
  lcd.clear();

  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);

  lastTime = millis();
}

// LOOP
void loop() {

  Blynk.run();

  // SAMPLING
  int samples = 400;
  float vSum = 0, cSum = 0;

  for (int i = 0; i < samples; i++) {
    float v = analogRead(VOLTAGE_PIN) - 2048;
    float c = analogRead(CURRENT_PIN) - 2048;

    vSum += v * v;
    cSum += c * c;

    delayMicroseconds(200);
  }

  // RMS
  Vrms = sqrt(vSum / samples) * (3.3 / 4095.0) * 300.0;
  Irms = sqrt(cSum / samples) * (3.3 / 4095.0) * 20.0;

  // ADVANCED AC OFF DETECTION
  if (Vrms < 40 && Irms < 0.05) {
    offCounter++;
  } else {
    offCounter = 0;
  }

  // Agar lagatar 3 baar low mila → AC OFF
  if (offCounter >= 3) {
    acState = false;
  } else {
    acState = true;
  }

  // 🔥 APPLY LOGIC (FIXED)
  if (!acState) {
    Vrms = 0;
    Irms = 0;
    Power = 0;
    PF = 0;
    frequency = 0;
    
    // Energy aur Cost ko yahan se hata diya hai taaki data delete na ho!
    lastTime = millis(); 
  } else {
    PF = 0.9;         // Light aane par PF wapas default kar diya
    frequency = 50.0;  // Light aane par Frequency wapas default kar diya
    
    Power = Vrms * Irms * PF;

    unsigned long currentTime = millis();
    float hours = (currentTime - lastTime) / 3600000.0;
    Energy += (Power * hours) / 1000.0;
    lastTime = currentTime;

    Cost = Energy * costPerUnit;
  }

  // LCD PAGE SWITCH (Har 3 second me)
  if (millis() - lcdTimer > 3000) {
    page = !page;
    lcd.clear();
    lcdTimer = millis();
  }

  // LCD DISPLAY
  if (page == 0) {
    lcd.setCursor(0, 0);
    lcd.print("V:");
    lcd.print(Vrms, 0);
    lcd.print(" I:");
    lcd.print(Irms, 1);

    lcd.setCursor(0, 1);
    lcd.print("P:");
    lcd.print(Power, 0);
    lcd.print(" E:");
    lcd.print(Energy, 2);
  } else {
    lcd.setCursor(0, 0);
    lcd.print("Cost:");
    lcd.print(Cost, 1);

    lcd.setCursor(0, 1);
    lcd.print("PF:");
    lcd.print(PF, 2);
    lcd.print(" F:");
    lcd.print(frequency, 0);
  }

  // SERIAL DEBUGGING
  Serial.print("V: "); Serial.print(Vrms);
  Serial.print(" I: "); Serial.print(Irms);
  Serial.print(" P: "); Serial.print(Power);
  Serial.print(" E: "); Serial.println(Energy);

  // 🔥 BLYNK DATA SEND (Har 1 second me data bhejna flood rokhne ke liye)
  if (millis() - blynkTimer > 1000) {
    Blynk.virtualWrite(V0, Vrms);
    Blynk.virtualWrite(V1, Irms);
    Blynk.virtualWrite(V2, Power);
    Blynk.virtualWrite(V3, Energy);
    Blynk.virtualWrite(V4, Cost);
    Blynk.virtualWrite(V5, PF);
    Blynk.virtualWrite(V6, frequency);
    blynkTimer = millis();
  }
}