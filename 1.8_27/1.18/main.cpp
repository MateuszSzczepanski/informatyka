#include <iostream>

using namespace std;
double a,b,c;
int main()
{
    cout << "Podaj dlugosc bokow:"<<endl;
    cout<<"a= ";
    cin>>a;
    cout<<"b= ";
    cin>>b;
    cout<<"c= ";
    cin>>c;
    if((a+b>c)&&(a+c>b)&&(b+c>a))
    {
        cout<<"Prawidlowe dlugosci bokow figury.";
    }else
    {
        cout<<"Nieprawidlowe dlugosci bokow figury.";
    }
    return 0;
}
