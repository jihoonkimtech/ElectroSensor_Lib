/*
 * -Voltage Sensing Library-
 *
 * this cpp file for Voltage Sensing Library
 *
 * author jihoonkimtech (jihoonkimtech@naver.com)
 *			(Republic of Korea)
 * version  V1.0.0
 * date  2020-02-18
*/

#include "VoltSensor.h"

VoltSensor::VoltSensor(int pin, double r1 = 30000.0, double r2 = 7200.0){
	_pin = pin;
	_res1 = r1;
	_res2 = r2;
} 

VoltSensor::readVoltage(){
	_voltage = 0; //sensing
	
	double analogInTmp = analogRead(_pin);
  	double voltTmp = (analogInTmp * _multiple) / _analogRes;
  	double _voltage = voltTmp / (_res2/(_res1+_res2));
  
	return _voltage;
}

VoltSensor::printVoltage(char lastChr = '\n'){
	
	Serial.print("VOLTAGE : ");
	Serial.print(readVoltage());
	Serial.print(" V ");
	Serial.print(lastChr);
}

