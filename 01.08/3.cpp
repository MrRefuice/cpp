// 39 psl. 2 uzduotis
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int vaikuSk;
    cout << "Iveskite mokiniu skaiciu: "; cin >> vaikuSk;
    int ugiai[vaikuSk];
    double ugiuSuma, uVid;
    for (int i = 0; i < vaikuSk; i++)
    {
        cout << "Iveskite " << i+1 << " vaiko ugi (cm): "; cin >> ugiai[i];
        ugiuSuma += ugiai[i];
    }
    uVid = ugiuSuma / vaikuSk;
    cout << "Vidutinis vaiku ugis: " << setw(6) << fixed << setprecision(2) << uVid << " cm." << endl;
    return 0; 
}