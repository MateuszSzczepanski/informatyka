#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,i,t[999];
    string l[999];
    cout << "Liczba: ";
    cin >> a;
    cout<<"Wybierz na co chcesz przekonwertowac wypisujac:"<<endl;
    cout<<"2 - system binarny."<<endl;
    cout<<"7 - system siodemkowy"<<endl;
    cout<<"8 - system osemkowy"<<endl;
    cout<<"10 - system dziesietny"<<endl;
    cout<<"16 - system szesznastkowy"<<endl;
    cin>>b;
    i=0;
    switch (b)
    {
        case 2:
    while(a>=1)
    {
    if(a%2==0)
    {
        l[i]="0";
        i++;
        a/=2;
    }
    else
    {
        l[i]="1";
        a/=2;
        i++;
    }
    }
    while(i>=0)
    {
    cout<<l[i];
    i--;
    }
    break;
        case 7:
           while(a>=1)
    {
    if(a%7==0)
    {
        t[i]=a%7;
        a/=7;
        i++;
    }
    else
    {
        t[i]=a%7;
        a/=7;
        i++;
    }
    }
    while(i>=0)
    {
        cout<<t[i];
        i--;
    }
    break;
        case 8:
            cout<<oct<<a;
            break;
        case 10:
            cout<<dec<<a;
        case 16:
            cout<<hex<<a;
            break;
    }

    return 0;
}
