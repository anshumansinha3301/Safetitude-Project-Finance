#include <iostream>
using namespace std;

int main() {
    double totalAssets, totalEquity;
    cout << "Enter total assets: ";
    cin >> totalAssets;
    cout << "Enter total equity: ";
    cin >> totalEquity;

    double equityMultiplier = totalAssets / totalEquity;
    cout << "Equity Multiplier: " << equityMultiplier << endl;
    return 0;
}
