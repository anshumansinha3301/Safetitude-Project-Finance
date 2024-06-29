#include <iostream>
using namespace std;

int main() {
    double revenue, cost;
    cout << "Enter revenue: ";
    cin >> revenue;
    cout << "Enter cost: ";
    cin >> cost;

    double profitMargin = ((revenue - cost) / revenue) * 100;
    cout << "Profit Margin: " << profitMargin << "%" << endl;
    return 0;
}
