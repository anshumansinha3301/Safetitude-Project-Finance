#include <iostream>
using namespace std;

int main() {
    double totalLiabilities, shareholdersEquity;
    cout << "Enter total liabilities: ";
    cin >> totalLiabilities;
    cout << "Enter shareholders' equity: ";
    cin >> shareholdersEquity;

    double debtEquityRatio = totalLiabilities / shareholdersEquity;
    cout << "Debt-to-Equity Ratio: " << debtEquityRatio << endl;
    return 0;
}
