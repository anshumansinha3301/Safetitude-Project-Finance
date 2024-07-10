#include <iostream>
using namespace std;
// Calculate WACC given the cost of equity, cost of debt, equity proportion, and debt proportion.         
int main() {
    double costOfEquity, costOfDebt, equityProportion, debtProportion, taxRate;
    cout << "Enter cost of equity: ";
    cin >> costOfEquity;
    cout << "Enter cost of debt: ";
    cin >> costOfDebt;
    cout << "Enter equity proportion: ";
    cin >> equityProportion;
    cout << "Enter debt proportion: ";
    cin >> debtProportion;
    cout << "Enter tax rate: ";
    cin >> taxRate;

    double wacc = (equityProportion * costOfEquity) + (debtProportion * costOfDebt * (1 - taxRate));
    cout << "WACC: " << wacc << "%" << endl;
    return 0;
}
