#include <iostream>
using namespace std;
int main()
{
    int n = 0;
    int i, j, temp1, temp2, temp1i, temp1j, temp2i, temp2j;
    int oneDArray[12] = {7, 12, 34, 5, 18, 21, 9, 1, 45, 36, 16, 22};
    int  newArray[3][4];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            newArray[i][j] = oneDArray[n];
            n = n + 1;
        }        
    }
    temp1 = newArray[0][0];
    temp2 = newArray[0][0];
    for(i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            cout << newArray[i][j] << "\t";
            if (temp1 < newArray[i][j])
            {
                temp1 = newArray[i][j];
                temp1i = i + 1;
                temp1j = j + 1;
            }
            else if(temp2 > newArray[i][j])
            {
                temp2 = newArray[i][j];
                temp2i = i + 1;
                temp2j = j + 1;
            }
            else;   
        }
        cout << endl;
    }
    cout << "Maximum number is: " << "oneDArray Matrix[" << temp1i << "][" << temp1j << "] = " << temp1 <<endl;
    cout << "Minimum number is: " << "oneDArray Matrix[" << temp2i << "][" << temp2j << "] = " << temp2 <<endl;
    return 0;
}