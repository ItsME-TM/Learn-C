#include <iostream>
using namespace std;
class GateController
{
    public:
    int payed, nonpayed ;
    double money;
    GateController()
    {
        payed = 0;
        nonpayed = 0;
        money = 0;
    }
    void addPayingVehicle()
    {
        payed = payed + 1;
        money = money + 350;
        cout << "Added a paying vehicle\n" << endl;
    }
    void addNonPayingVehicle()
    {
        nonpayed = nonpayed + 1;
        cout << "Added a non paying vehicle\n" << endl;
    }
    void displayCurrentStatus()
    {
        cout << "\nCurrent Status" << endl;
        cout << "Number of total paying vehicles: " << payed << endl;
        cout << "Number of total non-paying vehicle: " << nonpayed << endl;
        cout << "Total amount collected: " << money << "\n" << endl;
    }
};
int main()
{
    int i = 0;
    char  choice;
    GateController gate1;
    while(true)
    {
        cout << "Enter 'p' to add a paying vehicle " << endl;
        cout << "Enter 'N' to add a non-paying vehicle " << endl;
        cout << "Enter 'D' to show current summary " << endl;
        cout << "Enter your choice: " << endl;
        cin >> choice;
        switch (choice)
        {
            case 'P':
                gate1.addPayingVehicle();
                ++i;
                break;
            case 'N':
                gate1.addNonPayingVehicle();
                ++i;
                break;
            case 'D':
                gate1.displayCurrentStatus();
                break;
            default:
                cout << "Invalid Opperator\n";
                break;
        }
    }
    return 0;
}