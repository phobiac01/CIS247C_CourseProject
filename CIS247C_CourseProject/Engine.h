#pragma once
#include <string>

using namespace std;

class Engine
{
private:
	short numCylinders;
	short horsePower;

public:
	Engine();
	Engine(short numCylinders, short horsePower);
	~Engine();

	string toString();

	short getNumCylinders();
	void setNumCylinders(short numCylinders);

	short getHorsePower();
	void setHorsePower(short horsePower);
};

