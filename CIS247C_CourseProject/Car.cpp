#include "Car.h"

//Constructors
Car::Car() : Vehicle()
{
	numDoors = 0;
	hatchBack = false;
}

Car::Car(string vin, string make, string model, short year, double price, short numDoors, bool hatchBack, Engine motor) 
	: Vehicle(vin, make, model, year, price, motor)
{
	setNumDoors(numDoors);
	setHatchBack(hatchBack);
}

Car::~Car() {
}



//Behaviors
string Car::toString() {
	return "Doors: " + to_string(numDoors) + ", Hatchback: " + to_string(hatchBack);
}


//Accessors / mutators
short Car::getNumDoors()
{
	return numDoors;
}
void Car::setNumDoors(short numDoors)
{
	if (numDoors > 0 && numDoors < 5)
		this->numDoors = numDoors;
	else
		this->numDoors = 0;
}


bool Car::getHatchBack()
{
	return hatchBack;
}
void Car::setHatchBack(bool hatchBack)
{
	this->hatchBack = hatchBack;
}
