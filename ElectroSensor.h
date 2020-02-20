/*
 * -Electric Sensing Library-
 *
 * this header file for Electric Sensing Library
 *
 * author jihoonkimtech (jihoonkimtech@naver.com)
 *			(Republic of Korea)
 * version  V1.0.0
 * date  2020-02-20
*/

#ifndef _ElectroSensor_H_
#define _ElectroSensor_H_

#include "Arduino.h"

enum sensType { CURRENT, VOLTAGE };

class ElectroSensor {
	public :
		ElectroSensor(int pin, double r1 = 30000.0, double r2 = 7500.0);
		void printVoltage(char lastChr = '\n');
		double readVoltage();
		
		void printCurrent(char lastChr = '\n');
		double readCurrent();
	private :
		int _pin;
		double _voltage;
		double _current;
		double _res1;
		double _res2;
		double _analogRes = 1024.0;
		double _multiple =  5.0;
		double _ curChange = 0.185;
};


#endif
