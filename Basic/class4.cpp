Student Array
#include <iostream>
#include <string>
using namespace std;

class Student {
public:
int Id, i, n;
string Name;
double Marks, max = 0;

void SelVals(int id, string name, double marks)
{
Id = id;
Name = name;
Marks = marks;
}

char CalGrade()
{
if (Marks >= 50)
{
return 'P';
}
return 'F';
}

void Print()
{
cout<< Name << "," << Id << "," << Marks << ",";
cout << CalGrade() << endl;
}
int Max ()
{
    for (i = 0; i < 4; i++)
    {
        if (max < s[i].Marks)
        {
            max = s[i].Marks
        }
    }
    i = n;
    s[n].Print();
}
};

int main()
{
const int size = 4;
Student s[size];

s[0].SelVals(228, "Hvamstad", 30);
s[1].SelVals(289, "Margrete", 70);
s[2].SelVals(300, "Francesco", 98);
s[3].SelVals(270, "Manolis", 55);

for (int i = 0; i < 4; i++)
{
s[i].Print();
}

}
