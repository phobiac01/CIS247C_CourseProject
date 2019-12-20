#pragma once
#include "Vehicle.h"
#include <string.h>

using namespace std;

class SUV : public Vehicle
{
private:
	short numSeats;
	float cargoSize;

public:
	SUV();
	SUV(string vin, string make, string model, short year, double price, short numSeats, float cargoSize, Engine motor);
	virtual ~SUV();

	string toString();

	float getNumSeats();
	void setNumSeats(short numSeats);

	short getCargoSize();
	void setCargoSize(short cargoSize);
};

