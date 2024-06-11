#include <iostream>
using namespace std;
int main()
{
    int numbers[10], num, i, count, j;
    int *ptri = &i;
    for (i = 0; i < 10; i++)
    {
        cout << "Enter the number: ";
        cin >> num;
        numbers[i] = num;
    }
    cout << "Input: ";
    for (i = 0; i < 10; i++)
    {
        cout << numbers[*ptri] << " ";
    }
    cout << "\nUnique elements: ";
    for(i = 0; i < 10; i++)
    {
        count = 0;
        for(j = 0; j < 10; j++)
        {
            if (numbers[i] == numbers[j])
            {
                count++;
            }
        }
        if (count == 1)
        {
            cout << numbers[i] << " ";
        }
    }
    return 0;
}