# ElectroSensor_Lib
![](../header.png)
> 이 라이브러리는 전압/전류 센싱을 위해 개발되었습니다.

<br>

<!-- NPM Version -->
<!-- Build Status -->
[![arduino-library-badge](https://www.ardu-badge.com/badge/ElectroSensor_Lib.svg?)](https://www.ardu-badge.com/ElectroSensor_Lib)<br>
[![NPM Version][npm-image]][npm-url]    [![Build Status][travis-image]][travis-url]

MIT 라이센스를 준수하며 ``LICENSE``에서 자세한 정보를 확인할 수 있습니다.

<br>

## 기능 및 사용 방법

### 코드
#### 라이브러리 선언
- 아두이노의 라이브러리 폴더에 설치시
```Arduino
    #include <ElectroSensor.h>
```
- 소스코드와 동일한 폴더에 설치시
```Arduino
    #include <"ElectroSensor_Lib/ElectroSensor.h">
```
#### 객체 생성
- 전류 센서
```C++
    ElectroSensor elec_sensor(CURRENT, (int)pin);
    //elec_sensor 는 객체 이름입니다.
    //sensorType CURRENT = Current Sensor
```
- 전압 센서
```C++
    ElectroSensor elec_sensor(VOLTAGE, (int)pin);
    //elec_sensor 는 객체 이름입니다.
    //sensorType VOLTAGE = Voltage Sensor
```

#### 기능
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

### 하드웨어
- 아래의 센서를 지원합니다.
    - `전압 센서`
    - `전류 센서`

- 아래의 보드를 지원합니다.
    - 테스트 완료.
        - `Arduino UNO`
        - `Arduino MEGA`
        - `Arduino NANO`
    - 사용 가능 예상
        - `Arduino IDE를 사용하는(가능한) 모든 보드`

<br>

## 사용 예제

코드 예제를 통해 사용 방법을 자세히 설명합니다.

_더 많은 예제와 사용법은  ``Exemples`` 폴더를 참고하세요._

<br>

## 업데이트 내역

* 0.0.1
    * 작업 진행 중

<br>

## 정보
### 제작
- Jihoon Kim ([jihoonkimtech](https://jihoonkimtech.github.io/), [jihoonkimtech@naver.com](mailto:jihoonkimtech@naver.com))



<!-- Markdown link & img dfn's -->
[npm-image]: https://img.shields.io/npm/v/datadog-metrics.svg?style=flat-square
[npm-url]: https://npmjs.org/package/datadog-metrics
[npm-downloads]: https://img.shields.io/npm/dm/datadog-metrics.svg?style=flat-square
[travis-image]: https://img.shields.io/travis/dbader/node-datadog-metrics/master.svg?style=flat-square
[travis-url]: https://travis-ci.org/dbader/node-datadog-metrics
[wiki]: https://github.com/yourname/yourproject/wiki