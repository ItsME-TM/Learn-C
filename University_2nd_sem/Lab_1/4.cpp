#include <iostream>
using namespace std;
int main()
{
    float x , y, z, area;
    cout << "Enter the short base value of trapezoid: ";
    cin >> x;
    cout << "Enter the height value of trapezoid: ";
    cin >> y;
    cout << "Enter the long base value of trapezoid: ";
    cin >> z;
    area = (x + z)*y/2;
    cout << "Area of the trapezoid is " << area;
    return 0; 
}

