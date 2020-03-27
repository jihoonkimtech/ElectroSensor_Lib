# ElectroSensor_Lib
![](../header.png)
> this library for Voltage Sensing and Current Sensing.

<br>

<!-- NPM Version -->
<!-- Build Status -->
[![arduino-library-badge](https://www.ardu-badge.com/badge/ElectroSensor_Lib.svg?)](https://www.ardu-badge.com/ElectroSensor_Lib)<br>
[![NPM Version][npm-image]][npm-url]    [![Build Status][travis-image]][travis-url]

Follows the MIT license ( Please check ``LICENSE`` file for more information. ) 

<br>

## Function and How to Use

### Code
#### Library Import
- in case of Library file in Arduino/Library folder
```C++
    #include <ElectroSensor.h>
```
- In case of Library file in Source code file
```C++
    #include <"ElectroSensor_Lib/ElectroSensor.h">
```
#### Create Object
- Current Sensor
```C++
    ElectroSensor elec_sensor(CURRENT, (int)pin);
    //elec_sensor is object name
    //sensorType CURRENT = Current Sensor
```
- Voltage Sensor
```C++
    ElectroSensor elec_sensor(VOLTAGE, (int)pin);
    //elec_sensor is object name
    //sensorType VOLTAGE = Voltage Sensor
```

#### Function
- printVoltage(char lastChr = '\n')
```C++
    elec_sensor.printVoltage();
```
- readVoltage(int unit = NORMAL);
```C++
    elec_sensor.readVoltage();
```
- printCurrent(int unit = NORMAL);
```C++
    elec_sensor.readVoltage();
```
- readCurrent(int unit = NORMAL);
```C++
    elec_sensor.readVoltage();
```

<br>

### Hardware
- Supports the sensors below.
    - `Voltage Sensor`
    - `Current Sensor`

- The boards below are supported.
    - Test Finished.
        - `Arduino UNO`
        - `Arduino MEGA`
        - `Arduino NANO`
    - Support Forecast
        - `All boards using Arduino IDE`

<br>

## Example

_The contents of the example are see ``Exemples`` folder._

<br>

## Update History

* 0.0.1
    * Start of Develop

<br>

## Information
### Maker
- Jihoon Kim ([jihoonkimtech](https://jihoonkimtech.github.io/), [jihoonkimtech@naver.com](mailto:jihoonkimtech@naver.com))




<!-- Markdown link & img dfn's -->
[npm-image]: https://img.shields.io/npm/v/datadog-metrics.svg?style=flat-square
[npm-url]: https://npmjs.org/package/datadog-metrics
[npm-downloads]: https://img.shields.io/npm/dm/datadog-metrics.svg?style=flat-square
[travis-image]: https://img.shields.io/travis/dbader/node-datadog-metrics/master.svg?style=flat-square
[travis-url]: https://travis-ci.org/dbader/node-datadog-metrics
[wiki]: https://github.com/yourname/yourproject/wiki