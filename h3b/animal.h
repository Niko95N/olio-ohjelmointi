#ifndef ANIMAL_H
#define ANIMAL_H
using namespace std;
#include <string>


class Animal
{
private:
    string name;
public:
    Animal();
    ~Animal();
   virtual void callOut();
};

#endif // ANIMAL_H
