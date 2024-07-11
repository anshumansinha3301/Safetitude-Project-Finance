#include <iostream>
using namespace std;
 
int main() {
    double bankCapital, riskWeightedAssets;
    cout << "Enter bank capital: ";
    cin >> bankCapital;
    cout << "Enter risk-weighted assets: ";
    cin >> riskWeightedAssets;

    double car = (bankCapital / riskWeightedAssets) * 100;
    cout << "Capital Adequacy Ratio (CAR): " << car << "%" << endl;
    return 0;
}
