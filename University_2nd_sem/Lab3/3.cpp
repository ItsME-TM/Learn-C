#include <iostream>
using namespace std;
int main()
{
    float l, km, avg;//l = liters, km = Kilomters
    float total_avg, final_avg, rounds = 0;//rounds = number of testings
    char choice;
    do
    {   
        cout << "Enter the liters used: ";
        cin >> l;
        cout << "Enter the Kilometers driven: ";
        cin >> km;
        avg = km / l;
        cout << "The Kilometers / Liter for this tank was " << avg <<endl;
        cout << "Do you want to add more records? (press X to end): ";
        cin >> choice;
        rounds = rounds + 1;
        total_avg = total_avg + avg;
    }
    while(choice != 'X');
    final_avg = total_avg / rounds;
    cout << "\nThe Overall average Kilometers/Liter was " << final_avg;
}