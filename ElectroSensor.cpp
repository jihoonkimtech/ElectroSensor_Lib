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

VoltSensor::readVoltage(int unit = NORMAL){
	
	double analogInTmp = analogRead(_pin);
  	double voltTmp = (analogInTmp * _multiple) / _analogRes;
  	_voltage = voltTmp / (_res2/(_res1+_res2));
  
	if(NORMAL)
		return _voltage;
	else if(MILLI)
		return _voltage/1000.0;
	else if(KILO)
		_voltage*1000.0;
}

VoltSensor::printVoltage(char lastChr = '\n'){
	
	Serial.print("VOLTAGE : ");
	Serial.print(readVoltage());
	Serial.print(" V ");
	Serial.print(lastChr);
}

VoltSensor::readCurrent(int unit = NORMAL){
	
	double analogInTmp = analogRead(_pin);
  	double voltTmp = (analogInTmp - 511) * 5 / 1024;
  	_current = voltTmp / 0.185;
	
	if(NORMAL)
		return _current;
	else if(MILLI)
		return _current/1000.0;
	else if(KILO)
		_current*1000.0;
}

VoltSensor::printCurrent(char lastChr = '\n'){
	
	Serial.print("CURRENT : ");
	Serial.print(readCurrent());
	Serial.print(" A ");
	Serial.print(lastChr);
}

