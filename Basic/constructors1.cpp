#include <iostream>
using namespace std;
class Clock
{
    private:
    int hours, minutes, seconds;
    void setValue(int h, int m, int s)
    {
        hours = h;
        minutes = m;
        seconds = s;
    }

    public:
    Clock(int h, int m, int s)
    {
        setValue(h, m, s);
    }
    
    void print()
    {
        cout << "Hours : " << hours << endl;
        cout << "Minutes : " << minutes << endl;
        cout << "Seconds : " << seconds << endl;
    }
};
int main()
{
    int hours, minutes, seconds, num;
    cout << "Enter the hours: ";
    cin >> num;
    if (0 < num && num < 24)
    {
        hours = num;
    }
    else
    {
        hours = 0;
    }
    cout << "Enter the Minutes: ";
    cin >> num;
    if (0 < num && num < 59)
    {
        minutes = num;
    }
    else
    {
        minutes = 0;
    }
    cout << "Enter the Seconds: ";
    cin >> num;
    if (0 < num && num < 59)
    {
        seconds = num;
    }
    else
    {
        seconds = 0;
    }
    Clock c1(hours, minutes, seconds);
    c1.print();
}