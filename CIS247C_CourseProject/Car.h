#pragma once
#include <string>
#include "Vehicle.h"

using namespace std;

class Car : public Vehicle
{
private:
	///Attributes
	short numDoors;
	bool hatchBack;

public:
	///Constructors and destructor
	Car();
	Car(string vin, string make, string model, short year, double price, short numDoors, bool hatchBack, Engine motor);
	~Car();

	//Behaviors
	string toString();

	//Accessors / mutators
	short getNumDoors();
	void setNumDoors(short numDoors);

	bool getHatchBack();
	void setHatchBack(bool hatchBack);
};

