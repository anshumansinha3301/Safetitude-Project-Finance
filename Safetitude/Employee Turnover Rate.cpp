#include <iostream>
using namespace std;

int main() {
    double employeesLeft, averageEmployees;
    cout << "Enter the number of employees who left: ";
    cin >> employeesLeft;
    cout << "Enter the average number of employees: ";
    cin >> averageEmployees;

    double turnoverRate = (employeesLeft / averageEmployees) * 100;
    cout << "Employee Turnover Rate: " << turnoverRate << "%" << endl;
    return 0;
}
