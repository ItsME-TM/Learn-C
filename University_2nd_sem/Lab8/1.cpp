#include <iostream>
using namespace std;
class FieldYield
{
    private:
    int metricTon, kg;
    string  yearOfHarvest;
    public:
    FieldYield()
    {
        metricTon = 0;
        kg = 0;
        yearOfHarvest = "none";
    }
    FieldYield( string year, int ton, int kiloGram)
    {
        metricTon = ton;
        kg = kiloGram;
        yearOfHarvest = year;
    }
    int getWeightTon()
    {
        return metricTon;
    }
    int getWeightKg()
    {
        return kg;
    }
    string getYear()
    {
        return yearOfHarvest;
    }
    void displayDetails()
    {
        cout << "For the year " << yearOfHarvest << " yield is: " << metricTon << " metric ton and " << kg << " kg" << endl;
    }
};

void PrintTwoYearsYield(FieldYield yield1, FieldYield yield2)
    {
        int k = 0;
        int i = yield1.getWeightTon() + yield2.getWeightTon();
        int j = yield1.getWeightKg() + yield2.getWeightKg();
        if (j > 999)
        {
            k = j / 1000;
            j = j % 1000;
            i = i + k;
        }
        cout << "For the year " << yield1.getYear() << " , " << yield2.getYear() << " yield is: " << i << " metric ton and " <<  j << " kg" << endl;        
    }
FieldYield operator +  (FieldYield yield1,FieldYield yield2)
    {
        int k = 0;
        int i = yield1.getWeightTon() + yield2.getWeightTon();
        int j = yield1.getWeightKg() + yield2.getWeightKg();
        if (j > 999)
        {
            k = j / 1000;
            j = j % 1000;
            i = i + k;
        }
        string year = yield1.getYear() + " , " + yield2.getYear();
        FieldYield fieldYield(year, i, j);
        return fieldYield;
    }
int main()
{
    FieldYield yield3;
    FieldYield fieldYield1("2020", 1, 930);
    FieldYield fieldYield2("2021", 2, 347);
    fieldYield1.displayDetails();
    fieldYield2.displayDetails();
    PrintTwoYearsYield(fieldYield1 , fieldYield2);
    (fieldYield1 + fieldYield2).displayDetails();
    return 0;
}