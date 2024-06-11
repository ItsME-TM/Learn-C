#include <iostream>
using namespace std;
int main()
{
    int n, num1, num2, num3;
    cout << "N\t10*N\t100*N\t1000*N" <<endl;
    cout << "------------------------------" << endl;
    for (n = 1; n <= 5; ++n)
    {
        num1 = n * 10;
        num2 = n * 100;
        num3 = n * 1000;
        cout << n << "\t" << num1 << "\t" << num2 << "\t" << num3 << endl;
    }
    return 0;
}