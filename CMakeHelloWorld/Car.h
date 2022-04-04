#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"
#include "Enginetype.h"

class Car : Vehicle {
private:
	int milage = 0;

	// private setters

	/// <summary>
	/// sets the Enginetype, only for internal use!
	/// </summary>
	/// <param name="enginetype">Enum of model Enginetype</param>
	void setEnginetype(Enginetype enginetype) { Vehicle::setEnginetype(enginetype); }

	/// <summary>
	/// sets the Manufacturer, only for internal use!
	/// @throws invalid_argument if the passed argument is empty
	/// </summary>
	/// <param name="manufacturer">name of the manufacturer</param>
	void setManufacturer(string manufacturer) { Vehicle::setManufacturer(manufacturer); }

	/// <summary>
	/// sets the car model, only for internal use!
	/// @throws invalid_argument if the passed argument is empty
	/// </summary>
	/// <param name="model">car model</param>
	void setModel(string model) { Vehicle::setModel(model); }

	/// <summary>
	/// sets the build year, only for internal use!
	/// @throws invalid_argument if the year is before 1886
	/// </summary>
	/// <param name="year">year in the format: yyyy</param>
	void setYear(int year);

public: 
	/// <summary>
	/// constructor for a car
	/// @throws illegal_argument if a value doesn't match the criteria
	/// </summary>
	/// <param name="manufacturer">- name of the manufacturer</param>
	/// <param name="model">- name of the car</param>
	/// <param name="year">- build year (after 1886)</param>
	/// <param name="horsepower">- german horsepower</param>
	/// <param name="torque">- torque in Nm</param>
	/// <param name="amountOfWheels">- either 3 or 4</param>
	/// <param name="price">- price/value, decimals possible</param>
	/// <param name="milage">- milage in km</param>
	/// <param name="enginetype">- choices are GASOLINE, DIESEL, LPG, CNG, ELECTRICITY</param>
	Car(string manufacturer, string model, int year, int horsepower, int torque, int amountOfWheels, double price, int milage, Enginetype enginetype);

	// public functions

	/// <summary>
	/// prints all information about the car to the console
	/// </summary>
	void print();

	// public getters

	/// <summary>
	/// standard getter method, calls the base class implemtation
	/// </summary>
	/// <returns>model of the engine</returns>
	Enginetype getEnginetype() { return Vehicle::getEnginetype(); }

	/// <summary>
	/// standard getter method, calls the base class implemtation
	/// </summary>
	/// <returns>name of the manufacturer</returns>
	string getManufacturer() { return Vehicle::getManufacturer(); }

	/// <summary>
	/// standard getter method, calls the base class implemtation
	/// </summary>
	/// <returns>model of the car</returns>
	string getModel() { return Vehicle::getModel(); }

	/// <summary>
	/// standard getter method
	/// </summary>
	/// <returns>the milage</returns>
	int getMilage() { return milage; }

	/// <summary>
	/// standard getter method, calls the base class implemtation
	/// </summary>
	/// <returns>amount of wheels</returns>
	int getAmountOfWheels() { return Vehicle::getAmountOfWheels(); }

	/// <summary>
	/// standard getter method, calls the base class implemtation
	/// </summary>
	/// <returns>the year in the format: yyyy</returns>
	int getYear() { return Vehicle::getYear(); }

	/// <summary>
	/// standard getter method, calls the base class implemtation
	/// </summary>
	/// <returns>the amount of horsepower the engine has</returns>
	int getHorsepower() { return Vehicle::getHorsepower(); }

	/// <summary>
	/// standard getter method, calls the base class implemtation
	/// </summary>
	/// <returns>the amount of torque the engine has</returns>
	int getTorque() { return Vehicle::getTorque(); }
	
	/// <summary>
	/// standard getter method, calls the base class implemtation
	/// </summary>
	/// <returns>the price</returns>
	double getPrice() { return Vehicle::getPrice(); }

	// public setters

	/// <summary>
	/// accepts an amount of milage and sets it
	/// @throws invalid_argument if the milage is lower than the previous value or the milage is negative
	/// </summary>
	/// <param name="milage">the (new) milage of the car</param>
	void setMilage(int milage);

	/// <summary>
	/// accepts the amount of wheels and sets it
	/// @throws invalid_argument if the amount isn't 3 or 4
	/// </summary>
	/// <param name="amountOfWheels"></param>
	void setAmountOfWheels(int amountOfWheels);

	/// <summary>
	/// accepts the amount of torque the engine has
	/// @throws invalid_argument if torque is less than zero
	/// </summary>
	/// <param name="torque">torque of the engine</param>
	void setTorque(int torque) { Vehicle::setTorque(torque); }

	/// <summary>
	/// accepts the amount of horsepower the engine has
	/// @throws invalid_argument if horsepower is less than zero
	/// </summary>
	/// <param name="horsepower">horsepower of the engine</param>
	void setHorsepower(int horsepower) { return Vehicle::setHorsepower(horsepower); }

	/// <summary>
	/// sets the value/price of the car
	/// @throws invalid_argument if value/price is less than zero
	/// </summary>
	/// <param name="price">value/price</param>
	void setPrice(double price) { Vehicle::setPrice(price); }
};

#endif