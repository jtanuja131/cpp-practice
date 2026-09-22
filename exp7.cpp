//exp 7
#include <iostream>
using namespace std;

// Base Class
class Employee
{
protected:
    int employeeID;
    string employeeName;
    string department;

public:
    void getEmployeeDetails()
    {
        cout << "Enter Employee ID: ";
        cin >> employeeID;

        cout << "Enter Employee Name: ";
        cin >> employeeName;

        cout << "Enter Department: ";
        cin >> department;
    }

    void displayEmployeeDetails()
    {
        cout << "\nEmployee ID   : " << employeeID;
        cout << "\nEmployee Name : " << employeeName;
        cout << "\nDepartment    : " << department;
    }
};

// Derived Class 1
class TeachingStaff : public Employee
{
private:
    string subject;
    string qualification;

public:
    void getTeachingDetails()
    {
        getEmployeeDetails();

        cout << "Enter Subject: ";
        cin >> subject;

        cout << "Enter Qualification: ";
        cin >> qualification;
    }

    void displayTeachingDetails()
    {
        cout << "\n\n--- Teaching Staff Details ---";
        displayEmployeeDetails();

        cout << "\nSubject       : " << subject;
        cout << "\nQualification : " << qualification;
    }
};

// Derived Class 2
class NonTeachingStaff : public Employee
{
private:
    string designation;
    float workingHours;

public:
    void getNonTeachingDetails()
    {
        getEmployeeDetails();

        cout << "Enter Designation: ";
        cin >> designation;

        cout << "Enter Working Hours: ";
        cin >> workingHours;
    }

    void displayNonTeachingDetails()
    {
        cout << "\n\n--- Non-Teaching Staff Details ---";
        displayEmployeeDetails();

        cout << "\nDesignation   : " << designation;
        cout << "\nWorking Hours : " << workingHours;
    }
};

// Main Function
int main()
{
    TeachingStaff teacher;
    NonTeachingStaff staff;

    cout << "===== TEACHING STAFF =====\n";
    teacher.getTeachingDetails();

    cout << "\n===== NON-TEACHING STAFF =====\n";
    staff.getNonTeachingDetails();

    cout << "\n\n===== EMPLOYEE DETAILS =====";

    teacher.displayTeachingDetails();
    staff.displayNonTeachingDetails();

    return 0;
}

//output
===== TEACHING STAFF =====
Enter Employee ID: 12
Enter Employee Name: Samay
Enter Department: Chemical
Enter Subject: chemistry
Enter Qualification: B.tech

===== NON-TEACHING STAFF =====
Enter Employee ID: 34
Enter Employee Name: tanuja
Enter Department: mechanical
Enter Designation: kolhapur
Enter Working Hours: 8


===== EMPLOYEE DETAILS =====

--- Teaching Staff Details ---
Employee ID   : 12
Employee Name : Samay
Department    : Chemical
Subject       : chemistry
Qualification : B.tech

--- Non-Teaching Staff Details ---
Employee ID   : 34
Employee Name : tanuja
Department    : mechanical
Designation   : kolhapur
Working Hours : 8
