// slaptazodzio patikra
#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{
    bool didz = 0, maz = 0, skaic = 0, simb = 0;
    string slaptazodis;
    cout << "Jusu slaptazodis turi sudaryti bent: 1 didzioji ir mazoji raide, skaicius ir turi buti ne trumpesnis kaip 6 simboliai." << endl;
    cout << "Iveskite slaptazodi: ";
    getline(cin, slaptazodis);
    for (int i = 0; i < slaptazodis.size(); i++)
    {
        if(isupper(slaptazodis[i]))
        {
            didz = true;
        }
        if(islower(slaptazodis[i]))
        {
            maz = true;
        }
        if(isdigit(slaptazodis[i]))
        {
            skaic = true;
        }
        if(slaptazodis.size() >= 6)
        {
            simb = true;
        }
    }
    if(didz == true && maz == true && skaic == true && simb == true)
    {
        cout << "Jusu slaptazodis teisingas: " << slaptazodis << endl;
    }
    else {
        cout << "Jusu slaptazodis neteisingas: " << slaptazodis << endl;
    }
    
    return 0;
}