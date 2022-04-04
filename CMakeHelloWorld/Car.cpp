#include "Car.h"
#include "Vehicle.h"
#include <stdexcept>
#include <iostream>

Car::Car(string manufacturer, string type, int year, int horsepower, int torque, int amountOfWheels, double price, int milage, Enginetype enginetype) {
	setManufacturer(manufacturer);
	setType(type);
	setYear(year);
	setHorsepower(horsepower);
	setTorque(torque);
	setAmountOfWheels(amountOfWheels);
	setPrice(price);
	setMilage(milage);
	setEnginetype(enginetype);
}

void Car::setAmountOfWheels(int amountOfWheels) {
	if (amountOfWheels != 3 && amountOfWheels != 4)
		throw invalid_argument("A car has either 3 or 4 wheels!");
	Vehicle::setAmountOfWheels(amountOfWheels);
}

void Car::setYear(int year) {
	if (year < 1886)
		throw invalid_argument("The first car was built in 1886!");
	Vehicle::setYear(year);
}

void Car::setMilage(int milage) {
	if (milage < 0)
		throw invalid_argument("The milage can't be less than 0!");
	if (this->milage != 0 && milage < this->milage)
		throw invalid_argument("The milage can't be reduced, that's illegal!");
	this->milage = milage;
}

void Car::print() {
	cout << "Fahrzeugdetails:" << endl << "Hersteller: " << getManufacturer() << endl
		<< "Fabrikat: " << getType() << endl << "Antrieb: ";
	switch (getEnginetype()) {
	case Enginetype::GASOLINE: cout << "Ottomotor" << endl; break;
	case Enginetype::DIESEL: cout << "Dieselmotor" << endl; break;
	case Enginetype::CNG: cout << "Erdgasmotor" << endl; break;
	case Enginetype::LPG: cout << "LPG-Motor" << endl; break;
	case Enginetype::ELECTRICITY: cout << "Elektromotor" << endl; break;
	default: cout << "keiner" << endl; break;
	}
	cout << "Baujahr: " << getYear() << endl << "Leistung (in PS): " << getHorsepower() << endl
		<< "Drehmoment (in Nm): " << getTorque() << endl << "Anzahl der Räder: " << getAmountOfWheels() << endl
		<< "Preis (in €): " << getPrice() << endl << "Laufleistung (in km): " << getMilage() << endl << endl;
}