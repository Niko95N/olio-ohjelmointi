#include "rectangle.h"
#include <iostream>

using namespace std;

void Rectangle::setHeight(double newHeight)
{
    height = newHeight;
}

void Rectangle::setWidth(double newWidth)
{
    width = newWidth;
}
double Rectangle::getArea() {
    double vastaus = width * height;
    return vastaus;
}
double Rectangle::getCircum() {
    double vastaus = 2* (width * height);
    return vastaus;
}
Rectangle::Rectangle() {}

Rectangle::~Rectangle()
{
    cout<<"Olio tuhottu!"<<endl;
}
