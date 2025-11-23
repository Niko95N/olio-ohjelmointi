#include "animal.h"
#include <iostream>

Animal::Animal() {
    cout<<"Animal olio luotu"<<endl;
}

Animal::~Animal()
{
    cout<<"Animal olio tuhottu"<<endl;
}

void Animal::callOut()
{
    cout<<"Elain aantelee"<<endl;
}
