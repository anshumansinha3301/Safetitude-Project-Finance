#include <iostream>
using namespace std;

int main() {
    double presentValue, initialInvestment;
    cout << "Enter present value of future cash flows: ";
    cin >> presentValue;
    cout << "Enter initial investment: ";
    cin >> initialInvestment;

    double profitabilityIndex = presentValue / initialInvestment;
    cout << "Profitability Index: " << profitabilityIndex << endl;
    return 0;
}
