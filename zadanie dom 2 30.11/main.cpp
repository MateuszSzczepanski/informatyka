#include <iostream>
#include <iomanip>
#include <windows.h>
using namespace std;
int main()
{
    int g,a,b,c,d;
    string i[50];
    cout<<"Podaj IP po kropkach:"<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    cout<<"IP: "<<a<<"."<<b<<"."<<c<<"."<<d<<endl;
    cout<<"Obliczanie..."<<endl;
    cout<<"IP: ";
    g=2;
    while(a>=1)
    {
        if(a%2==0)
        {

            i[g]="0";
            g++;
            a/=2;
        }else
        {
            i[g]="1";
            g++;
            a/=2;
        }
    }
    cout<<setfill('0')<<setw(8-g);
    while(g>=0)
    {
        cout<<i[g];
        g--;
    }
    cout<<".";
    g=10;
    while(b>=1)
    {
        if(b%2==0)
        {

            i[g]="0";
            g++;
            b/=2;
        }else
        {
            i[g]="1";
            g++;
            b/=2;
        }
    }
    cout<<setfill('0')<<setw(8-(g-10));
    while(g>=10)
    {
        cout<<i[g];
        g--;
    }
    cout<<".";
    g=20;
    while(c>=1)
    {
        if(c%2==0)
        {

            i[g]="0";
            g++;
            c/=2;
        }else
        {
            i[g]="1";
            g++;
            c/=2;
        }
    }
    cout<<setfill('0')<<setw(8-(g-20));
    while(g>=20)
    {
        cout<<i[g];
        g--;
    }
    cout<<".";
    g=30;
    while(d>=1)
    {
        if(d%2==0)
        {

            i[g]="0";
            g++;
            d/=2;
        }else
        {
            i[g]="1";
            g++;
            d/=2;
        }
    }
    cout<<setfill('0')<<setw(8-(g-30));
    while(g>=30)
    {
        cout<<i[g];
        g--;
    }
    return 0;
}
