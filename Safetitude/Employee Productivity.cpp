#include <iostream>
using namespace std;

int main() {
    double totalOutput, numberOfEmployees;
    cout << "Enter total output: ";
    cin >> totalOutput;
    cout << "Enter number of employees: ";
    cin >> numberOfEmployees;

    double productivity = totalOutput / numberOfEmployees;
    cout << "Employee Productivity: " << productivity << endl;
    return 0;
}
