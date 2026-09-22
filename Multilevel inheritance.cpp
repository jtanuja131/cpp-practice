//Multilevel Inheritance

#include <iostream>
using namespace std;

class Student
{
protected:
    string name, className;
    int rollNo;

public:
    void getStudent()
    {
        cout << "Enter Student Name: ";
        cin >> name;

        cout << "Enter Roll No: ";
        cin >> rollNo;

        cout << "Enter Class: ";
        cin >> className;
    }
};

class Marks : public Student
{
protected:
    float m1, m2, m3, m4, m5;

public:
    void getMarks()
    {
        cout << "Enter Marks of 5 Subjects: ";
        cin >> m1 >> m2 >> m3 >> m4 >> m5;
    }
};
class Result : public Marks
{
protected:
    float total, percentage;
    string result;

public:
    void calculate()
    {
        total = m1 + m2 + m3 + m4 + m5;
        percentage = total / 5;

        if (percentage >= 40)
            result = "PASS";
        else
            result = "FAIL";
    }

    void display()
    {
        cout << "\n========== STUDENT DETAILS ==========\n";
        cout << "Name       : " << name << endl;
        cout << "Roll No    : " << rollNo << endl;
        cout << "Class      : " << className << endl;
        cout << "Subject 1  : " << m1 << endl;
        cout << "Subject 2  : " << m2 << endl;
        cout << "Subject 3  : " << m3 << endl;
        cout << "Subject 4  : " << m4 << endl;
        cout << "Subject 5  : " << m5 << endl;
        cout << "Total      : " << total << "/500" << endl;
        cout << "Percentage : " << percentage << "%" << endl;
        cout << "Result     : " << result << endl;
        cout << "=====================================\n";
    }
};

int main()
{
    Result r;
    r.getStudent();
    r.getMarks();
    r.calculate();
    r.display();

    return 0;
}

//output
Enter Student Name: Tanuja
Enter Roll No: 93
Enter Class: SY
Enter Marks of 5 Subjects: 78 86 75 69 80

========== STUDENT DETAILS ==========
Name       : Tanuja
Roll No    : 93
Class      : SY
Subject 1  : 78
Subject 2  : 86
Subject 3  : 75
Subject 4  : 69
Subject 5  : 80
Total      : 388/500
Percentage : 77.6%
Result     : PASS
