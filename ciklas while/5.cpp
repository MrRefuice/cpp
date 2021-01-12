// Matas Reikertas, 48 psl. 4 uzduotis.
#include <iostream>
using namespace std;
int main()
{
    int n, d=0;
    cout << "Kiek kaimynas paskolino pinigu? "; cin >> n;
    while (d <= n) {
    d = (d + 1) + d;
    }
    cout << "Palukanos bus " << d-n << endl;
    return 0;
}
