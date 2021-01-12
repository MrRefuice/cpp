// Matas Reikertas, 48 psl. 5 uzduotis.
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, m;
    cout << "n= "; cin >> n;
    while (n > 0){
    m = sqrt(n);
    n = n - (m*m);
    cout << m*m << " ";
    }
    return 0;
}
