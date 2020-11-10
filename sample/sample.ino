#include "SPI.h"

#include "TFT_eSPI.h"
TFT_eSPI tft = TFT_eSPI();


void setup(){
  tft.init();
  tft.setRotation(3);

  tft.fillScreen(random(0xFFFF));
  tft.setCursor(0, 0, 2);
  tft.setTextColor(TFT_WHITE,TFT_BLACK);
  tft.setTextSize(2);
  tft.println("Wait for Serial to be ready.");


  Serial.begin(115200);
  while(!Serial); // Wait for Serial to be ready
  delay(1000);


}

void loop(){
  Serial.println("Hello World");
  tft.fillScreen(random(0xFFFF));
  tft.setCursor(0, 0, 2);
  tft.setTextColor(TFT_WHITE,TFT_BLACK);
  tft.setTextSize(2);
  tft.println("Hello World!");

  delay(1000);
}
