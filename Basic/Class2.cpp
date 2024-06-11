#include <iostream>
using namespace std;
class Point 
{
    public:
    double x;
    double y;
};
void print (Point p)
{
    cout << "(" << p.x << "," << p.y << ")" << endl;
}
void offset (Point &p, double x, double y)
{
    p.x += x;
    p.y += y;
}
int main()
{
    Point p1;
    p1.x = 1;
    p1.y = 2;
    print (p1);
    offset (p1, 1, 2);
    print (p1);

    Point p2;
    p2.x = 3;
    p2.y = 4;
    print (p2);
    offset (p2, 1, 2);
    print (p2);
}