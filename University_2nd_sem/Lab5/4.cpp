#include <iostream>
using namespace std;
int summation (int n);
int main()
{
    int n;
    cout << "Enter the n number: ";
    cin >> n;
    cout << summation(n);
    return 0;
}
int summation (int n)
{
    int a, sum = 1, i;
    if(n > 1)
    {
        a = ((1 + n)*n) / 2;
        for(i = 0; i < n; ++i)
        {
            sum = sum * a;
            --a;
        }
        return (sum + summation(n -1));
    }
    else
    {
        return 1;
    }
}