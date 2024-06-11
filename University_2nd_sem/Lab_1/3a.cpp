#include <iostream>
using namespace std;
int main()
{
    int reg_number;
    float marks;
    string name;
    cout << "Enter information," << endl;
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter last 3 digits of reg_number: ";
    cin >> reg_number;
    cout << "Enter marks of EC2010: ";
    cin >> marks;
    cout << "\n\nDisplaying Information," << endl;
    cout << "Name: " << name << endl;
    cout << "Reg no: " << reg_number << endl;
    cout << "Marks [EC2010]: " << marks;
    return 0;
}