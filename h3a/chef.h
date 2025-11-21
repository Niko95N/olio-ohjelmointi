#ifndef CHEF_H
#define CHEF_H
#include <string>
using namespace std;

class Chef
{
protected:
    string name;
public:
    Chef();
    ~Chef();
    Chef(string);
    void makeSalad();
    void makeSoup();

    string getName() const;
    void setName(const string &newName);
};

#endif // CHEF_H
