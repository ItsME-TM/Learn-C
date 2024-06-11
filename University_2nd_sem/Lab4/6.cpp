#include <iostream>
using namespace std;
char op;
float calculator (float num1, float  num2)
{   
    float answer;
    switch (op)
    {
        case '+':
            answer = num1 + num2;
            break;
        case '-':
            answer = num1 - num2;
            break;
        case '*':
            answer = num1 * num2;
            break;
        case '/':
            answer = num1 / num2;
            break;
        default:
            break;
    }
    return answer;
}
int main()
{
    float num1, num2, ans;
    cout << "Enter the number1 : ";
    cin >> num1;
    cout << "Enter the number2 : ";
    cin >> num2;
    cout << "Enter the Opperator : ";
    cin >> op;
    if(op == '+' || op == '-' || op == '*' || op == '/')
    {
        ans = calculator(num1, num2);
        cout << "Answer : " << ans;
    }
    else
    {
        cout << "invalid Opperator!\n";
    }
}