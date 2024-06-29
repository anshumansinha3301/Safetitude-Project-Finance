#include <iostream>
using namespace std;

int main() {
    double totalMarketSize, companySales;
    cout << "Enter total market size: ";
    cin >> totalMarketSize;
    cout << "Enter company sales: ";
    cin >> companySales;

    double marketShare = (companySales / totalMarketSize) * 100;
    cout << "Market Share: " << marketShare << "%" << endl;
    return 0;
}
