#include "car.h"
#include <iomanip>
#include <iostream>

string Car::getModel() const
{
    return model;
}

void Car::setModel(const string &newModel)
{
    model = newModel;
}

string Car::getBrand() const
{
    return brand;
}

void Car::setBrand(const string &newBrand)
{
    brand = newBrand;
}

void Car::printDetails()
{
    cout<<"Auto: "<<getBrand()<<" "<<getModel()<<endl;
    cout<<"Moottori: "<<objEngine.getHorsepower()<< "hp, ";
    cout<<objEngine.getDisplacement()<<" L"<<endl;
    cout<<"Rengas 1: "<<objWheel1.getSize()<<" "<<objWheel1.getType()<<endl;
    cout<<"Rengas 2: "<<objWheel2.getSize()<<" "<<objWheel2.getType()<<endl;
    cout<<"Rengas 3: "<<objWheel3.getSize()<<" "<<objWheel3.getType()<<endl;
    cout<<"Rengas 4: "<<objWheel4.getSize()<<" "<<objWheel4.getType()<<endl;
}

Car::Car() {}

Car::Car(string b, string m)
{
    brand = b;
    model = m;
}

Car::~Car()
{

}

void Car::setEngine()
{
    objEngine = Engine(150, 2.0);
}

void Car::setWheels()
{
    objWheel1 = Wheel(17,"tuumaa, kesarengas");
    objWheel2 = Wheel(17,"tuumaa, kesarengas");
    objWheel3 = Wheel(17,"tuumaa, kesarengas");
    objWheel4 = Wheel(17,"tuumaa, kesarengas");
}
