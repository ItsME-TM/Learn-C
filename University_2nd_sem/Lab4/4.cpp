#include <iostream>
#include <cmath>
using namespace std;
float pi = 3.14159;
float area (float r)
{
    float a;
    a = pi * pow(r, 2);
    return a;
}
int main()
{
    float r, ans;
    cout << "Enter the radius of the circle: ";
    cin >> r;
    ans = area(r);
    cout << "\nArea of the circle is: " << ans;
    return 0;
}