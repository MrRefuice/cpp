// Matas Reikertas, 48 psl. 2 uzduotis.
#include <iostream>
using namespace std;
int main()
{
    int p, t, ind, s;
    t = 0;
    cout << "Palukanu skaiciuokle" << endl;
    cout << "Koks buvo pradinis indelis? "; cin >> ind;
    cout << "Kiek bankas moka palukanu? "; cin >> p;
    cout << "Kokia turi buti galutine suma? "; cin >> s;
    while (ind < s){
    ind = ind + ind / 100 * p;
    t = t + 1;
    }
    cout << "Uztruks " << t << " metus" << endl;
    return 0;
}
