#include <iostream>
using namespace std;

int main() {
    double incomeBeforeTax, taxExpense;
    cout << "Enter income before tax: ";
    cin >> incomeBeforeTax;
    cout << "Enter tax expense: ";
    cin >> taxExpense;

    double effectiveTaxRate = (taxExpense / incomeBeforeTax) * 100;
    cout << "Effective Tax Rate: " << effectiveTaxRate << "%" << endl;
    return 0;
}
