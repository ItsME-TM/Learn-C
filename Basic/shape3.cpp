#include <iostream>
using namespace std;
int main()
{
    int i , j, t;
    for (i = 1; i <= 5; i++)
    {
        for (t = 5; i <= t; t--)
        {
            cout << "   ";
        }
        for (j = 1; j <= (2 * i - 1); j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
    return 0;
}