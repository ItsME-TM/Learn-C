#include <iostream>
using namespace std;
int odd (int i);
int main()
{
    int num1, num2, ans, i;
    cout << "Enter the beginning number: ";
    cin >> num1;
    cout << "Enter the ending number: ";
    cin >> num2;
    cout << "The Odd numbers are: ";
    for(i = num1; i <= num2; i++)
    {
        ans = odd (i);
        cout << " " << ans;
    }
    return 0;
}

int odd (int i)
{
    int a, out;
    a = i % 2;
    if (a == 1)
    {
        out = i;
    }
    else
    return out;
}