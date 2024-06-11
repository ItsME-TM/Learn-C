#include <iostream>
using namespace std;

int main()
{
    bool error = false;
    string message, crc, encoded="";
    
    cout << "Enter the message: ";
    cin >> message;
    
    cout << "Enter the CRC generator polynomial: ";
    cin >> crc;
    
    int message_length = message.length(), crc_length = crc.length();
    encoded += message;
    
    for (int i = 1; i < crc_length; i++)
    {
        encoded += "0";
    }
    
    for (int i = 0; i <= encoded.length() - crc_length; i++)
    {
        for(int j = 0; j < crc_length; j++)
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
    
    cout << "Transmitted message: " << message + encoded.substr(encoded.length() - crc_length + 1) << endl;
    
    // Receiver side
    string receiver_message;
    cout << "Enter the received message: ";
    cin >> receiver_message;
    
    encoded = "";
    message_length = receiver_message.length(), crc_length = crc.length();
    encoded += receiver_message;
    
    for (int i = 0; i <= encoded.length() - crc_length; i++)
        {
                for(int j = 0; j < crc_length; j++)
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
    
    for (char i : encoded.substr(encoded.length()- crc_length + 1))
    {
        if (i != '0')
        {
            error = true;
            break;
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
