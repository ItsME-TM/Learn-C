#include <iostream>
using namespace std;
void welcome (string name1, string name2);
int main()
{
    string name1, name2;
    cout << "Enter the First name: ";
    cin >> name1;
    cout << "Enter the Second name: ";
    cin >> name2;
    welcome (name1, name2);
    return 0;
}
void welcome (string name1, string name2)
{
    cout << "Welcome " << name1 << " " << name2 << " to the online registration portal.";
}