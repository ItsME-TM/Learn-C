#include<iostream>
using namespace std;
int main()
{
    int x ,t = 0;
    do
    {
        cout << "Enter the number: ";
        cin >> x;
        t += x;
    }
    while (x != 0);
    cout << t;
    return 0;
}