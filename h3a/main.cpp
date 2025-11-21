#include <iostream>
#include "chef.h"
#include "italianchef.h"

using namespace std;

int main()
{
    Chef gordon ("Gordon Ramsay");
    gordon.makeSalad();
    gordon.makeSoup();
    ItalianChef bourdain ("Anthony Bourdain");
    bourdain.makeSalad();
    bourdain.makeSoup();
    bourdain.makePasta();
    cout<<"name of the Italian Chef is "<<bourdain.getName()<<endl;


    return 0;
}
