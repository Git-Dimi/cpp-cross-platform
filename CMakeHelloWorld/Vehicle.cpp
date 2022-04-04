#include "Vehicle.h"
#include <stdexcept>

void Vehicle::setAmountOfWheels(int amountOfWheels) {
	if (amountOfWheels < 0)
		throw invalid_argument("The amount of wheels can't be negative!");
	this->amountOfWheels = amountOfWheels;
}

void Vehicle::setManufacturer(string manufacturer) {
	if (manufacturer.empty())
		throw invalid_argument("The manufacturer isn't allowed to be empty!");
	this->manufacturer = manufacturer;
}

void Vehicle::setType(string type) {
	if (type.empty())
		throw invalid_argument("The type of the vehicle isn't allowed to be empty!");
	this->type = type;
}

void Vehicle::setHorsepower(int horsepower) {
	if (horsepower < 0)
		throw invalid_argument("The amount of horsepower isn't allowed to be negative!");
	this->horsepower = horsepower;
}

void Vehicle::setTorque(int torque) {
	if (torque < 0)
		throw invalid_argument("The amount of torque isn't allowed to be negative!");
	this->torque = torque;
}

void Vehicle::setPrice(double price) {
	if (price < 0)
		throw invalid_argument("The price isn't allowed to be less than 0");
	this->price = price;
}

void Vehicle::setYear(int year) {
	this->year = year;
}


