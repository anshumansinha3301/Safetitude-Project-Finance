#include <iostream>
using namespace std;

int main() {
    double operatingIncome, revenue;
    cout << "Enter operating income: ";
    cin >> operatingIncome;
    cout << "Enter revenue: ";
    cin >> revenue;

    double operatingMargin = (operatingIncome / revenue) * 100;
    cout << "Operating Margin: " << operatingMargin << "%" << endl;
    return 0;
}
