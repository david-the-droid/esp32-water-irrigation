# esp32-water-irrigation

Automated water irrigation project with the ESP32. The aim of this project is to:

- Be able to water plants using a series of relays and water pumps
- Use the project to explore different implementation and testing methods
- Gain further familarity with GitHub as a tool
- Expand knowledge that can be fed into further projects for better efficiency

## To use

## Requirements

Product water irrigation requirements (Release 1.1.x):

- Watering and Timing:
  - WT_REQ1: Must be able to automatically irrigate 1-3 plants
  - WT_REQ2: Must be able to provide consistent watering times accurate to +/- 1 hour
  - WT_REQ3: Must use a wireless IoT access to provide consistent watering times
  - WT_REQ4: Must have a minimum water irrigation time of 1 day
  - WT_REQ5: Must have a maximum water irrigation time of 3 days
  - WT_REQ6: Must have water irrigation time configurable in minimum steps of 1 hour
  - WR_REQ7: Must be able to have individual configurably watering times for each plant
  - WR_REQ8: Must be able to correctly offset watering time when power cuts occur
- Water level of tank:
  - WL_REQ1: Must be able to monitor water level of tank accurate to +/- 2cm
- Indication:
  - I_REQ1: Must be able to indicate when water level is low via single specified email address
  - I_REQ2: Must be able to indicate when water level is low via Red LED indication
- Power:
  - P_REQ1: Must not be battery powered
  - P_REQ2: System must be able to withstand power cuts

Development plan & releases:

## Release 0.1.x

- Implementation:
  - Automatically waters 1 plant
  - Has a timer that allows watering of plant configurable in elapsed hours
  - Waters a plant when system turned on
  - Indicates with an LED when water level in tank is low
- Version and test infrastructure:
  - Must be able to unit test driver level functionality locally
  - Must be able to clang-format and lint project
  - Must have a PR template on GitHub
  - Must have a .gitignore file
  - A development board to track tasks and have tickets
- Requirements met:
  - P_REQ1
  - I_REQ2
  - WL_REQ1

## Release 1.0.x

- Implementation:
  - Automatically water 3 plants
  - Timer functionality so each plant has a different configurable watering time
  - Waters plants when system turned on
- Version and test infrastructure:
  - Must be able to unit test middleware level functionality locally
  - Must be able to integration test functionality locally
- Requirements met:
  - P_REQ1
  - I_REQ2
  - WR_REQ7
  - WT_REQ2
  - WT_REQ4
  - WT_REQ5

## Release 1.1.x

- Implementation:

  - Must be able to connect to a LAN
  - Must be able to have a timer that utilises a wireless connection to check the watering time for the plants
  - Must not water plants when turned on (as watering time is now IoT based)

- Version and test infrastructure:
  - Any fixes or updates needed for previous functionality
- Requirements met:
  - All product requirements

## Release 2.x.x

- To be decided
