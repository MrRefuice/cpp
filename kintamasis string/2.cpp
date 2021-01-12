// char palyginimas su string
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str = "dterAdtyew";
    char chr[50] = "adtreqd";
    // isvedimas paraidziui
    cout << "String: " << endl;
    for (int i = 0; i < str.size(); i++)
    {
        cout << "[" << str[i] << "] ";
    }
    cout << endl;
    cout << "Char: " << endl;
    for (int i = 0; i < 50; i++)
    {
        cout << "[" << chr[i] << "] ";
    }
    cout << endl;
    cout << "Isvada: String kintamasis pranasesnis uz char, nes jis dinamiskesnis, ko pasekoje sutaupome daugiau atminties." << endl;
    
    return 0;
}