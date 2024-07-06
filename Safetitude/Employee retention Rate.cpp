#include <iostream>
using namespace std;

int main() {
    double employeesAtStart, employeesAtEnd, newHires;
    cout << "Enter the number of employees at the start of the period: ";
    cin >> employeesAtStart;
    cout << "Enter the number of employees at the end of the period: ";
    cin >> employeesAtEnd;
    cout << "Enter the number of new hires during the period: ";
    cin >> newHires;

    double retentionRate = ((employeesAtEnd - newHires) / employeesAtStart) * 100;
    cout << "Employee Retention Rate: " << retentionRate << "%" << endl;
    return 0;
}
