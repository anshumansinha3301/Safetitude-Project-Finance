#include <iostream>
using namespace std;

int main() {
    double fixedCosts, variableCostPerUnit, sellingPricePerUnit;
    cout << "Enter fixed costs: ";
    cin >> fixedCosts;
    cout << "Enter variable cost per unit: ";
    cin >> variableCostPerUnit;
    cout << "Enter selling price per unit: ";
    cin >> sellingPricePerUnit;

    double breakEvenVolume = fixedCosts / (sellingPricePerUnit - variableCostPerUnit);
    cout << "Break-Even Sales Volume: " << breakEvenVolume << " units" << endl;
    return 0;
}
