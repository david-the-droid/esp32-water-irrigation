# esp32-water-irrigation
Automated water irrigation project with the ESP32



Development plan & releases:

## Release V1
  * Implementation:
    * Must be able to automatically water 1 plant
	* Must have a timer that allows watering of plant configurable in elapsed hours
	* Must water plant when turned on 
	* Must indicate with an LED when water level in tank is low
  * Version and test infrastructure:
    * Must be able to unit test driver level functionality locally
    * Must be able to clang-format and lint project
	* Must have a PR template on Github
	* A development board to track tasks and have tickets 
	
## Release V2
  * Implementation:
    * Must be able to automatically water 2 plants
	* Must have a common timer that allows watering of plants configurable in elapsed hours
	* Must water plants when turned on
	* Any other previous requirements stated are maintained
  * Version and test infrastructure:
    * Must be able to unit test middleware level functionality locally
	* Must be able to integration test functionality locally
	
## Release V3
  * Implementation:
    * Must be able to automatically water 3 plants
	* Must be able to connect to a LAN
	* Must be able to have a timer that utilises a wireless connection to check the watering time for the plants
	* Must not water plants when turned on (as watering time is now IoT based)
  * Version and test infrastructure: 
    * Any fixes or updates needed for previous functionality
  