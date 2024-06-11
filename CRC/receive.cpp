#include <iostream>
using namespace std;
int main()
{
        bool error = false;
        string msg, crc, encoded="";
        cout <<"Enter the message: ";
        getline(cin,msg);
        cout << "Enter the crc genarator polynomial: ";
        getline(cin,crc);
        int m = msg.length(), n = crc.length();
        encoded += msg;
        for (int i = 0; i <= encoded.length() - n; i++)
        {
                for(int j = 0; j < n; j++)
                {
                        if(encoded[i + j] == crc[j])
                        {
                                encoded[i + j] = '0';
                        }
                        else
                        {
                                encoded[i + j] = '1';
                        }
                }
        }
        for (char i : encoded.substr(encoded.length() - n + 1))
        {
                if (i != '0')
                {
                        error = true;
                }
        }
        if (error == true)
        {
                cout << "Error in communication!";
        }
        else
        {
                cout << "No error!";
        }
        return 0;
}