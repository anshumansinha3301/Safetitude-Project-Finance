#include <iostream>
using namespace std;

int main() {
    double netChangeInFixedAssets, depreciationExpense;
    cout << "Enter net change in fixed assets: ";
    cin >> netChangeInFixedAssets;
    cout << "Enter depreciation expense: ";
    cin >> depreciationExpense;

    double capex = netChangeInFixedAssets + depreciationExpense;
    cout << "Capital Expenditure (CapEx): " << capex << endl;
    return 0;
}
