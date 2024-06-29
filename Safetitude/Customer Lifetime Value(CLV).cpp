#include <iostream>
using namespace std;

int main() {
    double averagePurchaseValue, purchaseFrequency, customerLifespan;
    cout << "Enter average purchase value: ";
    cin >> averagePurchaseValue;
    cout << "Enter purchase frequency (per year): ";
    cin >> purchaseFrequency;
    cout << "Enter customer lifespan (years): ";
    cin >> customerLifespan;

    double clv = averagePurchaseValue * purchaseFrequency * customerLifespan;
    cout << "Customer Lifetime Value: " << clv << endl;
    return 0;
}
