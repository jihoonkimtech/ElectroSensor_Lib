/*
 * -Electric Sensing Library-
 *
 * this cpp file for Electric Sensing Library
 *
 * author jihoonkimtech (jihoonkimtech@naver.com)
 *			(Republic of Korea)
 * version  V1.0.0
 * date  2020-02-21
*/

#include "ElectroSensor.h"


VoltSensor::ElectroSensor(int type, int pin){
	_pin = pin;
	_type = type;
	
	pinMode(_pin, INPUT);
} 

VoltSensor::readVoltage(){
	
	double analogInTmp = analogRead(_pin);
  	double voltTmp = (analogInTmp * _multiple) / _analogRes;
  	_voltage = voltTmp / (_res2/(_res1+_res2));
  
	return _voltage;
}

VoltSensor::printVoltage(char lastChr = '\n'){
	
	Serial.print("VOLTAGE : ");
	Serial.print(readVoltage());
	Serial.print(" V ");
	Serial.print(lastChr);
}

VoltSensor::readCurrent(){
	
	double analogInTmp = analogRead(_pin);
  	double voltTmp = (analogInTmp - 511) * 5 / 1024;
  	_current = voltTmp / 0.185;
  
	return _current;
}

VoltSensor::printCurrent(char lastChr = '\n'){
	
	Serial.print("CURRENT : ");
	Serial.print(readCurrent());
	Serial.print(" A ");
	Serial.print(lastChr);
}

