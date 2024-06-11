#include <iostream>
using namespace std;
int Sum_Of_Even (int num);
int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    cout << "Sum of the even numbers: " << Sum_Of_Even (num);
    return 0;
}
int Sum_Of_Even (int num)
{
    int j;
    if (num > 2)
    {
        j = num % 2;
        if (j == 0)
        {
            return (num + Sum_Of_Even (num - 2));
        }
        else
        {
            Sum_Of_Even (num - 1);
        }
    }
    else
    {
        return 2;
    }
}