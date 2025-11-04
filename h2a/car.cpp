#include "car.h"
#include <iostream>
using namespace std;

string Car::getBrand() const
{
    return brand;
}

void Car::setBrand(const string &newBrand)
{
    brand = newBrand;
}

string Car::getModel() const
{
    return model;
}

void Car::setModel(const string &newModel)
{
    model = newModel;
}

int Car::getYearModel() const
{
    return yearModel;
}

void Car::setYearModel(int newYearModel)
{
    yearModel = newYearModel;
}
void Car::printData(){
    cout<<"Merkki: "<<getBrand()<<"Malli: "<<getModel()<<"Valmistus vuosi: "<<getYearModel()<<endl;
}

Car::Car() {}
