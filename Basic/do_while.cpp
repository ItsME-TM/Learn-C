#include<iostream>
using namespace std;
int main()
{
    int number, range;
    int b = 0;
    cout << "Enter the number: ";
    cin >> number;
    cout << "Enter the range: ";
    cin >> range;
    do
    {
        b = number % 2;
        if(b == 1)
        {
            cout << number << endl;
            number++;
        }
        else
        {
            number++;
        }
    }
    while (number <= range);
    return 0;
}