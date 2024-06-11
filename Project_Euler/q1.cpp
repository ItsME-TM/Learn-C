#include <iostream>
using namespace std;
int main()
{
    int prod = 1;
    for (int i = 1; i < 1000; i++)
    {
        if ((i % 3 == 0) || (i % 5 == 0))
        {
            prod = prod + i;
        }
    }
    cout << "Product is : " << prod;
    return 0;
}