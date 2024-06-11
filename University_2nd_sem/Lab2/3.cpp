#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a, b, c, ang_a, ang_b, ang_c, pi;
    pi = 3.14159265358979323846;
    cout << "Input first side,\ta:";
    cin >> a;
    cout << "Input second side,\tb:";
    cin >> b;
    cout << "Input third side,\tc:";
    cin >> c;
    if (a < b + c && b < a + c && c < a +b)
    {
        ang_a = acos((pow(b,2) + pow(c,2) - pow(a,2)) / (2 * b * c)) * 180 / pi;
        ang_b = acos((pow(a,2) + pow(c,2) - pow(b,2)) / (2 * a * c)) * 180 / pi;
        ang_c = acos((pow(a,2) + pow(b,2) - pow(c,2)) / (2 * a * b)) * 180 / pi;
        cout << "Opposite angle of a is, A:" << ang_a << endl;
        cout << "Opposite angle of b is, B:" << ang_b << endl;
        cout << "Opposite angle of c is, C:" << ang_c << endl;

        if (ang_a == 90 || ang_b == 90 || ang_c == 90)
        {
            cout << "The triangle is a right angle";
        }
        else if (ang_a > 90 || ang_b > 90 || ang_c > 90)
        {
            cout << "The triangle is an obtuse angle triangle";
        }
        else
        {
            cout << "The triangle is an acute angle triangle";
        }
    }
    else
    {
        cout << "The sides which were given as input cannot belong to a triangle";
    }   
    return 0;
}


