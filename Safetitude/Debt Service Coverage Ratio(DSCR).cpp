#include <iostream>
using namespace std;

int main() {
    double netOperatingIncome, totalDebtService;
    cout << "Enter net operating income: ";
    cin >> netOperatingIncome;
    cout << "Enter total debt service: ";
    cin >> totalDebtService;

    double dscr = netOperatingIncome / totalDebtService;
    cout << "Debt Service Coverage Ratio (DSCR): " << dscr << endl;
    return 0;
}
