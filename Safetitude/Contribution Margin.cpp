#include <iostream>
using namespace std;

int main() {
    double salesRevenue, variableCosts;
    cout << "Enter sales revenue: ";
    cin >> salesRevenue;
    cout << "Enter variable costs: ";
    cin >> variableCosts;

    double contributionMargin = salesRevenue - variableCosts;
    cout << "Contribution Margin: " << contributionMargin << endl;
    return 0;
}
