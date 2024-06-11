#include <iostream>
using namespace std;
int main()
{
    float price_1, price_2, price_3, total, discount, final_price;
    string product_1, product_2, product_3;
    cout << "What is the name of the 1st product\n";
    cin >> product_1;
    cout << "What is its price?\n";
    cin >> price_1;
    cout << "What is the name of the 2nd product\n";
    cin >> product_2;
    cout << "What is its price?\n";
    cin >> price_2;
    cout << "What is the name of the 3rd product\n";
    cin >> product_3;
    cout << "What is its price?\n";
    cin >> price_3;
    cout << "Purches summery:\n";
    cout << product_1 << "\t:\tRs." << price_1 << endl;
    cout << product_2 << "\t:\tRs." << price_2 << endl;
    cout << product_3 << "\t:\tRs." << price_3 << endl;
    total = price_1 + price_2 + price_3;
    cout << "Total\t:\tRs." << total << endl;
    
    if (total >= 10000)
    {
        discount = total * 20/100;
        cout << "Discount\t:\tRs." << discount << endl;
    }
    else if (total <= 10000 && total >= 5000)
    {
        discount = total * 10/100;
        cout << "Discount\t:\tRs." << discount << endl;
    }
    else
    {
        discount = 0;
        cout << "No discount" << endl;
    }
    
    final_price = total - discount;
    cout << "Final Price\t:\tRs." << final_price;
    return 0;
}


