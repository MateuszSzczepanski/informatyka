#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
    double a,b,p,o;
    cout<<"Podaj dlugosc: ";
    cin>>a;
    cout<<"Podaj szerokosc: ";
    cin>>b;
    p=a*b;
    o=2*a+2*b;
    cout<<"Pole wynosi: "<<p<<endl;
    cout<<"Obwod wynosi: "<<o<<endl;
}
