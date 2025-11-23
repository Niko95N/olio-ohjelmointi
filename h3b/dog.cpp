#include "dog.h"
#include <iostream>
using namespace std;


Dog::Dog() {
    cout<<"Dog olio luotu"<<endl;
}

Dog::~Dog()
{
    cout<<"Dog olio tuhottu"<<endl;
}

void Dog::callOut()
{
    cout<<"Koira haukkuu!"<<endl;
}
