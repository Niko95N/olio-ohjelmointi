#include <iostream>
#include <vector>
#include "car.h"
using namespace std;

int main()
{
    Car car1("BMW","e61",2008);
    Car car2("Toyota","Camry",2020);
    Car car3("Lexus","L300",2025);

    vector<Car> carList;
    carList.push_back(car1);
    carList.push_back(car2);
    carList.push_back(car3);
    cout<<"Toisen alkion tiedot\n";
    carList[1].printData();
    cout<<"Kaikkien alkioiden tiedot\n";
    for (Car car: carList){
        car.printData();
    }
}
