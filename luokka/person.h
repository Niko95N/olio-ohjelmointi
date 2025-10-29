#ifndef PERSON_H
#define PERSON_H
#include <string>
using std::string; // tuo "string" näkyviin ilman std::

class Person
{
public:
    Person();
    int getAge() const;
    void setAge(int newAge);

    string getName() const;
    void setName(const string &newName);

private:
    int age;
    string name;
};

#endif // PERSON_H
