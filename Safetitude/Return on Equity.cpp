#include <iostream>
using namespace std;

int main() {
    double netIncome, shareholdersEquity;
    cout << "Enter net income: ";
    cin >> netIncome;
    cout << "Enter shareholders' equity: ";
    cin >> shareholdersEquity;

    double roe = (netIncome / shareholdersEquity) * 100;
    cout << "Return on Equity (ROE): " << roe << "%" << endl;
    return 0;
}
