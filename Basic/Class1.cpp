#include <iostream>
using namespace std;
class employee 
{
    public:
    double x;
    double y;
};
void print (employee p);
employee operator +(employee s1, employee s2)
{
    int x1 = s1.x + s2.x;
    employee temp;
    temp.x = x1;
    temp.y = 0;
    return temp;
}

int main()
{
    employee p1;
    p1.x = 1;
    p1.y = 2;
    print (p1);

    employee p2;
    p2.x = 3;
    p2.y = 4;
    print (p2);
    employee p3 = p1 + p2;
    print(p3);
} 

void print (employee p)
{
    cout << "(" << p.x << "," << p.y << ")" << endl;
}