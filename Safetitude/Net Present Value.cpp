#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter number of periods: ";
    cin >> n;
    vector<double> cashFlows(n);

    for(int i = 0; i < n; ++i) {
        cout << "Enter cash flow for period " << i + 1 << ": ";
        cin >> cashFlows[i];
    }

    double discountRate;
    cout << "Enter discount rate: ";
    cin >> discountRate;

    double npv = 0;
    for(int i = 0; i < n; ++i) {
        npv += cashFlows[i] / pow(1 + discountRate, i + 1);
    }

    cout << "NPV: " << npv << endl;
    return 0;
}
