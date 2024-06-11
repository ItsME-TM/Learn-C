#include <iostream>
using namespace std;
int main()
{
    float number_1, number_2, number_3;
    cout << "Enter two numbers of last 2 digits of your index number" << endl;
    cin >> number_1;
    cin >> number_2;
    number_3 = (number_1 + number_2)/2;
    cout << "Average of " << number_1 << " and " << number_2 << " is " << number_3;
    return 0; 
}

