#include <iostream>
using namespace std;
int main()
{
    int salary;
    cout << "Enter the salary: ";
    cin >> salary;
    if (salary <= 10000)
        cout << "Your salary code is D";
    else if (10000 < salary && salary <= 25000)
        cout << "Your salary code is C";
    else if (25000 < salary && salary <= 50000)
        cout << "Your salary code is B";
    else
        cout << "Your salary code is A";
    return 0;    
}