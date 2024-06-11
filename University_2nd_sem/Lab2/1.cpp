#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double x1, y1, x2, y2, midx, midy, answer;
    char oparetor;
    cout << "Input first coordinate" << endl;
    cout << "x component:\t  ";
    cin >> x1;
    cout << "y component:\t  ";
    cin >> y1;
    cout << "Input second coordinate" << endl;
    cout << "x component:\t  ";
    cin >> x2;
    cout << "y component:\t  ";
    cin >> y2;
    cout << "Input oppperator: ";
    cin >> oparetor;
    if (oparetor == 'D' || oparetor == 'd')
    {
        answer = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
        cout << "Answer  :" << answer;
    }
    else if (oparetor == 'M' || oparetor == 'm')
    {
        midx = (x1 + x2)/2;
        midy = (y1 + y2)/2;
        cout << "Answer  :(" << midx << "," << midy <<")";
    }
    else
    {
        cout << "Incorrect oparetor process terminated";
    }
    return 0;
}


