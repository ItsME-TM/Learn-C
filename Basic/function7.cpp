#include<iostream>
using namespace std;
fuction = sum()
void prime(int num);
int main()
{
    int num;
    cout << "Enter the limit number: ";
    cin >> num;
    prime(num);
}
void prime(int num)
{
    int i, k = 0;
    i = num % 2;
    if(num == 2)
    {
        return 2;
    }
    else
    {
        for(j = 2; j < num; ++j)
        {
            i = num % j;
            if(i == 0)
            {
                ++k;
            }
        }    
    }
}
