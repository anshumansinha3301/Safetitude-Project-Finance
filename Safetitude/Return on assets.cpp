#include <iostream>
using namespace std;

int main() {
    double netIncome, totalAssets;
    cout << "Enter net income: ";
    cin >> netIncome;
    cout << "Enter total assets: ";
    cin >> totalAssets;

    double roa = (netIncome / totalAssets) * 100;
    cout << "Return on Assets (ROA): " << roa << "%" << endl;
    return 0;
}
