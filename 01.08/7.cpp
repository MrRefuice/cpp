// 39psl. 6uzduotis
#include <iostream>
using namespace std;
int main()
{
    int n, k, eile=0, visosKedes=0;
    cout << "Kiek bus eiliu? "; cin >> n;
    cout << "Kiek bus kedziu pirmoje eileje? "; cin >> k;
    eile += k;
    visosKedes += k;
    for (int i = 1; i < n; i++)
    {
        eile += 2;
        visosKedes += eile;
        cout << visosKedes << endl;
    }
    cout << "Is viso reikia uzsakyti: " << visosKedes << " kedziu." << endl;
    return 0;
}