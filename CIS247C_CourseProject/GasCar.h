#pragma once
#include "Car.h"
#include <string.h>

using namespace std;

class GasCar : public Car
{
private:
	float tankSize;
	short mpg;

public:
	GasCar();
	GasCar(string vin, string make, string model, short year, double price, short numDoors, bool hatchBack, float tankSize, short mpg, Engine motor);
	virtual ~GasCar();

	string toString();

	float getTankSize();
	void setTankSize(float tankSize);

	short getMpg();
	void setMpg(short mpg);
};

