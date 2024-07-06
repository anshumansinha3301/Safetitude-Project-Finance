#include <iostream>
using namespace std;

int main() {
    double ebit, interestExpenses;
    cout << "Enter earnings before interest and tax (EBIT): ";
    cin >> ebit;
    cout << "Enter interest expenses: ";
    cin >> interestExpenses;

    double interestCoverageRatio = ebit / interestExpenses;
    cout << "Interest Coverage Ratio: " << interestCoverageRatio << endl;
    return 0;
}
