#include <iostream>
using namespace std;
int divisor (int num1, int num2)
{
    int max1, max2, remain1, remain2, max;
    int n1 = 1, n2 = 1;
    if (num1 < num2)
    {
        if(num2 %  num1 == 0)
        {
            max2 = num1;
        }
        else
        {
            while(n1 < num1)
            {
                remain1 = num1 % n1;
                if(remain1 == 0)
                {
                    max1 = n1;
                    ++n1;
                }
                else
                {
                    ++n1;
                }
            }
            while(n2 <= max1)
            {
                remain2 = num2 % n2;
                if(remain2 == 0)
                {
                    max2 = n2;
                    ++n2;
                }
                else
                {
                    ++n2;
                } 
            } 
        }
        max = max2; 
    }
    else
    {
        if(num1 % num2 == 0)
        {
            max1 = num2;
        }
        else
        {
                while(n2 < num2)
            {
                remain2 = num2 % n2;
                if(remain2 == 0)
                {
                    max2 = n2;
                    ++n2;
                }
                else
                {
                    ++n2;
                }
                
            }
            while(n1 <= max2)
            {
                remain1 = num1 % n1;
                if(remain1 == 0)
                {
                    max1 = n1;
                    ++n1;
                }
                else
                {
                    ++n1;
                }
                
            }  
        }
        max = max1;
    }
    return max;
}

int main()
{
    int num1, num2, ans;
    cout << "Enter the 1st number : ";
    cin >> num1;
    cout << "\nEnter 2nd number : ";
    cin >> num2;
    ans = divisor(num1, num2);
    cout << "\nGreatest common divisor of [" << num1 << "," << num2 << "] is: " << ans;
    return 0;
}