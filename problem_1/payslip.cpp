#include <iostream>
using namespace std;

string name;
int salary;
double tax, net_salary, taxp;

int main()
{
    
    cout << "Name : ";
    cin >> name;
    cout << "Gross Salary : Rp";
    cin >> salary;
    cout << "Tax (%) : ";
    cin >> taxp;
    cout << endl;
    
    
    tax = taxp/100 * salary;
    net_salary = salary - tax - 100000 - 50000;
    
    cout << "Payslip for Employee" << endl;
    cout << "---------------------" << endl;
    cout << "Name : " << name << endl;
    cout << "Gross Salary : Rp " << salary << endl;
    cout << "Tax " << "(" << taxp << "%)" << ": Rp " << tax << endl;
    cout << "Installment : Rp 100000" << endl;
    cout << "Insurance : Rp 50000" << endl;
    cout << "Net Salary : Rp " << net_salary << endl;
    
    return 0;
}
