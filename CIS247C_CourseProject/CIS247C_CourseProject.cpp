/*
Chase Diquattro
11/10/2019
CIS247C Course Project
*/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include "Vehicle.h"
#include "Car.h"
#include "Engine.h"
#include "SUV.h"
#include "GasCar.h"
#include "ElectricCar.h"

using namespace std;

///Prototypes
void saveToFile(Vehicle* ptrVehicle);
string determineChildType(Vehicle* ptrVehicle);


int main() {
    const int NUM_CARS = 4;
    Vehicle* vehicles[NUM_CARS];

    //Vehicle vhcl1("9AASKJDBAK791KJK7", "Kia", "Forte", 2014, 2000, Engine(4, 125));
    vehicles[0] = new Car("5NPDH4AEXDH356271", "Ford", "Mustang", 2010, 8500.0, 2, false, Engine(6, 315));
    vehicles[1] = new SUV("982KAJS82JKASJ56G", "Brand", "CarName", 2000, 12000, 6, 12, Engine(4, 150));
    vehicles[2] = new GasCar("5NPJ873X34K356271", "Miso", "Odyssey", 2010, 8500.0, 4, false, 12.0, 15, Engine(4, 250));
    vehicles[3] = new ElectricCar("H37DO4AEHAOD62271", "Tesla", "Roadster", 2018, 80000, 2, false, 2000, 400, 25, Engine(0, 300));

    //Print the byte size of variable and its pointer
    cout << "Size of Vehicle pointer: " << sizeof(vehicles[0]) << endl;
    cout << "Size of Vehicle object (dereferenced): " << sizeof(*vehicles[0]) << endl;
    cout << endl;

    remove("data.txt");

    //Save car objects to file
    //And delete heap memory
    for (int i = 0; i < NUM_CARS; i++) {
        saveToFile(vehicles[i]);
        delete vehicles[i];
    }

    cout << endl;
    system("PAUSE");

    return 0;
}





void saveToFile(Vehicle* ptrVehicle)
{
    ofstream outToFile("data.txt", ios::app);

    string childType = determineChildType(ptrVehicle);

    if (outToFile.is_open()) {

        outToFile << childType << ",";

        outToFile << ptrVehicle->getVin() << ','
            << ptrVehicle->getMake() << ','
            << ptrVehicle->getModel() << ','
            << ptrVehicle->getYear() << ','
            << ptrVehicle->getPrice() << ','
            << ptrVehicle->getMotor().getNumCylinders() << ','
            << ptrVehicle->getMotor().getHorsePower() << ',';

        if (childType == "SUV") {
            SUV* s1 = dynamic_cast<SUV*>(ptrVehicle);
            outToFile << "," << s1->getNumSeats() << "," << s1->getCargoSize();
        }

        if (childType == "Car") {
            Car* c1 = dynamic_cast<Car*>(ptrVehicle);
            outToFile << "," << c1->getNumDoors() << "," << c1->getHatchBack();
        }

        if (childType == "ElectricCar") {
            ElectricCar* e1 = dynamic_cast<ElectricCar*>(ptrVehicle);
            outToFile << "," << e1->getBatterySize() << "," << e1->getRange() << "," << e1->getMpgE();
        }

        if (childType == "GasCar") {
            GasCar* g1 = dynamic_cast<GasCar*>(ptrVehicle);
            outToFile << "," << g1->getTankSize() << "," << g1->getMpg();
        }
      

        outToFile << endl;
        outToFile.close();

        cout << ptrVehicle->getMake() << " " << ptrVehicle->getModel() << " was written to the file!" << endl;
    }
}


string determineChildType(Vehicle* ptrVehicle) {
    ElectricCar* e1 = dynamic_cast<ElectricCar*>(ptrVehicle);
    if (e1 != nullptr)
        return "ElectricCar";

    GasCar* g1 = dynamic_cast<GasCar*>(ptrVehicle);
    if (g1 != nullptr)
        return "GasCar";

    Car* c1 = dynamic_cast<Car*>(ptrVehicle);
    if (c1 != nullptr)
        return "Car";

    SUV* s1 = dynamic_cast<SUV*>(ptrVehicle);
    if (s1 != nullptr)
        return "SUV";

    return "error";
}