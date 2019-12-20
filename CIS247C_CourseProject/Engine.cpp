#include "Engine.h"

//Constructors
Engine::Engine()
{
	numCylinders = 0;
	horsePower = 0;
}

Engine::Engine(short numCylinders, short horsePower)
{
	setNumCylinders(numCylinders);
	setHorsePower(horsePower);
}

Engine::~Engine()
{
}



//Behaviors
string Engine::toString()
{
	return "Cylinders: " + to_string(numCylinders) + ", Horsepower: " + to_string(horsePower);
}



//Accessors / mutators
short Engine::getNumCylinders()
{
	return this->numCylinders;
}
void Engine::setNumCylinders(short numCylinders)
{
	if (numCylinders > 0 && numCylinders < 13)
		this->numCylinders = numCylinders;
	else
		this->numCylinders = 0;
}


short Engine::getHorsePower()
{
	return this->horsePower;
}
void Engine::setHorsePower(short horsePower)
{
	if (horsePower > 0 && horsePower < 1000)
		this->horsePower = horsePower;
	else
		this->horsePower = 0;
}
