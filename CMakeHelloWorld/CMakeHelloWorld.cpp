// CMakeHelloWorld.cpp: Definiert den Einstiegspunkt für die Anwendung.
//

#include "CMakeHelloWorld.h"
#include <iostream>
#include <string>
#include "Enginetype.h"
#include "Car.h"
#include "Vehicle.h"

using namespace std;

class Person {
private:
    string name;
    int age;

public:
    Person(string name, int age) {
        this->setName(name);
        this->setAge(age);
    }

    string getName() {
        return name;
    }

    int getAge() {
        return age;
    }

    void setName(string name) {
        if (name.empty())
            throw invalid_argument("Empty names are not allowed!");
        this->name = name;
    }

    void setAge(int age) {
        if (age < 0)
            throw invalid_argument("Negatives ages are not allowed!");
        this->age = age;
    }

    static bool equals(Person p1, Person p2) {
        return p1.getAge() == p2.getAge() && p1.getName() == p2.getName();
    }
};

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
        Person p = Person(name, age);
        cout << p << endl;
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