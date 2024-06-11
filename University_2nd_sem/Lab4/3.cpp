#include <iostream>
#include <cmath>
using namespace std;
float pi = 3.14159;
float radian (float ang_degree)
{
    float convert;
    convert = ang_degree * (pi / 180);
    return convert;
}
int main()
{
    float ang_degree,ang_radian, n, i, j, factorial = 1, out = 0, ans, sing = -1;
    cout << "Enter the Angle(in Degrees): ";
    cin >> ang_degree;
    ang_radian = radian(ang_degree);
    cout << "\nEnter the n Value: ";
    cin >> n;
    for(i = 2; i <= n; i = i + 2)
    {
        factorial = 1;
        for(j = 1; j <= i; ++j)
        {
            factorial *= j;
        }
        out +=  (sing * pow(ang_radian, i)) / factorial;
        sing = sing * (-1);
    }
    ans = 1 + out;
    cout << "\nCos value: " << ans;
    return 0;
}