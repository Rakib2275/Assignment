//7. Write a C++ program to implement a class called Employee that has private member
//variables for name, employee ID, and salary. Include member functions to calculate
//and set salary based on employee performance

//w3 resource
#include <iostream>
#include <string>
#include <iomanip> // For setprecision

using namespace std;

class Employee {
private:
    string name;
    int employeeID;
    double salary;

public:
    // Constructor
    Employee(string empName, int empID) : name(empName), employeeID(empID), salary(0) {}

    // Function to set salary based on performance
    void setSalary(double baseSalary, char performanceGrade) {
        switch (performanceGrade) {
            case 'A':
                salary = baseSalary * 1.2; // 20% raise for A
                break;
            case 'B':
                salary = baseSalary * 1.1; // 10% raise for B
                break;
            case 'C':
                salary = baseSalary; // No raise for C
                break;
            case 'D':
                salary = baseSalary * 0.9; // 10% deduction for D
                break;
            default:
                cout << "Invalid performance grade. Salary not set." << endl;
                salary = 0;
                break;
        }
    }

    // Function to display employee details
    void displayInfo() const {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Salary: $" << fixed << setprecision(2) << salary << endl;
    }
};

int main() {
    string empName;
    int empID;
    double baseSalary;
    char performanceGrade;

    // Input employee details
    cout << "Enter employee name: ";
    getline(cin, empName);
    cout << "Enter employee ID: ";
    cin >> empID;
    cout << "Enter base salary: ";
    cin >> baseSalary;

    // Input performance grade with validation
    while (true) {
        cout << "Enter performance grade (A, B, C, D): ";
        cin >> performanceGrade;
        performanceGrade = toupper(performanceGrade); // Convert to uppercase for consistency
        if (performanceGrade == 'A' || performanceGrade == 'B' || performanceGrade == 'C' || performanceGrade == 'D') {
            break; // Valid input
        }
        cout << "Invalid input. Please enter A, B, C, or D." << endl;
    }

    // Create an Employee object
    Employee emp(empName, empID);

    // Set salary based on performance
    emp.setSalary(baseSalary, performanceGrade);

    // Display employee information
    emp.displayInfo();

    return 0;
}
