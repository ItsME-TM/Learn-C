#include <iostream>
using namespace std;
float sum(float num3, float num2);
int main()
{
    float num1, num2, ans;
    cout << "Enter the number1: ";
    cin >> num1;
    cout << "Enter the number2: ";
    cin >> num2;
    ans = sum(num1, num2);
    cout << "Answer: " << ans;
}
float sum(float num3, float num2)
{
    float out;
    out = num3 + num2;
    return out;
}