#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,i;
    cout<<"Podaj A: ";
    cin>>a;
    cout<<"Podaj B: ";
    cin>>b;
    cout<<"Podaj C: ";
    cin>>c;
    cout<<"Podaj D: ";
    cin>>d;
    if(a<b)
    {
        i=a;
        if(a<c)
        {
            i=a;
            if(a<d)
            {
                i=a;
            }else
            {
                i=d;
            }

        }else
        {
            i=c;
            if(c<d)
            {
                i=c;
            }else
            {
                i=d;
            }
        }
    }else
    {
        i=b;
        if(b<c)
        {
            i=b;
            if(b<d)
            {
                i=b;
            }else
            {
                i=d;
            }
        }else
        {
            i=c;
            if(c<d)
            {
                i=c;
            }else
            {
                i=d;
            }
        }
    }
    cout<<"Najmniejsza liczba to:"<<i;
    return 0;
}
