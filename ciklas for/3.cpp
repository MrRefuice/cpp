// Funkcija1
#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
    int x, y, t;
    int x1, x2;
    cout << "Iveskite intervalo pradzia: "; cin >> x1;
    cout << "Iveskite intervalo pabaiga: "; cin >> x2;
    cout << "_________________________________" << endl;
    cout << "        I           I      " << endl;
    for (x = x1; x <= x2; x++) {
      y = 7 * x * x + 5 * x - 3;
      t = 2 * x + 3;
      cout << setw (4) << fixed << x << "    I " << setw (6) << fixed << y << "    I   " << fixed << t << endl;
    }
    return 0;
}
