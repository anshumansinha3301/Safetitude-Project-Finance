#include <iostream>
using namespace std;

int main() {
    double percentChangeQuantity, percentChangePrice;
    cout << "Enter percentage change in quantity demanded: ";
    cin >> percentChangeQuantity;
    cout << "Enter percentage change in price: ";
    cin >> percentChangePrice;

    double elasticity = percentChangeQuantity / percentChangePrice;
    cout << "Price Elasticity of Demand: " << elasticity << endl;
    return 0;
}
