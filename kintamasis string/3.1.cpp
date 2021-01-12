// string kintamojo isvedimas i faila
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main()
{
    string tekstas;
    cout << "Sukurkite norima teksta: ";
    getline(cin, tekstas);
    ofstream fout("duomenys.txt");
    fout << tekstas;
    fout.close();
    cout << "Duomenys issaugoti." << endl;
    system("duomenys.txt");
    return 0;
}