#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    string haslo,dost;
    int i;
    haslo="zsk";
    i=1;
    do
    {
    cout<<"Proba: "<<i<<endl;
    cout << "Podaj haslo:";
    cin>>dost;
    cout<<endl;
    if(dost==haslo)
    {
        cout<<"Gratuluje, odgadles za "<<i<<" proba."<<endl;
        i+=4;
    }
    else if(i==3)
    {
        cout<<"NIE ODGADLES HASLA!"<<endl;
        i+=2;
    }
    else
    {
        i++;
    }
    }while(i<=4);
    int p,k;
    cout<<"Podaj poczatek przedzialu: ";
    cin>>p;
    cout<<endl;
    cout<<"Podaj koniec przedzialu: ";
    cin>>k;
    if(k%2==1)
    {
    for(p;p<=k;p++)
    {
        if(p%2==1&&p!=k)
        {
            cout<<p<<", ";

        }
        else if(p==k)
        {
            cout<<k<<".";
        }
    }
    }else
    {
        k-=1;
        for(p;p<=k;p++)
    {
        if(p%2==1&&p!=k)
        {
            cout<<p<<", ";

        }
        else if(p==k)
        {
            cout<<k<<".";
        }
    }
    }
    cout<<endl;
    int a,b,c;
    srand(time(NULL));
    a=rand();
    b=rand();
    c=rand();
    cout<<"3 wylosowane liczby: "<<a<<", "<<b<<", "<<c<<"."<<endl;
    if(a>b)
    {
        if(a>c)
        {
            cout<<"Najwieksza liczba: "<<a;
        }else
        {
            cout<<"Najwieksza liczba: "<<c;
        }
    }else
    {
        if(b>c)
        {
            cout<<"Najwieksza liczba: "<<b;
        }
        else
        {
            cout<<"Najwieksza liczba: "<<c;
        }
    }
    return 0;
}
