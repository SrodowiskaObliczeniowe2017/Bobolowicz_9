#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <ctime>

using namespace std;

int Dot, Yakko, Wakko, x;
int main()
{
    //Zgodnie z tre�ci� zadania ka�dy z tr�jki przyjaci� ma rzuci� kostk�, zwyci�ca ma wybra� docelowe miejsce wakacji, w przypadku remis�w zawsze uprzywilejowana jest Dot.

    Dot = 72 * 100/ 216;
    Yakko = 72 * 100/ 216;
    Wakko = 72 * 100/ 216;
    x = Dot + 18 * 100/ 216;
    cout << "Szansa Dot na wyjazd do Transylwani wynosi "<< x;
    cout <<"%";
    return 0;
}
