#include <string>

using namespace std;

class Person {
private:
    string name = "";
    int age = 0;

public:

    /// <summary>
    /// constructor for a Person
    /// @throws illegal_argument if name is empty or age is negative
    /// </summary>
    /// <param name="name">name of the person</param>
    /// <param name="age">age of the person</param>
    Person(string name, int age);

    /// <summary>
    /// standard getter method
    /// </summary>
    /// <returns>name of the person</returns>
    string getName() { return name; }

    /// <summary>
    /// standard getter method
    /// </summary>
    /// <returns>age of the person</returns>
    int getAge() { return age; }

    /// <summary>
    /// setter for the name
    /// @throws invalid_argument if the name is empty
    /// </summary>
    /// <param name="name">name of the person</param>
    void setName(string name);

    /// <summary>
    /// setter for the age
    /// @throws invalid_argument if the age is empty
    /// </summary>
    /// <param name="age">age of the person</param>
    void setAge(int age);

    /// <summary>
    /// static function that compares two instances of Person
    /// </summary>
    /// <param name="p1">first instance</param>
    /// <param name="p2">second instance</param>
    /// <returns>true if name and age match, false if they don't</returns>
    static bool equals(Person p1, Person p2);
};