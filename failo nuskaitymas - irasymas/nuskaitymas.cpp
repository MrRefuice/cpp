#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int a;
    ifstream fin("failas.txt");
    fin >> a;
    cout << "Dokumente yra: " << a << " elementai. " << endl;
    int b[a];
    for (int i = 0; i < a; i++)
    {
        fin >> b[i];
    }
    fin.close();
    for (int i = 0; i < a; i++)
    {
        cout << i << " elementas yra: " << b[i] << endl;
    }
    
    return 0;
}