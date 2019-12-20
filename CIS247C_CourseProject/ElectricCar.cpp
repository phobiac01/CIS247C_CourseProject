#include "ElectricCar.h"

//Constructors
ElectricCar::ElectricCar() : Car()
{
	batterySize = 0.0f;
	range = 0;
	mpgE = 0;
}

ElectricCar::ElectricCar(string vin, string make, string model, short year, double price, short numDoors, bool hatchBack, float batterySize, short range, short mpgE, Engine motor) 
	: Car(vin, make, model, year, price, numDoors, hatchBack, motor)
{
	setBatterySize(batterySize);
	setRange(range);
	setMpgE(mpgE);
}

ElectricCar::~ElectricCar()
{
}


//Behaviors
string ElectricCar::toString()
{
	return string();
}


//Accessors / mutators
float ElectricCar::getBatterySize()
{
	return batterySize;
}
void ElectricCar::setBatterySize(float BatterySize)
{
	if (batterySize > 0)
		this->batterySize = batterySize;
	else
		this->batterySize = 0.0f;
}

short ElectricCar::getRange()
{
	return range;
}
void ElectricCar::setRange(short range)
{
	if (range > 0)
		this->range = range;
	else
		this->range = 0;
}

short ElectricCar::getMpgE()
{
	return mpgE;
}
void ElectricCar::setMpgE(short mpg)
{
	if (mpgE > 0)
		this->mpgE = mpgE;
	else
		this->mpgE = 0;
}
