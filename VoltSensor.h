/*
 * -Voltage Sensing Library-
 *
 * this header file for Voltage Sensing Library
 *
 * author jihoonkimtech (jihoonkimtech@naver.com)
 *			(Republic of Korea)
 * version  V1.0.0
 * date  2020-02-22
*/

#ifndef _VoltSensor_H_
#define _VoltSensor_H_

#include "Arduino.h"

class VoltSensor {
	public :
		voltSensor(int pin, double r1 = 30000.0, double r2 = 7200.0);
		void printVoltage(char lastChr = '\n');
		double readVoltage();
	private :
		int _pin;
		double _voltage;
		double _res1;
		double _res2;
		double _analogRes = 1024.0;
		double _multiple =  5.0;
};


#endif
