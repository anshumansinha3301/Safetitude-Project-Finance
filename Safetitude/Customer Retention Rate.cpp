#include <iostream>
using namespace std;

int main() {
    double customersAtStart, customersAtEnd, newCustomers;
    cout << "Enter the number of customers at the start of the period: ";
    cin >> customersAtStart;
    cout << "Enter the number of customers at the end of the period: ";
    cin >> customersAtEnd;
    cout << "Enter the number of new customers acquired during the period: ";
    cin >> newCustomers;

    double retentionRate = ((customersAtEnd - newCustomers) / customersAtStart) * 100;
    cout << "Customer Retention Rate: " << retentionRate << "%" << endl;
    return 0;
}
