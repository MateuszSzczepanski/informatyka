#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    int p,q,i,l,x,y;
    cout << "Podaj poczatek zakresu: ";
    cin >> p;
    cout << "Podaj koniec zakresu: ";
    cin >> q;
    cout << "Podaj liczbe liczb do wylosowania: ";
    cin >> i;
    srand(time(NULL));
    y=1;
    for(x=0;x<i;x++)
    {
        l=p+rand()%(q-p+1);
        cout << "Liczba " << y <<": " << l <<endl;
        y++;
    }
    return 0;
}
