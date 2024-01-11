#include <Adafruit_GFX.h>
#include <Adafruit_IS31FL3731.h>
#include <Wire.h>

Pimoroni_IS31FL3731_5x5RGB ledmatrix=Pimoroni_IS31FL3731_5x5RGB ();

void setup() {
  Wire.begin();
  ledmatrix.begin();
  Serial.begin(115200);
}

void loop() {
  for(unsigned char x = 1; x <= 5; x++){
    for(unsigned char y = 1; y <= 5; y++){
      Serial.print("x");Serial.print(x);
      Serial.print("y");Serial.println(y);
      ledmatrix.drawPixel(x,y,255,255,255);
      delay(200);
      ledmatrix.drawPixel(x,y,0,0,0);
    }
  }
}