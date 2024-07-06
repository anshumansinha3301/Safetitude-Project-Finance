#include <iostream>
using namespace std;

int main() {
    double billableHours, totalAvailableHours;
    cout << "Enter billable hours: ";
    cin >> billableHours;
    cout << "Enter total available hours: ";
    cin >> totalAvailableHours;

    double utilizationRate = (billableHours / totalAvailableHours) * 100;
    cout << "Employee Utilization Rate: " << utilizationRate << "%" << endl;
    return 0;
}
