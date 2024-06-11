#include<iostream>
using namespace std;

int main()
{
    int i, sum = 0, max = 0;
    int marks[5] = {23,45,56,76,44};
    for(i = 0; i < 5; ++i)
    {
        sum += marks[i];
        if(max < marks[i])
        {
            max = marks[i];
        }
    }
    cout << "Sum: " << sum;
    cout << "\nMax: " << max;
    return 0;
}