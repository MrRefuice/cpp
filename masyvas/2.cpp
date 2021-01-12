#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Kelis elementus norite ivesti? "; cin >> a;
    int masyvas[a];
    for (int i = 0; i < a; i++)
    {
        cout << i << " elementas: "; cin >> masyvas[i];
    }
    cout << "-----------------------" << endl;
    for (int i = 0; i < a; i++)
    {
        cout << i << " masyvo elementas: " << masyvas[i] << endl;
    }
    
    return 0;
}