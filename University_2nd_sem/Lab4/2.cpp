#include <iostream>
using namespace std;
int main()
{
    float n, i, sum;
    cout << "Enter the n value of the series: ";
    cin >> n;
    for(i = 1; i <= n; ++i)
    {
        sum = sum + 1/i;
    }
    cout << "Sum is: " << sum;
    return 0;
}