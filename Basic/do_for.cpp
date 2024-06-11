#include <iostream>
using namespace std;
int main()
{
    int x, y = 0;
    cout << "Enter the number: ";
    cin >> y;
    for(int x = 1; x < y; x += 2)
    {
       cout << x;
    }
    return 0;
}