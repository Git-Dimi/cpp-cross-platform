#ifndef VEHICLE_H
#define VEHICLE_H
#include <string>
#include "Enginetype.h"
using namespace std;

class Vehicle {
private:
	int amountOfWheels = 0;
	int horsepower = 0;
	int torque = 0;
	int year = 0;
	double price = 0.0;
	string manufacturer = "";
	string type = "";
	Enginetype enginetype = Enginetype::NONE;

protected:
	void setManufacturer(string manufacturer);

	void setType(string type);

	void setAmountOfWheels(int amountOfWheels);

	void setYear(int year);

	void setEnginetype(Enginetype enginetype) { this->enginetype = enginetype; }

public:

	int getYear() { return year; }

	int getAmountOfWheels() { return amountOfWheels; }

	int getHorsepower() { return horsepower; }

	int getTorque() { return torque; }

	double getPrice() { return price; }

	string getManufacturer() { return manufacturer; }

	string getType() { return type; }

	Enginetype getEnginetype() { return enginetype; }

	void setHorsepower(int horsepower);

	void setTorque(int torque);

	void setPrice(double price);
};

#endif