#ifndef CAR_H
#define CAR_H
#include "Vehicle.h"
#include "Enginetype.h"

class Car : Vehicle {
private:
	//additional fields
	int milage = 0;

	//private setters

	void setEnginetype(Enginetype enginetype) { Vehicle::setEnginetype(enginetype); }

	void setManufacturer(string manufacturer) { Vehicle::setManufacturer(manufacturer); }

	void setType(string type) { Vehicle::setType(type); }

	void setYear(int year);

public: 
	/// <summary>
	/// Constructor for a car
	/// </summary>
	/// <param name="manufacturer">- name of the manufacturer</param>
	/// <param name="type">- name of the car</param>
	/// <param name="year">- build year</param>
	/// <param name="horsepower">- german horsepower</param>
	/// <param name="torque">- torque in Nm</param>
	/// <param name="amountOfWheels">- either 3 or 4</param>
	/// <param name="price">- price, decimals possible</param>
	/// <param name="milage">- milage in km</param>
	/// <param name="enginetype">- choices are GASOLINE, DIESEL, LPG, CNG, ELECTRICITY</param>
	Car(string manufacturer, string type, int year, int horsepower, int torque, int amountOfWheels, double price, int milage, Enginetype enginetype);

	//public functions
	void print();

	//public getters

	Enginetype getEnginetype() { return Vehicle::getEnginetype(); }

	string getManufacturer() { return Vehicle::getManufacturer(); }

	string getType() { return Vehicle::getType(); }

	int getMilage() { return milage; }

	int getAmountOfWheels() { return Vehicle::getAmountOfWheels(); }

	int getYear() { return Vehicle::getYear(); }

	int getHorsepower() { return Vehicle::getHorsepower(); }

	int getTorque() { return Vehicle::getTorque(); }

	double getPrice() { return Vehicle::getPrice(); }

	//public setters

	void setMilage(int milage);

	void setAmountOfWheels(int amountOfWheels);

	void setTorque(int torque) { Vehicle::setTorque(torque); }

	void setHorsepower(int horsepower) { return Vehicle::setHorsepower(horsepower); }

	void setPrice(double price) { Vehicle::setPrice(price); }

};

#endif