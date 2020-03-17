/*
 * -Electric Sensing Library-
 *
 * this header file for Electric Sensing Library
 *
 * author jihoonkimtech (jihoonkimtech@naver.com)
 *			(Republic of Korea)
 * version  V1.0.0
 * date  2020-02-21
*/

#ifndef _ElectroSensor_H_
#define _ElectroSensor_H_

#include "Arduino.h"

enum sensType { CURRENT, VOLTAGE };
enum unitType { MILLI, NORMAL, KILO };

class ElectroSensor {
	public :
		ElectroSensor(int type, int pin);
		void printVoltage(char lastChr = '\n');
		double readVoltage(int unit = NORMAL);
		
		void printCurrent(char lastChr = '\n');
		double readCurrent(int unit = NORMAL);
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
