#include <iostream>
using namespace std;

int main()
{
    int empId;
    string empName;
    float basicSalary, hra, da, pf, grossSalary, netSalary;

    cout << "===== Salary Management System =====\n";

    cout << "Enter Employee ID: ";
    cin >> empId;

    cout << "Enter Employee Name: ";
    cin >> empName;

    cout << "Enter Basic Salary: ";
    cin >> basicSalary;

    // Salary Calculations
    hra = basicSalary * 0.20;   // 20% HRA
    da  = basicSalary * 0.10;   // 10% DA
    pf  = basicSalary * 0.12;   // 12% PF Deduction

    grossSalary = basicSalary + hra + da;
    netSalary = grossSalary - pf;

    cout << "\n========== Salary Slip ==========\n";
    cout << "Employee ID   : " << empId << endl;
    cout << "Employee Name : " << empName << endl;
    cout << "Basic Salary  : " << basicSalary << endl;
    cout << "HRA (20%)     : " << hra << endl;
    cout << "DA (10%)      : " << da << endl;
    cout << "PF (12%)      : " << pf << endl;
    cout << "Gross Salary  : " << grossSalary << endl;
    cout << "Net Salary    : " << netSalary << endl;

    return 0;
}