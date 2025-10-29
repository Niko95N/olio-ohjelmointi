#include <iostream>

using namespace std;
int tuplaa(int a);
void luvunTulostus(int b);


int main()
{
    int luku;
    int tulos;
    cout << "Anna luku" << endl;
    cin >> luku ;
    tulos=tuplaa(luku);
    luvunTulostus(tulos);
    return 0;
}

int tuplaa(int a){
    return a+a;
}

void luvunTulostus(int b){
    cout <<"Luku tuplattuna: " <<b<< endl;
}
