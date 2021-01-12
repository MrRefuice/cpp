// Matas Reikertas, III klase
#include <iostream>
using namespace std;
int main()
{
    int p, s, a, k, nepanaudotosPlytos;
    cout << "Kiek plytu skirta sienos statybai? "; cin >> p;
    a = 0; k = 0; s = 0;
    cout << "--------------------------------------------------" << endl;
    cout << "Pagrindo ilgis   Aukstis  Panaudotu plytu skaicius" << endl;
    cout << "--------------------------------------------------" << endl;
    while (a + 1 <= p - s) {
        a = a + 1;
        k = k + 1;
        s = s + a;
        cout << " " << a << "                 " << k << "                      " << s << endl;
    }
    cout << "--------------------------------------------------" << endl;
    cout << "Sienos pagrindo ilgis: " << a << endl;
    cout << "Sienos aukstis: " << k << endl;
    cout << "Sienos statybai panaudotu plytu skaicius: " << s << endl;
    nepanaudotosPlytos = p - s;
    cout << "Sienos statybai nepanaudota " << nepanaudotosPlytos << " plytos" << endl;

    return 0;
}
