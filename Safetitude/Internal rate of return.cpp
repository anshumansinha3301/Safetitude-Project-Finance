#include <iostream>
#include <cmath>
using namespace std;

double calculateNPV(double cashFlows[], int n, double rate) {
    double npv = 0;
    for (int i = 0; i < n; i++) {
        npv += cashFlows[i] / pow(1 + rate, i + 1);
    }
    return npv;
}

int main() {
    int n;
    cout << "Enter number of periods: ";
    cin >> n;
    double cashFlows[n];
    
    for (int i = 0; i < n; i++) {
        cout << "Enter cash flow for period " << i + 1 << ": ";
        cin >> cashFlows[i];
    }

    double rate = 0.1;
    double npv = calculateNPV(cashFlows, n, rate);

    while (fabs(npv) > 1e-6) {
        rate += 0.0001;
        npv = calculateNPV(cashFlows, n, rate);
    }

    cout << "Internal Rate of Return (IRR): " << rate * 100 << "%" << endl;
    return 0;
}
