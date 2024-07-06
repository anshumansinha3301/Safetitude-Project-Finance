#include <iostream>
using namespace std;

int main() {
    double revenuePrevious, revenueCurrent;
    cout << "Enter previous period revenue: ";
    cin >> revenuePrevious;
    cout << "Enter current period revenue: ";
    cin >> revenueCurrent;

    double growthRate = ((revenueCurrent - revenuePrevious) / revenuePrevious) * 100;
    cout << "Revenue Growth Rate: " << growthRate << "%" << endl;
    return 0;
}
