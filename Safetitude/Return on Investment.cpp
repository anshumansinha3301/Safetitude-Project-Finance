#include <iostream>
using namespace std;

int main() {
    double gainFromInvestment, costOfInvestment;
    cout << "Enter gain from investment: ";
    cin >> gainFromInvestment;
    cout << "Enter cost of investment: ";
    cin >> costOfInvestment;

    double roi = ((gainFromInvestment - costOfInvestment) / costOfInvestment) * 100;
    cout << "ROI: " << roi << "%" << endl;
    return 0;
}
