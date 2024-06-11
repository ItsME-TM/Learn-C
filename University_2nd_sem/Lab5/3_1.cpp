#include <iostream>
using namespace std;
int main()
{
    int num, i = 2, sum = 0;
    cout << "Enter the Number: ";
    cin >> num;
    while (i <= num)
    {
        sum += i;
        i += 2;
    }
    cout << "sum of the even numbers is: " << sum;
    return 0;
}