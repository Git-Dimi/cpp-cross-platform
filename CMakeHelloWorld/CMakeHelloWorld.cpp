#include "CMakeHelloWorld.h"
#include <iostream>
#include <string>
#include "Enginetype.h"
#include "Car.h"
#include "Vehicle.h"
#include "Person.h"

using namespace std;

/// <summary>
/// converts a person into an outstream with the operator <<
/// </summary>
/// <param name="out">outstream</param>
/// <param name="data">instance of Person</param>
/// <returns>representation of person in an outstream</returns>
ostream& operator<< (ostream& out, Person& data) {
    out << "Diese Daten liegen vor:" << endl << "Name: " << data.getName() << endl 
        << "Alter: " << data.getAge() << endl;
    return out;
}

int main()
{
    // asking for user input
    cout << "Bitte gib deinen Namen ein: " << endl;
    string line, name;
    getline(cin, name);
    cout << "Bitte gib dein Alter ein: " << line << endl;
    getline(cin, line);
    try {
        // trying to generate an instance of Person with user input
        int age = stoi(line);
        Person p(name, age);
        cout << p;
        // checking if the user input equals the data of the developer
        Person dimi("Dimitri", 29);
        if (Person::equals(p, dimi))
            cout << "Die eingegebenen Daten entsprechen denen des Entwicklers!";
        else cout << "Die eingegebenen Daten unterscheiden sich von denen des Entwicklers!";
        cout << endl << endl;
    }
    catch (exception e) {
        // if parsing doesn't succeed or the user input doesn't match the criteria, there'll be some exception handling
        cerr << "Fehler! Stelle sicher, dass der Name nicht leer, das Alter eine Zahl und nicht negativ ist!" << endl;
    }

    // checking an instance of Car
    Car a3("Audi", "A3 8PA 1.8 TFSI", 2007, 160, 250, 4, 4000.00, 232000, Enginetype::GASOLINE);
    a3.print();
    // this will let the console window open until a key is pressed
    cout << "Drücke eine Taste um fortzufahren..." << endl;
    cin.ignore();
    return 0;
}