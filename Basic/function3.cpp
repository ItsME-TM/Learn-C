#include<iostream>
using namespace std;
void greet(string name)
{
    cout<< "Welcome to computer Programming " << name << "!" <<endl;
}
int main()
{   
    string name;
    cout << "Enter the name: ";
    cin >> name;
    greet(name);
}