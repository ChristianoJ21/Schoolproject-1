#include <iostream>
using namespace std;

string name;
int salary;
double tax, net_salary;

int main()
{
    
    cout << "Name : ";
    cin >> name;
    cout << "Gross Salary : Rp";
    cin >> salary;
    cout << endl;
    
    tax = 0.2 * salary;
    net_salary = salary - tax - 200000 - 150000;
    
    cout << "Payslip for Employee" << endl;
    cout << "---------------------" << endl;
    cout << "Name : " << name << endl;
    cout << "Gross Salary : Rp " << salary << endl;
    cout << "Tax (20%) : Rp " << tax << endl;
    cout << "Installment : Rp 200000" << endl;
    cout << "Insurance : Rp 150000" << endl;
    cout << "Net Salary : Rp " << net_salary << endl;
    
    return 0;
}
