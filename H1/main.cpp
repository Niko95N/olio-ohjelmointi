#include <iostream>

using namespace std;

void calcSum(int a, int b);
void calcDiv(float a, float b);
int retSum(int a, int b);
float retDiv(float a, float b);

int main()
{
    int a,b;
    cout << "Anna kaksi lukua" << endl;
    cin >> a >> b;
    cout << "Annoit numerot " << a << " ja " << b << endl;
    calcSum(a ,b);
    calcDiv(a ,b);
    cout <<"retSum antoi: "<<retSum(a,b)<<endl;
    try {
        cout << "retDiv antoi: " <<retDiv(a,b) << endl;
    } catch (runtime_error& e) {
        cout<<"Error: "<< e.what()<< endl;
    }
    return 0;
}

void calcSum(int a, int b){
    cout << "Ne laskettuna yhteen on : " << a +b << endl;
}

void calcDiv(float a, float b){
    if (b != 0 )
    cout <<"Ne jaeuttuna on : " << a / b << endl;
    else
        cout <<"Nollalla ei voi jakaa" << endl;
}

int retSum(int a, int b) {
    return a+b;
}

float retDiv(float a, float b) {
    if (b == 0)
        throw std::runtime_error("jakaja ei saa olla 0.");
    return a / b;
}
