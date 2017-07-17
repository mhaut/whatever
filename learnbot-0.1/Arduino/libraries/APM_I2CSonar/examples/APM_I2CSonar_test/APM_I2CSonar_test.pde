/*
	Example of APM_BMP085 (absolute pressure sensor) library.
	Code by Jordi MuÒoz and Jose Julio. DIYDrones.com
*/

#include <Wire.h>
#include <APM_I2CSonar.h> // ArduPilot Mega I2CSonar Library

APM_I2CSonar_Class APM_I2CSonar;

unsigned long timer;

void setup()
{	
	APM_I2CSonar.Init();	 // APM Sonar initialization
	Serial.begin(115200);
	Serial.println("ArduPilot Mega I2CSonar library test");
	delay(1000);
	timer = millis();
}

void loop()
{
	if((millis()- timer) > 50){
		timer = millis();
		APM_I2CSonar.Read();
	    APM_I2CSonar.Calculate();
	    Serial.print("Raw Data:");
		Serial.print(APM_I2CSonar.RawSonar);
	    Serial.print("  \t CalcSonar:");
		Serial.print(APM_I2CSonar.SonarRange);
		Serial.println();
	}
}
