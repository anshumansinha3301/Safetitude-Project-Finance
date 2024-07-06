#include <iostream>
using namespace std;

int main() {
    double contributionMargin, salesRevenue;
    cout << "Enter contribution margin: ";
    cin >> contributionMargin;
    cout << "Enter sales revenue: ";
    cin >> salesRevenue;

    double contributionMarginRatio = (contributionMargin / salesRevenue) * 100;
    cout << "Contribution Margin Ratio: " << contributionMarginRatio << "%" << endl;
    return 0;
}
