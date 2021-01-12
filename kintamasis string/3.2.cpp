// string kintamojo isvedimas i faila
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main()
{
    int a;
    cout << "Kiek norite prideti skirtingu duomenu? "; cin >> a;
    string tekstas;
    ofstream fout("duomenys2.txt");
    for (int i = 0; i < a; i++)
    {
        cout << "Iveskite " << i + 1 << " stulpeli: ";
        cin >> ws;
        getline(cin, tekstas);
        fout << tekstas << endl;
    }
    fout.close();
    cout << "Duomenys issaugoti." << endl;
    system("duomenys2.txt");
    return 0;
}