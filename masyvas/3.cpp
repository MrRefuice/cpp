#include <iostream>
using namespace std;
int main()
{
    int kiek = 8;
    int masyvas[kiek] = {5,6,9,8,7,4,5,6};
    cout << "Masyva sudaro " << kiek << " elementai." << endl;
    cout << "Masyvo elementai: ";
    for (int i = 0; i < kiek; i++)
    {
        cout << "[" << masyvas[i] << "] ";
    }
    
    return 0;
}