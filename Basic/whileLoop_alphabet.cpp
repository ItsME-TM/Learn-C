#include <iostream>
using namespace std;
int main()
{
    char c = 'a';
    int b = 30;
    while (0 <= b)
    {
        cout << c << "\n";
        b--;
        c++;
    }
    return 0;
}