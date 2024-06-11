#include <iostream>
using namespace std;
int main()
{
    int a, b, c, sum, asqrd, bsqrd, csqrd, prod;
    sum = 1000;
    for (a = 1; a < sum / 3; a++)
    {
        for (b = 2; b < sum / 2; b++)
        {
            c = sum - ( a + b);
            asqrd = a * a;
            bsqrd = b * b;
            csqrd = c * c;
            if (csqrd == (asqrd + bsqrd))
            {
                prod = a * b * c;
                cout << "a b c " << a << " " << b << " " << c;
                cout << "\nThe product is : " << prod;
            }
        }
    }
    return 0;
}