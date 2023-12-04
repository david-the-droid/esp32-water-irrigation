#line 2 "driver_tests.ino"

// Adapted from:
// https://github.com/mmurdoch/arduinounit/blob/master/examples/basic/basic.ino

#include <AUnit.h>

test(correct) {
  int x = 1;
  assertEqual(x, 1);
}

//----------------------------------------------------------------------------
// setup() and loop()
//----------------------------------------------------------------------------

void setup() {
#if ! defined(EPOXY_DUINO)
  delay(1000); // wait for stability on some boards to prevent garbage Serial
#endif
  Serial.begin(115200); // ESP8266 default of 74880 not supported on Linux
  while (!Serial); // for the Arduino Leonardo/Micro only
#if defined(EPOXY_DUINO)
  Serial.setLineModeUnix();
#endif
}

void loop() {
  aunit::TestRunner::run();
}