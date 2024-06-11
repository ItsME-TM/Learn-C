#include <iostream>
using namespace std;
int main()
{   //calory = number of calories burn in the minute
    //burn = number of calories burn after the time
    float calory, burn, i;
    calory = 4.2;   
    for (i = 1; i <= 7; ++i)
    {
        burn = calory * (5 + 5 * i);
        cout << "Calories burned after " << 5 + 5 * i << " : " << burn << endl;
    }
    return 0;
}