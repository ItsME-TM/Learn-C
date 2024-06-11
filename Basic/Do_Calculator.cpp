#include <iostream>
using namespace std;
int main()
{
    float num1, num2, answer;
    char opperator, choice;
    do
    {
        cout << "Enter the first operand: ";
        cin >> num1;
        cout << "Enter the second operand: ";
        cin >> num2;
        cout << "Enter the Opperator: ";
        cin >> opperator;

        switch ( opperator )
        {
            case '+':
                answer = num1 + num2;
                cout << num1 << " " << opperator << " " << num2 << " = " << answer << endl;
                break;
            case '-':
                answer = num1 - num2;
                cout << num1 << " " << opperator << " " << num2 << " = " << answer << endl;
                break;
            case '*':
                answer = num1 * num2;
                cout << num1 << " " << opperator << " " << num2 << " = " << answer << endl;
                break;
            case '/':
                answer = num1 / num2;
                cout << num1 << " " << opperator << " " << num2 << " = " << answer << endl;
                break;
            default:
                cout << "Invalid Opperator!\n";
                break;
        }
        cout << "If you want to continue press Y : ";
        cin >> choice;
        cout << "\n";
    }
    while (choice == 'Y');
    return 0;
}