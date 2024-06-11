#include <iostream>
using namespace std;
void convertValue(int &money,int &hundreds,int &fifties,int &tens,int &fives,int &twos,int &ones)
{
    int tempMoney;
    tempMoney = money;
    while (tempMoney > 0)
    {
        while(tempMoney >= 100)
        {
            tempMoney = tempMoney - 100;
            hundreds++;
        }
        while(tempMoney >= 50)
        {
            tempMoney = tempMoney - 50;
            fifties++;
        }
        while(tempMoney >= 10)
        {
            tempMoney = tempMoney - 10;
            tens++;
        }
        while(tempMoney >= 5)
        {
            tempMoney = tempMoney - 5;
            fives++;
        }
        while(tempMoney >= 2)
        {
            tempMoney = tempMoney - 2;
            twos++;
        }
        while(tempMoney >= 1)
        {
            tempMoney = tempMoney - 1;
            ones++;
        }
    }
}
int main()
{
    int money = 0, hundreds = 0, fifties = 0, tens = 0, fives = 0, twos = 0, ones = 0;
    cout << "Enter the amount of money: ";
    cin >> money; 
    convertValue(money, hundreds, fifties, tens, fives, twos, ones);
    cout << "Given amount " << money << " has " << hundreds <<" hundreds, " << fifties << " fifties, " << tens << " tens, " << fives << " fives, " << twos << " twos and " << ones << " ones.";
    return 0;
}