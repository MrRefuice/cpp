// 39 psl. 1 uzduotis
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int laidininkuSk;
    cout << "Kiek yra lygiagreciai sujungtu laidininku? "; cin >> laidininkuSk;
    double laidininkai[laidininkuSk];
    double varzosSuma=0;
    double lygiagreciosVarzosKintamasis=0;
    for (int i = 0; i < laidininkuSk; i++)
    {
        cout << i+1 << " laidininko varza: "; cin >> laidininkai[i];
        varzosSuma += 1 / laidininkai[i];
    }
    lygiagreciosVarzosKintamasis = 1 / varzosSuma;
    cout << "Elektros grandines varza: " << setw(6) << fixed << setprecision(2) << lygiagreciosVarzosKintamasis << " ohm" << endl;
    return 0; 
}