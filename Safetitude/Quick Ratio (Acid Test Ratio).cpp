#include <iostream>
using namespace std;

int main() {
    double cash, marketableSecurities, accountsReceivable, currentLiabilities;
    cout << "Enter cash: ";
    cin >> cash;
    cout << "Enter marketable securities: ";
    cin >> marketableSecurities;
    cout << "Enter accounts receivable: ";
    cin >> accountsReceivable;
    cout << "Enter current liabilities: ";
    cin >> currentLiabilities;

    double quickRatio = (cash + marketableSecurities + accountsReceivable) / currentLiabilities;
    cout << "Quick Ratio: " << quickRatio << endl;
    return 0;
}
