//
// sketch20190820a_AnalogReadSerial_POT1.ino
//
// Written by @hohno_at_kuimc
//
// Public domain
//
// Last update: Mon Aug 19 07:28:04 JST 2019 by @hohno_at_kuimc
//

#define VOL (A0)

int valVR;

// ---------------------------------------------------------

void setup() {
  // put your setup code here, to run once:
  Serial.begin(57600);
}

// ---------------------------------------------------------

void loop() {
  // put your main code here, to run repeatedly:
  valVR = map(analogRead(VOL), 0, 1023, 0, 255);
  // Serial.write(77); Serial.write(valVR);
  Serial.println(valVR);
  delay(100);
}

// ---------------------------------------------------------
