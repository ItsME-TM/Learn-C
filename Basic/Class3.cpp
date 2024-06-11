#include <iostream>
using namespace std;
double pi = 3.1415;
class Circle
{
    public:
    double radius, perimter, area;
    string color;
    void setValue (double r, string c)
    {
        color = c;
        radius = r;
    }
    void getPerimeter ()    
    {
        perimter = 2 * pi * radius;
    }
    void getArea ()
    {
        area = pi * radius * radius;
    }
    void print()
    {
        cout << "\nColor : " << color << endl;
        cout << "Perimeter : " << perimter << endl;
        cout << "Area : " << area;
    }

};
int main()
{
    double radius;
    string color;
    cout << "Enter the radius : ";
    cin >> radius;
    cout << "Enter  the color : ";
    cin >> color;
    Circle c1;
    c1.setValue(radius, color);
    c1.getPerimeter();
    c1.getArea();
    c1.print();
}