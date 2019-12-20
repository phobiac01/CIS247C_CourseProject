#include "GasCar.h"

GasCar::GasCar() : Car()
{
	tankSize = 0.0f;
	mpg = 0;
}

GasCar::GasCar(string vin, string make, string model, short year, double price, short numDoors, bool hatchBack, float tankSize, short mpg, Engine motor) 
	: Car(vin, make, model, year, price, numDoors, hatchBack, motor)
{
	setTankSize(tankSize);
	setMpg(mpg);
}

GasCar::~GasCar()
{
}


//Behaviors
string GasCar::toString()
{
	return "Tank Size: " + to_string(tankSize) + ", Mpg: " + to_string(mpg);
}


//Accessors / mutators
float GasCar::getTankSize()
{
	return tankSize;
}
void GasCar::setTankSize(float tankSize)
{
	if (tankSize > 0)
		this->tankSize = tankSize;
	else
		this->tankSize = 0.0f;
}

short GasCar::getMpg()
{
	return mpg;
}
void GasCar::setMpg(short mpg)
{
	if (mpg > 0)
		this->mpg = mpg;
	else
		this->mpg = 0;
}


