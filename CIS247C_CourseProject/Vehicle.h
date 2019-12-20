#pragma once
#include "Engine.h"
#include <string.h>

using namespace std;

class Vehicle
{
private:
	string vin;
	string make;
	string model;
	short year;
	double price;
	Engine motor;

public:
	Vehicle();
	Vehicle(string vin, string make, string model, short year, double price, Engine motor);
	virtual ~Vehicle();

	///Behaviors
	virtual string toString();
	double discountPrice(float discountPercent);


	///Accessors and mutators
	string getVin();
	void setVin(string vin);

	string getMake();
	void setMake(string make);

	string getModel();
	void setModel(string model);

	short getYear();
	void setYear(short year);

	double getPrice();
	void setPrice(double price);

	Engine getMotor();
	void setMotor(Engine motor);
};

