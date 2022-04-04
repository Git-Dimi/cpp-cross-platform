#include "CMakeHelloWorld.h"
#include <iostream>
#include <string>
#include "Enginetype.h"
#include "Car.h"
#include "Vehicle.h"
#include "Person.h"

using namespace std;

ostream& operator<< (ostream& out, Person& data) {
    out << "Diese Daten liegen vor:" << endl << "Name: " << data.getName() << endl 
        << "Alter: " << data.getAge() << endl;
    return out;
}

int main()
{
    cout << "Bitte gib deinen Namen ein: " << endl;
    string line, name;
    getline(cin, name);
    cout << "Bitte gib dein Alter ein: " << line << endl;
    getline(cin, line);
    int age = 0;
    try {
        age = stoi(line);
        Person p(name, age);
        cout << p;
        Person dimi("Dimitri", 29);
        if (Person::equals(p, dimi))
            cout << "Die eingegebenen Daten entsprechen denen des Entwicklers!";
        else cout << "Die eingegebenen Daten unterscheiden sich von denen des Entwicklers!";
        cout << endl << endl;
    }
    catch (exception e) {
        cerr << "Fehler! Stelle sicher, dass der Name nicht leer, das Alter eine Zahl und nicht negativ ist!" << endl;
    }

    Car a3("Audi", "A3 8PA 1.8 TFSI", 2007, 160, 250, 4, 4000.00, 232000, Enginetype::GASOLINE);
    a3.print();
    cout << "Drücke eine Taste um fortzufahren..." << endl;
    cin.ignore();
    return 0;
}