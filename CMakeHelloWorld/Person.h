#include <string>

using namespace std;

class Person {
private:
    string name;
    int age;

public:
    Person(string name, int age);

    string getName() { return name; }

    int getAge() { return age; }

    void setName(string name);

    void setAge(int age);

    static bool equals(Person p1, Person p2);
};