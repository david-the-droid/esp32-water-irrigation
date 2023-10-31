#include <Arduino.h>

#include "led/led.h"
/* Note: In order to include sub folder libraries these must live under the src directory! */
#include "src/middleware/waterlevel_controller/waterlevel_controller.h"

#define LED (2U)
#define BAUDRATE (115200U)
#define DELAY_10MS (10U)

void setup() {
  // put your setup code here, to run once:
  Serial.begin(BAUDRATE);
  pinMode(LED, OUTPUT);
  
}
  
void loop() {
  FetchWaterInit();
  
    // Prints the distance in the Serial Monitor
  Serial.print("Distance (cm): ");
  Serial.println(FetchWaterLevel());
  delay(DELAY_10MS);
}

