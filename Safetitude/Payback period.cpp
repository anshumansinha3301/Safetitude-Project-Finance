#include <iostream>
using namespace std;

int main() {
    double initialInvestment, annualCashInflows;
    cout << "Enter initial investment: ";
    cin >> initialInvestment;
    cout << "Enter annual cash inflows: ";
    cin >> annualCashInflows;

    double paybackPeriod = initialInvestment / annualCashInflows;
    cout << "Payback Period: " << paybackPeriod << " years" << endl;
    return 0;
}
