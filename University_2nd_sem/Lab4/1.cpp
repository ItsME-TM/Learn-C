#include <iostream>
using namespace std;
int main()
{
    int l, i, j, k, m, n, p;
    cout << " Enter the Number of lines: ";
    cin >> l;
    for(i = 1; i <= l; ++i)
    {
        n = i;
        p = 2 * (i - 1);
        for(j = 1; j <= l - i; ++j)
        {
            cout << "  ";
        }
        for(k = 1;k <= i; ++k)
        {
            cout << n << " ";
            n = n + 1;
        }
        for(m = 1; m <= i - 1; ++m)
        {
            cout << p << " ";
            --p;
        }
        cout << "\n";
    }
    return 0;
}
