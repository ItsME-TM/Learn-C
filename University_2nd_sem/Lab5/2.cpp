#include <iostream>
using namespace std;
int cubic_value (int number);
double cubic_value (double number);
int main()
{
    float number;
    cout << "Enter the number: ";
    cin >> number;
    cout << "Cube value of " << number << " is: " << cubic_value (number);
    return 0;
}
int cubic_value (int number)
{
    int a;
    a = number * number * number;
    return a;
}
double cubic_value (double number)
{
    double a;
    a = number * number * number;
    return a;
}