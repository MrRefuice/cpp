#include <iostream>
using namespace std;
int main()
{
    int k;
    cout << "Kas tvarko kambari?" << endl;
    cout << "Koks iskrito kauliuko skaicius? "; cin >> k;
    if ((k==1) || (k==3) || (k==5)){
    cout << "Kambari tvarko jaunelis" << endl;
    }
    else if ((k==2) || (k==4) || (k==6)) {
    cout << "Kambari tvarko vyresnelis" << endl;
    }
    else {
    cout << "Blogas kauliukas, ivyko klaida." << endl;
    }
    return 0;
}
