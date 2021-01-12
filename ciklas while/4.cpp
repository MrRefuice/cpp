// Matas Reikertas, 48 psl. 3 uzduotis.
#include <iostream>
using namespace std;
int main()
{
    int n, m, d;
    d = 0;
    cout << "Dalybos skaicuokle" << endl;
    cout << "Koks skaicius? "; cin >> n;
    cout << "Is kiek daliname? "; cin >> m;
    while (n > m) {
    n = n - m;
    d = d + 1;
    }
    cout << "Dalmuo " << d << endl;
    cout << "Liekana " << n << endl;
    return 0;
}
