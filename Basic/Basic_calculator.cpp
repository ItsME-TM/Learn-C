#include <iostream>
using namespace std;
int main()
{
    float number_1, number_2, answer;
    char oparetor;
    cout << "Enter the number 1: ";
    cin >> number_1;
    cout << "Enter the oparetor: ";
    cin >> oparetor;
    cout << "Eneter the number 2: ";
    cin >> number_2;
    if (oparetor == '+')
    {
        answer = number_1 + number_2;
        cout << answer;
    }
    else if (oparetor == '-')
    {
        answer = number_1 - number_2;
        cout << answer;
    }
    else if (oparetor == '*')
    {
        answer = number_1 * number_2;
        cout << answer;
    }
    else if (oparetor == '/')
    {
        answer = number_1 / number_2;
        cout << answer;
    }
    else
    {
        cout << "invalid number or oparetor,please ckeck";
    }
    return 0;
}