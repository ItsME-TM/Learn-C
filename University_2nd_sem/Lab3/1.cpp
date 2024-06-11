#include <iostream>
using namespace std;
int main()
{
    char media;
    float distance, time;
    cout << "Select the medium (A-Air, W-Water, S-Steel) : ";
    cin >> media;
    switch (media)
    {
        case 'A':
            cout << "Enter the distance in feet : ";
            cin >> distance;
            time = distance / 1100;
            cout << "\n" << "Time taken = " << time << " sec";
            break;
        case 'W':
            cout << "Enter the distance in feet : ";
            cin >> distance;
            time = distance / 4900;
            cout << "\n" << "Time taken = " << time << " sec";
            break;
        case 'S':
            cout << "Enter the distance in feet : ";
            cin >> distance;
            time = distance / 10600;
            cout << "\n" << "Time taken = " << time << " sec";
            break;
        default:
            cout << "Incorrect Input, Please check media!";
            break;
    }
    return 0;
}