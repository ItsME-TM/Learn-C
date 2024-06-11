#include <iostream>
using namespace std;
int main()
{   
    //num = user input number
    //large1 = largest number
    //large2 = second largest number
    float n = 11;
    float num, large1, large2 = 0;
    cout << "Enter the first number: ";
    cin >> large1;
    while ( n > 0)
    {
        cout << "Enter the next number: ";
        cin >> num;
        --n;
        if(num > large1)
        {   
            large2 = large1;
            large1 = num;
        }
        else if(num > large2)
        {
            large2 = num;
        }
        else
        {
            continue;
        }
    }
    cout << "\nLargest number : " << large1 << endl;
    cout << "Second largest number : " << large2 << endl;
    return 0;
}   