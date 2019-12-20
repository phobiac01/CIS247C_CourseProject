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
void saveToFile(ElectricCar* ptrElectric);
void saveToFile(GasCar* ptrGas);
void saveToFile(SUV* ptrSuv);
void saveToFile(Car* ptrCar);
void saveToFile(Vehicle* ptrVehicle);

/// Comment and submit ///

int main() {
    Vehicle vhcl1("9AASKJDBAK791KJK7", "Kia", "Forte", 2014, 2000, Engine(4, 125));
    Car car1("5NPDH4AEXDH356271", "Ford", "Mustang", 2010, 8500.0, 2, false, Engine(6, 315));
    SUV suv1("982KAJS82JKASJ56G", "Brand", "CarName", 2000, 12000, 6, 12, Engine(4, 150));
    GasCar gas1("5NPJ873X34K356271", "Miso", "Odyssey", 2010, 8500.0, 4, false, 12.0, 15, Engine(4, 250));
    ElectricCar elec1("H37DO4AEHAOD62271", "Tesla", "Roadster", 2018, 80000, 2, false, 2000, 400, 25, Engine(0, 300));

    //Print the byte size of variable and its pointer
    cout << "Size of Car object: " << sizeof(car1) << endl;
    cout << "Size of pointer: " << sizeof(&car1) << endl;
    cout << endl;

    remove("data.txt");

    //Save car objects to file
    saveToFile(&elec1);
    saveToFile(&gas1);
    saveToFile(&suv1);
    saveToFile(&car1);
    saveToFile(&vhcl1);

    cout << endl;
    system("PAUSE");

    return 0;
}





void saveToFile(ElectricCar* ptrElectric)
{
    ofstream outToFile("data.txt", ios::app);

    if (outToFile.is_open()) {

        outToFile << ptrElectric->getVin() << ','
            << ptrElectric->getMake() << ','
            << ptrElectric->getModel() << ','
            << ptrElectric->getYear() << ','
            << ptrElectric->getPrice() << ','
            << ptrElectric->getNumDoors() << ','
            << ptrElectric->getHatchBack() << ','
            << ptrElectric->getBatterySize() << ','
            << ptrElectric->getRange() << ','
            << ptrElectric->getMpgE() << ','
            << ptrElectric->getMotor().getNumCylinders() << ','
            << ptrElectric->getMotor().getHorsePower() << ',';

        outToFile.close();

        cout << ptrElectric->getMake() << " " << ptrElectric->getModel() << " was written to the file!" << endl;
    }
}

void saveToFile(GasCar* ptrGas)
{
    ofstream outToFile("data.txt", ios::app);

    if (outToFile.is_open()) {

        outToFile << ptrGas->getVin() << ','
            << ptrGas->getMake() << ','
            << ptrGas->getModel() << ','
            << ptrGas->getYear() << ','
            << ptrGas->getPrice() << ','
            << ptrGas->getNumDoors() << ','
            << ptrGas->getHatchBack() << ','
            << ptrGas->getTankSize() << ','
            << ptrGas->getMpg() << ','
            << ptrGas->getMotor().getNumCylinders() << ','
            << ptrGas->getMotor().getHorsePower() << ',';

        outToFile.close();

        cout << ptrGas->getMake() << " " << ptrGas->getModel() << " was written to the file!" << endl;
    }
}

void saveToFile(SUV* ptrSuv)
{
    ofstream outToFile("data.txt", ios::app);

    if (outToFile.is_open()) {

        outToFile << ptrSuv->getVin() << ','
            << ptrSuv->getMake() << ','
            << ptrSuv->getModel() << ','
            << ptrSuv->getYear() << ','
            << ptrSuv->getPrice() << ','
            << ptrSuv->getNumSeats() << ','
            << ptrSuv->getCargoSize() << ','
            << ptrSuv->getMotor().getNumCylinders() << ','
            << ptrSuv->getMotor().getHorsePower() << ',';

        outToFile.close();

        cout << ptrSuv->getMake() << " " << ptrSuv->getModel() << " was written to the file!" << endl;
    }
}

//Saves the variable to a file via pointer
void saveToFile(Car* ptrCar) {
    ofstream outToFile("data.txt", ios::app);

    if (outToFile.is_open()) {

        outToFile << ptrCar->getVin() << ','
            << ptrCar->getMake() << ','
            << ptrCar->getModel() << ','
            << ptrCar->getYear() << ','
            << ptrCar->getPrice() << ','
            << ptrCar->getNumDoors() << ','
            << ptrCar->getHatchBack() << ','
            << ptrCar->getMotor().getNumCylinders() << ','
            << ptrCar->getMotor().getHorsePower() << ',';

        outToFile.close();

        cout << ptrCar->getMake() << " " << ptrCar->getModel() << " was written to the file!" << endl;
    }
}

void saveToFile(Vehicle* ptrVehicle)
{
    ofstream outToFile("data.txt", ios::app);

    if (outToFile.is_open()) {

        outToFile << ptrVehicle->getVin() << ','
            << ptrVehicle->getMake() << ','
            << ptrVehicle->getModel() << ','
            << ptrVehicle->getYear() << ','
            << ptrVehicle->getPrice() << ','
            << ptrVehicle->getMotor().getNumCylinders() << ','
            << ptrVehicle->getMotor().getHorsePower() << ',';

        outToFile.close();

        cout << ptrVehicle->getMake() << " " << ptrVehicle->getModel() << " was written to the file!" << endl;
    }
}
