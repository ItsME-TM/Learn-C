#include <iostream>
using namespace std;
int main()
{
    string index_num, subject_1, subject_2, subject_3;
    float sub1_marks, sub2_marks, sub3_marks, total, avarage;
    cout << "Please enter your ID number :";
    cin >> index_num;
    cout << "Please enter the subject 1: ";
    cin >> subject_1;
    cout << "Please enter the marks: ";
    cin >> sub1_marks;
    cout << "Please enter the subject 2: ";
    cin >> subject_2;
    cout << "Please enter the marks: ";
    cin >> sub2_marks;
    cout << "Please enter the subject 3: ";
    cin >> subject_3;
    cout << "Please enter the marks: ";
    cin >> sub3_marks;
    cout << "\n\nYour ID number is :" << index_num << endl;
    cout << "\tsunject\t\tMarks" << endl;
    cout << "\t------------------------" << endl;
    cout << "\t" << subject_1 << "\t\t" << sub1_marks << endl;
    cout << "\t" << subject_2 << "\t\t" << sub2_marks << endl;
    cout << "\t" << subject_3 << "\t\t" << sub3_marks << endl;
    total = sub1_marks + sub2_marks + sub3_marks;
    avarage = total/3;
    cout << "\nTotal =" << total;
    cout << "\nAvarage =" << avarage;
    return 0;
}

