#include <iostream>
using namespace std;
int main()
{
    string brand, model, engine_cc, transmission, fule_type, mileage, number_of_seats, colour;
    cout << "What is the Brand of the vehicle: ";
    cin >> brand;
    cout << "What is the Model of the vehicle: ";
    cin >> model;
    cout << "What is the Engine CC: ";
    cin >> engine_cc;
    cout << "Type of the Transmission(Auto or not Auto): ";
    cin >> transmission;
    cout << "What is the Fule type of the vehicle: ";
    cin >> fule_type;
    cout << "What is the mileage of the vehicle: ";
    cin >> mileage;
    cout << "Number of the seats in the vehicle: ";
    cin >> number_of_seats;
    cout << "What is the colour of the vehicle: ";
    cin >> colour;
    cout << "\tDetails of the Vehicle\n";
    cout << "\t--------------------------\n";
    cout << "\tBrand\t\t:\t" << brand;
    cout << "\n\tModel\t\t:\t" << model;
    cout << "\n\tEngine CC\t:\t" << engine_cc;
    cout << "\n\tTransmission\t:\t" << transmission;
    cout << "\n\tFule type\t:\t" << fule_type;
    cout << "\n\tMileage \t:\t" << mileage;
    cout << "\n\tNumber of seats\t:\t" << number_of_seats;
    cout << "\n\tColour\t\t:\t" << colour;
    return 0;
}


