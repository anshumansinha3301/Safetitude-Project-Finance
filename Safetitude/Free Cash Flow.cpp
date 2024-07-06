#include <iostream>
using namespace std;

int main() {
    double operatingCashFlow, capitalExpenditures, changesInWorkingCapital;
    cout << "Enter operating cash flow: ";
    cin >> operatingCashFlow;
    cout << "Enter capital expenditures: ";
    cin >> capitalExpenditures;
    cout << "Enter changes in working capital: ";
    cin >> changesInWorkingCapital;

    double fcf = operatingCashFlow - capitalExpenditures + changesInWorkingCapital;
    cout << "Free Cash Flow (FCF): " << fcf << endl;
    return 0;
}
