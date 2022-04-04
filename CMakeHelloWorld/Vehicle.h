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
	string model = "";
	Enginetype enginetype = Enginetype::NONE;

protected:
	/// <summary>
	/// sets the Manufacturer, only for internal use!
	/// @throws invalid_argument if the passed argument is empty
	/// </summary>
	/// <param name="manufacturer">name of the manufacturer</param>
	void setManufacturer(string manufacturer);

	/// <summary>
	/// sets the vehicle model, only for internal use!
	/// @throws invalid_argument if the passed argument is empty
	/// </summary>
	/// <param name="model">vehicle model</param>
	void setModel(string model);

	/// <summary>
	/// sets the amount of wheels
	/// @throws invalid_argument if the amount is less than 0
	/// </summary>
	/// <param name="amountOfWheels">amount of wheels</param>
	void setAmountOfWheels(int amountOfWheels);

	/// <summary>
	/// sets the build year of the vehicle - a negative parameter means that it's built before the birth of jesus christus
	/// </summary>
	/// <param name="year">build year</param>
	void setYear(int year);

	/// <summary>
	/// sets the type of the engine - if there isn't, use Enginetype::NONE
	/// </summary>
	/// <param name="enginetype">type of the egine</param>
	void setEnginetype(Enginetype enginetype) { this->enginetype = enginetype; }

public:

	/// <summary>
	/// standard getter
	/// </summary>
	/// <returns>the build year</returns>
	int getYear() { return year; }

	/// <summary>
	/// standard getter
	/// </summary>
	/// <returns>the amount of wheels</returns>
	int getAmountOfWheels() { return amountOfWheels; }

	/// <summary>
	/// standard getter
	/// </summary>
	/// <returns>the amount of horsepower the engine has</returns>
	int getHorsepower() { return horsepower; }

	/// <summary>
	/// standard getter
	/// </summary>
	/// <returns>the amount of torque the engine has</returns>
	int getTorque() { return torque; }

	/// <summary>
	/// standard getter
	/// </summary>
	/// <returns>value/price</returns>
	double getPrice() { return price; }

	/// <summary>
	/// standard getter
	/// </summary>
	/// <returns>the manufacturer</returns>
	string getManufacturer() { return manufacturer; }

	/// <summary>
	/// standard getter
	/// </summary>
	/// <returns>the model</returns>
	string getModel() { return model; }
	
	/// <summary>
	/// standard getter
	/// </summary>
	/// <returns>the type of the engine</returns>
	Enginetype getEnginetype() { return enginetype; }

	/// <summary>
	/// sets the amount of horsepower of the engine
	/// @throws invalid_argument if the number is negative
	/// </summary>
	/// <param name="horsepower">horsepower of the engine</param>
	void setHorsepower(int horsepower);

	/// <summary>
	/// sets the amount of torque of the engine
	/// @throws invalid_argument if the number is negative
	/// </summary>
	/// <param name="torque">torque of the engine</param>
	void setTorque(int torque);

	/// <summary>
	/// sets the value/price
	/// @throws invalid_argument if the price/value is negative
	/// </summary>
	/// <param name="price">value/price</param>
	void setPrice(double price);
};

#endif