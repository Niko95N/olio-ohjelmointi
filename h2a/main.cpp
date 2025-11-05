#include <iostream>
#include "car.h"
#include "rectangle.h"
#include"student.h"
#include <memory>

using namespace std;

int main()
{
    Car Car;
    Car.setBrand("Bmw");
    Car.setModel("e61");
    Car.setYearModel(2008);
    Car.printData();

    Rectangle* rectangle=new Rectangle();
    rectangle->setHeight(4);
    rectangle->setWidth(9);
    cout<<"kolmion pinta-ala on: "<<rectangle->getArea()<<endl;
    cout<<"kolmion ymparyysmitta on: "<<rectangle->getCircum()<<endl;
    delete rectangle;
    rectangle = nullptr;

    auto student = make_unique<Student>();
    student->setName("Masa");
    student->setStudentNumber(58);
    student->setAverage(8.9);
    cout<<"Oppilaan nimi: "<<student->getName()<<" Numero: "<<student->getStudentNumber()<<" Keskiarvo : "<<student->getAverage()<<endl;



    return 0;
}
