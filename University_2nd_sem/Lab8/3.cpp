#include <iostream>
using namespace std;
class Module
{
    private:
    string moduleCode, moduleName;
    double  creditValue;
    double marks;
    char grade;
    
    public:

    void setValue(string mcode, string mName, string cValue)
    {
        moduleCode = mcode;
        moduleName = mName;
        creditValue = cValue;
    }

    void setMarks(double num)
    {
        marks = num;
    }

    string getModuleCode()
    {
        return moduleCode;
    }

    string getModuleName()
    {
        return moduleName;
    }

    double getCreditValue()
    {
        return creditValue;
    }

    double getMarks()
    {
        return marks;
    }

    char getGrade()
    {
        return grade;
    }

    char calculateGrade(double);
};

char Module :: calculateGrade(double marks)
{
    char numGrade;
    if(marks <= 100 || marks >= 75)
    {
        numGrade = 'A';
    }
    else if(marks < 75 || marks >= 60)
    {
        numGrade = 'B';
    }
    else if(marks < 60 || marks >= 45)
    {
        numGrade = 'C';
    }
    else if(marks < 45 || marks >= 35)
    {
        numGrade = 'D';
    }
    else if(marks < 35)
    {
        numGrade = 'E';
    }
    else
    {
        cout << "Invalid Mark";
    }
    return numGrade;
}

class Semester
{
    private:
    string semesterName;
    double MapGradeToGPV(int temp)
    {
        string grade = modules[temp].calculateGrade();
        if(grade == 'A')
        {
            return 4.2;
        }
        else if(grade == 'B')
        {
            return 3.5;
        }
        else if(grade == 'c')
        {
            return 2.7;
        }
        else if(grade == 'D')
        {
            return 2;
        }
        else if(grade == 'E')
        {
            return 0;
        }
    }

    public:
    void setSemesterName(string semname)
    {
        semesterName = semname;
    }

    string getSemesterName()
    {
        return semesterName;
    }

    double CalculateGPA()
    {
        double nue = 0, deno = 0, ans = 0;
        int i;
        for(i = 0; i < 3; i++)
         {
            nue = nue + MapGradeToGPV(i) * modules[i].getCreditValue();
            deno = deno + modules[i].getCreditValue();
        }
        ans = nue / deno;
        return ans;
    }
    Module modules[3];
};

class Student
{
    private:
    string name, regNo, email;

    public:
    Semester semesters[8];
    Student(string stuName, string stuRegNo, string stuEmail)
    {
        name = stuName;
        regNo = stuRegNo;
        email = stuEmail;
    }

    string getName()
    {
        return name;
    }

    string getRegNo()
    {
        return regNo;
    }

    string getEmail()
    {
        return email;
    }
};

int main()
{
    int num;
    Module m1;
    m1.setValue("EC2010", "Computer Programming", 3);
    Module m2;
    m2.setValue("MP2010", "Thermodynamics", 2.5);
    Module m3;
    m3.setValue("CE2020", "Engineering Mechanics", 3);
    Semester s;
    s.setSemesterName("EvenSemester -2");
    s.modules[0] = m1;
    s.modules[1] = m2;
    s.modules[2] = m3;
}