#include <iostream>
using namespace std;
int main()
{
    int a, masyvas[5] = {1, 6, 9, 7, 10};
    cout << "Iveskite kuri masyvo elementa norite paimti[0 - 4]: "; cin >> a;
    cout << a << " masyvas yra: " << masyvas[a] << endl;
    return 0;
}