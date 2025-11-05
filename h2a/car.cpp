#include "car.h"
#include <iostream>
using namespace std;

void Car::setBrand(const string &newBrand)
{
    brand = newBrand;
}


void Car::setModel(const string &newModel)
{
    model = newModel;
}


void Car::setYearModel(int newYearModel)
{
    yearModel = newYearModel;
}
void Car::printData(){
    cout<<"Merkki: "<<brand<<" Malli: "<<model<<" Valmistus vuosi: "<<yearModel<<endl;
}

Car::Car() {}
