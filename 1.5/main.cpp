#include <iostream>
#include <math.h>

double x,y,w;
using namespace std;

int main()
{
    cout<<"Podaj x: ";
    cin>>x;
    cout<<"Podaj y: ";
    cin>>y;
    w=sqrt((3*sqrt(x))/(20+y));
    cout<<"Wynik: "<<w;
    return 0;
}
