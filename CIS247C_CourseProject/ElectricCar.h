#pragma once
#include "Car.h"
#include <string.h>

using namespace std;

class ElectricCar : public Car
{
private:
	float batterySize;
	short range;
	short mpgE;

public:
	ElectricCar();
	ElectricCar(string vin, string make, string model, short year, double price, 
		short numDoors, bool hatchBack, float batterySize, short range, short mpgE, Engine motor);
	virtual ~ElectricCar();

	string toString();

	float getBatterySize();
	void setBatterySize(float BatterySize);

	short getRange();
	void setRange(short range);

	short getMpgE();
	void setMpgE(short mpg);
};

