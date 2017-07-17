/*
	APM_I2CSonar.cpp - Arduino Library for I2CSonar Seosor
	Rerived from BMP code by Jordi Mu�oz and Jose Julio. DIYDrones.com

	This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Lesser General Public
    License as published by the Free Software Foundation; either
    version 2.1 of the License, or (at your option) any later version.

	Sensor is conected to I2C port
	
	Variables:
		RawSonar : Raw Sonar data
		Sonar : Calculated Distance   (in cm units)

	Methods:
		Init() : Initialization of I2C 
		Read() : Read sensor data and calculate Sonar Range
		         This function is optimized so the main host don�t need to wait
				 You can call this function in your main loop
				 It returns a 1 if there are new data.

	Internal functions:
		Calculate() : Calculate Sonar Range in real units


*/
extern "C" {
  // AVR LibC Includes
  #include <inttypes.h>
  #include <avr/interrupt.h>
  #include "WConstants.h"
}

#include <Wire.h>
#include "APM_I2CSonar.h"

#define I2CSonar_ADDRESS 0x02  // Arbitary choice

// Constructors ////////////////////////////////////////////////////////////////
APM_I2CSonar_Class::APM_I2CSonar_Class()
{
}

// Public Methods //////////////////////////////////////////////////////////////
void APM_I2CSonar_Class::init(int initialiseWireLib)
{
	if( initialiseWireLib != 0 )
			Wire.begin();

	I2CSonar_State = 0;		 	// Initial state

	// Put I2C Sonar Startup code here if required
	Wire.beginTransmission(I2CSonar_ADDRESS);
	Wire.send(0x02);            // sets Sonar to Normal Mode (0x01) / modal filter mode(0x02)
	Wire.endTransmission();      // stop transmitting
	
	I2CSonar_State = 1;			// Ready to Read state
}


// Read the sensor. 
uint8_t APM_I2CSonar_Class::read()
{
uint8_t msb;
uint8_t lsb;

	if(I2CSonar_State==1)	// New Read request
	{
		// request data from sensor
		Wire.requestFrom(I2CSonar_ADDRESS,2);
		I2CSonar_State++;	// new state expects data
	}

	if (I2CSonar_State>=2)	// Waiting for first Data byte from a previous read request
	{
		I2CSonar_State++;	// new state reading data
		// receive data from sensor
		if(2 <= Wire.available())    	// if two bytes were received
		{
			lsb = Wire.receive();  		// receive high byte (overwrites previous reading)
			msb = Wire.receive();  		// receive low byte as lower 8 bits
			RawSonar =  lsb | msb << 8;	// shift high byte to be high 8 bits
		
			I2CSonar_State = 1;			// back to ready to Read state
		}
		if (I2CSonar_State>=10) 		// Waited too long for data	
			I2CSonar_State = 1;			// back to ready to Read state
	}
	return(RawSonar);
}

