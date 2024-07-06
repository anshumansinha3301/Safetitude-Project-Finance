#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double demandRate, orderingCost, holdingCost;
    cout << "Enter demand rate: ";
    cin >> demandRate;
    cout << "Enter ordering cost: ";
    cin >> orderingCost;
    cout << "Enter holding cost per unit per year: ";
    cin >> holdingCost;

    double eoq = sqrt((2 * demandRate * orderingCost) / holdingCost);
    cout << "Economic Order Quantity: " << eoq << " units" << endl;
    return 0;
}
