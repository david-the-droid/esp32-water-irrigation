#include <Arduino.h>

#include "led/led.h"
/* Note: In order to include sub folder libraries these must live under the src directory! */
#include "src/middleware/waterlevel_controller/waterlevel_controller.h"
//#include "waterlevel_driver.h"

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(LED, OUTPUT);
  
}

  // put your main code here, to run repeatedly:
  //digitalWrite(LED, HIGH);
  //Serial.println("LED is on");
  //delay(2000);
  //digitalWrite(LED, LOW);
  //Serial.println("LED is off");
  //delay(2000);
  
void loop() {
  FetchWaterInit();
  
    // Prints the distance in the Serial Monitor
  Serial.print("Distance (cm): ");
  Serial.println(FetchWaterLevel());
  //delay(1000);
}