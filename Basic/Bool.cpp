#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool isPrimeNumber (int num,int divider);

int main ()
{
    for (int n=2;n<=30;n++)
    {
        if (isPrimeNumber(n,(n-1))==true)
        {
            cout << n << ",";
        }
    }
    cout << "...";
}

bool isPrimeNumber (int num,int divider)
{
    if (divider==1)
    {
        return true;
    }

    if (num%divider==0)
    {
        return false;
    }

    return isPrimeNumber(num,divider-1);

}