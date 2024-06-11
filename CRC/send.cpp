#include <iostream>
using namespace std;
int main()
{
        bool error = false;
        string msg, crc, encoded="";
        cout <<"Enter the message: ";
        cin >> msg;
        cout << "Enter the crc genarator polynomial: ";
        cin >> crc;
        int m = msg.length(), n = crc.length();
        encoded += msg;
        for (int i = 1; i < n; i++)
        {
                encoded += "0";
        }
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
        cout << msg + encoded.substr(encoded.length() - n + 1) << endl;
        return 0;
}