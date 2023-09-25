#include "waterlevel_controller.h"

#include "../../drivers/waterlevel/waterlevel_driver.h"


#define SAMPLE_LIMIT (2U)
//define sound speed in cm/uS
#define SOUND_SPEED (0.034)

void FetchWaterInit(void)
{	
  WaterLevelInit();
}

uint32_t FetchWaterLevel(void)
{
  uint16_t distanceResult = 0U;
  uint16_t distanceCm = 0U;
  for(uint8_t index = 0U; index < SAMPLE_LIMIT; index++)
  {
    // Calculate the distance
    distanceCm = (CalculateWaterLevel() * SOUND_SPEED/2);
    distanceResult += distanceCm;
  }
  distanceResult = distanceResult/SAMPLE_LIMIT; 

  return distanceResult;
}

