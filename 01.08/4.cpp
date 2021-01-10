// 39psl. 3uzduotis
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int m, n;
    cout << "Iveskite intervalo pradzia: "; cin >> m;
    cout << "Iveskite intervalo pabaiga: "; cin >> n;
    cout << "Keliamieji metai yra: ";
    for (int i = m; i < n; i++)
    {
        if ((i % 4 == 0) && (i % 100 !=0) || (i % 400 == 0)) cout << " " << i << " ";
    }
    
    return 0;
}