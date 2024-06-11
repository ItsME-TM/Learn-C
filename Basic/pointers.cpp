#include <iostream>
using namespace std;

int main() {
    int y = 40;
    int* ptr = &y;
    cout << ptr << endl;
    cout << *ptr<< endl; // prints 10
    *ptr = 20;
    cout << ptr << endl;    
    cout << y << endl;
    y = 30;
    cout << *ptr << endl;
    cout << ptr << endl;
    return 0;
}