/*
 * -Voltage Sensing Library-
 *
 * this cpp file for Voltage Sensing Library
 *
 * author jihoonkimtech (jihoonkimtech@naver.com)
 *			(Republic of Korea)
 * version  V1.0.0
 * date  2020-02-15
*/

#include "VoltSensor.h"

VoltSensor::VoltSensor(int pin, double r1 = 30000.0, double r2 = 7200.0){
	_pin = pin;
	_res1 = r1;
	_res2 = r2;
} 

VoltSensor::readVoltage(){
	_voltage = 0; //sensing
	return _voltage;
}

VoltSensor::printVoltage(char lastChr = '\n'){
	readVoltage();
	Serial.print("VOLTAGE : ");
	Serial.print(_voltage);
	Serial.print(" V ");
	Serial.print(lastChr);
}

