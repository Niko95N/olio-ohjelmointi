#include <iostream>
#include <memory>
#include "dog.h"
#include "animal.h"
#include <vector>

using namespace std;

int main()
{
    unique_ptr<Animal> a = make_unique<Animal>();
    unique_ptr<Dog> b = make_unique<Dog>();
    a->callOut();
    b->callOut();

}
