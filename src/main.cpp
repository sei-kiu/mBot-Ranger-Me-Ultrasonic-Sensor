#include <Arduino.h>
#include <MeAuriga.h>

MeUltrasonicSensor ultrasonic_10(10);

void setup()
{
  Serial.begin(115200);
}

void loop()
{
  Serial.print("Distance : ");
  Serial.print(ultrasonic_10.distanceCm() );
  Serial.println(" cm");
  delay(100);
}
