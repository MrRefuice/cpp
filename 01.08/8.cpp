// 2.5 papildymas naudojant duomenu faila.
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
int main()
{
    int laidininkuSk;
    ifstream fin("duomenys.txt");
    fin >> laidininkuSk;
    double varza[laidininkuSk];
    double varzosSuma=0;
    for (int i = 0; i < laidininkuSk; i++)
    {
        fin >> varza[i];
        varzosSuma += varza[i];
    } 
    fin.close();
    cout << "Elektros grandines varza: " << setw(6) << fixed << setprecision(2) << varzosSuma << " ohm." << endl;
    return 0;
}