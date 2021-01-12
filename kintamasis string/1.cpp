#include <iostream>
#include <string>
using namespace std;
int main()
{
    string sakinys;
    cout << "Iveskite sakini (2+ zodziai): ";
    getline(cin, sakinys);
    cout << "String kintamasis: " << sakinys << endl;
    return 0;
}