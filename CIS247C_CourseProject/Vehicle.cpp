#include "Vehicle.h"

//Constructors
Vehicle::Vehicle()
{
	vin = "Unknown";
	make = "Unknown";
	model = "Unknown";
	year = 0;
	price = 0.0;
}

Vehicle::Vehicle(string vin, string make, string model, short year, double price, Engine motor)
{
	setVin(vin);
	setMake(make);
	setModel(model);
	setYear(year);
	setPrice(price);
	setMotor(motor);
}

Vehicle::~Vehicle()
{
}



//Behaviors
string Vehicle::toString()
{
	return "Vin: " + vin + "\nMake: " + make + "\nModel: " + model + "\nYear: " + to_string(year) + "\nPrice" + to_string(price) 
		+ "\nCyninders: " + to_string(motor.getNumCylinders()) + "\nHorsepower: " + to_string(motor.getHorsePower());
}

double Vehicle::discountPrice(float discountPercent)
{
	float newPrice = price - (price * discountPercent);
	return newPrice;
}



//Accessors / mutators
string Vehicle::getVin()
{
	return vin;
}
void Vehicle::setVin(string vin)
{
	if (vin.length() == 17)
		this->vin = vin;
	else
		this->vin = "Unknown";
}

string Vehicle::getMake()
{
	return make;
}
void Vehicle::setMake(string make)
{
	if (make.length() > 0)
		this->make = make;
	else
		this->make = "Unknown";
}

string Vehicle::getModel()
{
	return model;
}
void Vehicle::setModel(string model)
{
	if (model.length() > 0)
		this->model = model;
	else
		this->model = "Unknown";
}

short Vehicle::getYear()
{
	return year;
}
void Vehicle::setYear(short year)
{
	if (year >= 1980)
		this->year = year;
	else
		this->year = 0;
}

double Vehicle::getPrice()
{
	return price;
}
void Vehicle::setPrice(double price)
{
	if (price > 0.0 && price < 1000000.0)
		this->price = price;
	else
		this->price = 0.0;
}


Engine Vehicle::getMotor()
{
	return motor;
}
void Vehicle::setMotor(Engine motor)
{
	this->motor = motor;
}