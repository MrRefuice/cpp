// 39psl. 4uzduotis
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double grudai=0;
    double lang=1;
    for (int i = 0; i < 64; i++)
    {
        grudai += lang;
        lang *= 2; 
    }
    cout << "Is viso isradejas gaus " << setprecision(20) << grudai << " grudu." << endl;
    return 0;
} 
