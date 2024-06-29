#include <iostream>
using namespace std;
// Determine the break-even point given fixed costs, variable costs, and price per unit.
int main() {
    double fixedCost, variableCost, pricePerUnit;
    cout << "Enter fixed cost: ";
    cin >> fixedCost;
    cout << "Enter variable cost per unit: ";
    cin >> variableCost;
    cout << "Enter price per unit: ";
    cin >> pricePerUnit;

    double breakEvenPoint = fixedCost / (pricePerUnit - variableCost);
    cout << "Break-Even Point: " << breakEvenPoint << " units" << endl;
    return 0;
}
