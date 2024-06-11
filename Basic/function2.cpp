#include <iostream>
using namespace std;
int biggest (int a, int b)
{
    int l;
    if (a < b)
    {
        l = b;
    }
    else
    {
        l = a;
    }
    return l;
}

int main()
{
    int num1, num2, ans;
    cout << "Enter the Numbers: " << endl;
    cin >> num1;
    cin >> num2;
    ans = biggest(num1, num2);
    cout << "Largest Number is: " << ans;
}