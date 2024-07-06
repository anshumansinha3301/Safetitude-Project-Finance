#include <iostream>
using namespace std;

int main() {
    double netIncome, depreciation, changesInWorkingCapital;
    cout << "Enter net income: ";
    cin >> netIncome;
    cout << "Enter depreciation: ";
    cin >> depreciation;
    cout << "Enter changes in working capital: ";
    cin >> changesInWorkingCapital;

    double ocf = netIncome + depreciation + changesInWorkingCapital;
    cout << "Operating Cash Flow (OCF): " << ocf << endl;
    return 0;
}
