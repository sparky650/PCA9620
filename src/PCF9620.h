/**
 * @file	PCA9620.h
 * @author	Keegan Morrow
 * @version 0.0.1
 * @brief Arduino library for the NXP PCA9620 LCD driver
 *
 */

#ifndef __PCA9620_h_
#define __PCA9620_h_

#include <Arduino.h>
#include <Wire.h>

class PCF9620
{
public:
	PCF9620() {}
	void begin();
	void begin(uint8_t);
#if defined(ARDUINO_ARCH_ESP8266)
	void begin(uint8_t, uint8_t, uint8_t);
#endif // ARDUINO_ARCH_ESP8266
private:

};

#endif // __PCA9620_h_
