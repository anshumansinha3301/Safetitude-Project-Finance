#include <iostream>
using namespace std;

int main() {
    double totalMarketingExpenses, newCustomersAcquired;
    cout << "Enter total marketing expenses: ";
    cin >> totalMarketingExpenses;
    cout << "Enter number of new customers acquired: ";
    cin >> newCustomersAcquired;

    double cac = totalMarketingExpenses / newCustomersAcquired;
    cout << "Customer Acquisition Cost (CAC): " << cac << endl;
    return 0;
}
