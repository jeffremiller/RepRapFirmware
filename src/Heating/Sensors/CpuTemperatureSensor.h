/*
 * CpuTemperatureSensor.h
 *
 *  Created on: 8 Jun 2017
 *      Author: David
 */

#ifndef SRC_HEATING_SENSORS_CPUTEMPERATURESENSOR_H_
#define SRC_HEATING_SENSORS_CPUTEMPERATURESENSOR_H_

#include "TemperatureSensor.h"

#ifndef __RADDS__

class CpuTemperatureSensor : public TemperatureSensor
{
public:
	CpuTemperatureSensor(unsigned int channel);
	void Init() override;
	TemperatureError GetTemperature(float& t) override;
};

#endif

#endif /* SRC_HEATING_SENSORS_CPUTEMPERATURESENSOR_H_ */