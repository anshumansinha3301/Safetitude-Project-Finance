#include <iostream>
using namespace std;

int main() {
    double customersAtStart, customersAtEnd, newCustomersAcquired;
    cout << "Enter the number of customers at the start of the period: ";
    cin >> customersAtStart;
    cout << "Enter the number of customers at the end of the period: ";
    cin >> customersAtEnd;
    cout << "Enter the number of new customers acquired: ";
    cin >> newCustomersAcquired;

    double churnRate = ((customersAtStart - (customersAtEnd - newCustomersAcquired)) / customersAtStart) * 100;
    cout << "Customer Churn Rate: " << churnRate << "%" << endl;
    return 0;
}
