//48 psl 1 uzduotis Matas Reikertas
#include <iostream>
using namespace std;
int main ()
{
    int m, d;
    d = 0;
    cout << "Kiek berniukas rado saldainiu? "; cin >> m;
    while(m > 0){
    d = d + 1;
    m = m - d;
    }
    cout << "Berniukas suvalgys saldainius per " << d << " dienas" << endl;
    return 0;
}
