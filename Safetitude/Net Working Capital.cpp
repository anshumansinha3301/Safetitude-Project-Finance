#include <iostream>
using namespace std;

int main() {
    double currentAssets, currentLiabilities;
    cout << "Enter current assets: ";
    cin >> currentAssets;
    cout << "Enter current liabilities: ";
    cin >> currentLiabilities;

    double netWorkingCapital = currentAssets - currentLiabilities;
    cout << "Net Working Capital: " << netWorkingCapital << endl;
    return 0;
}
