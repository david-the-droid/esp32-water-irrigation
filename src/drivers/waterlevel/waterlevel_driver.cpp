#include "waterlevel_driver.h"

#define TRIGGER_PIN (5U)
#define ECHO_PIN (18U)
#define TRIGGER_LOW_SETUP_TIME (2U)
#define TRIGGER_HIGH_TIME (10U)


void WaterLevelInit(void)
{
  pinMode(TRIGGER_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT); 
}

uint32_t CalculateWaterLevel(void)
{
  uint32_t duration = 0U;
  // Clears the trigPin
  digitalWrite(TRIGGER_PIN, LOW);
  delayMicroseconds(TRIGGER_LOW_SETUP_TIME);
  // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(TRIGGER_PIN, HIGH);
  delayMicroseconds(TRIGGER_HIGH_TIME);
  digitalWrite(TRIGGER_PIN, LOW);
  
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(ECHO_PIN, HIGH);
  
  return duration;
}