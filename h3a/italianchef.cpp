#include "italianchef.h"
using namespace std;

ItalianChef::ItalianChef() : Chef() {}

ItalianChef::ItalianChef(string n) :Chef(n)
{

}

string ItalianChef::getName()
{
    return name;
}

void ItalianChef::makePasta()
{
    cout<<"Chef "<<name<<" makes pasta"<<endl;
}
