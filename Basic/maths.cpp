#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double n, num = 0, five, temp;
    five = sqrt (5);
    for (double i = 0; i < 20; i++)
    {
        for (double j = 0; j < 20; j++)
        {
            
            for (double k = 0; k < 20: k++)
            {
                for (double l = 0; l < 20; l++)
                {
                    temp = (k - i) * (k - i) + (l - j) * (l - j);
                    n = sqrt (temp);
                    if (n == five)
                    {
                        continue;
                    }
                    num++;
                }                
            }
            
        }
    }
    cout << "Number of cordinates is : " << num;
    return 0;
}