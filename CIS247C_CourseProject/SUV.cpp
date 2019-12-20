#include "SUV.h"

//Constructors
SUV::SUV() : Vehicle()
{
	numSeats = 0.0f;
	cargoSize = 0.0f;
}

SUV::SUV(string vin, string make, string model, short year, double price, short numSeats, float cargoSize, Engine motor)
	: Vehicle(vin, make, model, year, price, motor)
{
	setNumSeats(numSeats);
	setCargoSize(cargoSize);
}

SUV::~SUV()
{
}


//Behaviors
string SUV::toString() {
	return "Seats: " + to_string(numSeats) + ", Cargo Size: " + to_string(cargoSize);
}


//Accessors / mutators
float SUV::getNumSeats()
{
	return numSeats;
}
void SUV::setNumSeats(short numSeats)
{
	if (numSeats > 0 || numSeats < 16)
		this->numSeats = numSeats;
	else
		this->numSeats = 0;
}

short SUV::getCargoSize()
{
	return cargoSize;
}
void SUV::setCargoSize(short cargoSize)
{
	if (cargoSize > 0.0f && cargoSize < 200.0f)
		this->cargoSize = cargoSize;
	else
		this->cargoSize = 0.0f;
}