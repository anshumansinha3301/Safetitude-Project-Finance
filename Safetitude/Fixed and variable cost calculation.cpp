#include <iostream>
using namespace std;

int main() {
    double fixedCosts, variableCostsPerUnit, numberOfUnits;
    cout << "Enter fixed costs: ";
    cin >> fixedCosts;
    cout << "Enter variable costs per unit: ";
    cin >> variableCostsPerUnit;
    cout << "Enter number of units produced: ";
    cin >> numberOfUnits;

    double totalCosts = fixedCosts + (variableCostsPerUnit * numberOfUnits);
    cout << "Total Costs: " << totalCosts << endl;
    return 0;
}
