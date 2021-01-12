#include <iostream>
using namespace std;
int main ()
{
    int m, a, s = 0;
    cout << "Iveskite virves ilgi: "; cin >> m;
    for (int i = 1; i <= m; i++)
     {
             a = (m -  2 * i) / 2;
             if (i * a > s)
             s = i * a;
    }

    cout << "Ukininkas gali daugiausiai pazymeti " << s << " kv. m. plota.";

  return 0;
}
