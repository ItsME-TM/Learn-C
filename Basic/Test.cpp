#include <iostream>  
using namespace std;
class Employee {
public:
    //int id; //data member (also instance variable)      
    // string name; //data member(also instance variable)  
    // float salary;
   
    void display(int id, string name, float salary)
    {
        cout << id << "  " << name << "  " << salary << endl;
    }
};
int main(void) {
    Employee e1 = Employee(); //creating an object of Employee   
   
    e1.display(101, "Sonoo", 890000);
    
    return 0;
}