// Elektros laidininku varzos skaiciavimas
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int laidininkuSk;
    cout << "Iveskite kiek bus laidininku?: "; cin >> laidininkuSk;
    double varza[laidininkuSk];
    double varzosSuma=0;
    for (int i = 0; i < laidininkuSk; i++)
    {
        cout << "Iveskite " << i+1 << " laidininko varza: "; cin >> varza[i];
        varzosSuma += varza[i]; 
    }
    cout << "Elektros grandines varza: " << setw(6) << fixed << setprecision(2) << varzosSuma << endl;
    return 0;
}