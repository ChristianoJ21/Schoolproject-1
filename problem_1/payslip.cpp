#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <string>
using namespace std;

string name;
int salary;
double tax, net_salary;

string generatePayslip() {
    cout << "Name : ";
    cin >> name;
    cout << "Gross Salary : Rp";
    cin >> salary;
    cout << endl;

    // Calculate tax and net salary
    tax = 0.2 * salary;
    net_salary = salary - tax - 200000 - 150000;

    // Display and return the formatted payslip
    ostringstream oss;
    oss << "Payslip for Employee" << endl;
    oss << "---------------------" << endl;
    oss << "Name : " << name << endl;
    oss << "Gross Salary : Rp " << salary << endl;
    oss << "Tax (20%) : Rp " << tax << endl;
    oss << "Installment : Rp 200000" << endl;
    oss << "Insurance : Rp 150000" << endl;
    oss << "Net Salary : Rp " << net_salary << endl;

    cout << oss.str(); // Output the payslip to the console
    return oss.str();  // Return the formatted string for further use
}

int main() {
    // Open the test file for test cases
    ifstream testFile("test.txt");
    string input_name, expected_output;
    int input_salary;

    if (!testFile) {
        cerr << "Error: Could not open test.txt" << endl;
        return 1;
    }

    int test_num = 1;
    // Loop through test file
    while (testFile >> input_name >> input_salary && getline(testFile >> ws, expected_output)) {
        // Simulate the input for testing by setting global variables
        name = input_name;
        salary = input_salary;

        // Generate payslip based on the test case
        string generated_output = generatePayslip();

        // Compare generated output with expected output
        if (generated_output == expected_output) {
            cout << "Test " << test_num << " passed!" << endl;
        } else {
            cout << "Test " << test_num << " failed." << endl;
            cout << "Expected: \"" << expected_output << "\"" << endl;
            cout << "Got: \"" << generated_output << "\"" << endl;
        }
        test_num++;
    }

    testFile.close();
    return 0;
}


    }

    testFile.close();
    return 0;
}
