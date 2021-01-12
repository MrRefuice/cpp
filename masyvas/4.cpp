#include <iostream>
using namespace std;
int main()
{
    cout << "Skaiciu suma naudojant masyva" << endl;
    int a;
    cout << "Iveskite kiek norite naudoti elementu sumai: "; cin >> a;
    int masyvas[a];
    for (int i = 0; i < a; i++)
    {
        cout << "Iveskite " << i << " elementa"; cin >> masyvas[i];
    }
    int suma = 0;
    for (int i = 0; i < a; i++)
    {
        suma += masyvas[i];
    }
    double vidurkis = (double)suma / a;
    cout << "Visu skaiciu suma bus: " << suma << endl;
    cout << "Visu skaiciu vidurkis bus: " << vidurkis << endl; 
    return 0;
}