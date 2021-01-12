#include <iostream>
using namespace std;
int main()
{
    int u1, u2, u3;
    cout << "Egles uzduociu patikra" << endl;
    cout << "Teisingas atsakymas zymimas 1, o neteisingas - 0." << endl;
    cout << "Ar Egle suverpe kuodeli?"; cin >> u1;
    cout << "Ar Egle sunesiojo gelezines klumpes?"; cin >> u2;
    cout << "Ar Egle iskepe pyraga nenaudojant indu?"; cin >> u3;
    if((u1 == 1) && (u2 == 1) && (u3 == 1)) {
    cout << "Zilvinas isleidzia Egle aplankyti namus." << endl;
    }
    else {
    cout << "Zilvinas neisleis Egles." << endl;
    }
    return 0;
}
