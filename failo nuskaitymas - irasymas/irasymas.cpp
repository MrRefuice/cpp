#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int a;
    cout << "Kelis elementus norite ivesti i faila? "; cin >> a;
    int b[a];
    ofstream fout("failas.txt");
    fout << a << endl;
    for (int i = 0; i < a; i++)
    {
        cout << "Iveskite " << i << " elementa: "; cin >> b[i];
        fout << b[i] << endl;
    }
    fout.close();
    cout << "Duomenys irasyti." << endl;
    return 0;
}