#include <iostream>
using namespace std;

int main() {
    double netIncome, outstandingShares;
    cout << "Enter net income: ";
    cin >> netIncome;
    cout << "Enter number of outstanding shares: ";
    cin >> outstandingShares;

    double eps = netIncome / outstandingShares;
    cout << "Earnings Per Share (EPS): " << eps << endl;
    return 0;
}
