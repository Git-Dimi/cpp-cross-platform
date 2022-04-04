#include <string>
#include <stdexcept>
#include "Person.h"

using namespace std;

Person::Person(string name, int age) {        
    this->setName(name);
    this->setAge(age);
 }

void Person::setName(string name) {
    if (name.empty())
        throw invalid_argument("Empty names are not allowed!");
    this->name = name;
}

void Person::setAge(int age) {
    if (age < 0)
        throw invalid_argument("Negatives ages are not allowed!");
    this->age = age;
}

bool Person::equals(Person p1, Person p2) {
    return p1.getAge() == p2.getAge() && p1.getName() == p2.getName();
}