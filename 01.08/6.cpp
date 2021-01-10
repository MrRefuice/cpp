// 39psl. 5uzduotis
#include <iostream>
using namespace std;
int main()
{
    int m, n, k=0;
    cout << "Iveskite bilietu intvervalo pradzia: "; cin >> m;
    cout << "Iveskite biletu intervalo pabaiga: "; cin >> n;
    for (int i = m; i < n; i++)
    {
        if (i/1000==i%1000){
            k++;
            cout << "laimingieji: " << i << endl;
        }
    }
    cout << "Laiminguju buvo: " << k << endl;
    return 0;
} 
