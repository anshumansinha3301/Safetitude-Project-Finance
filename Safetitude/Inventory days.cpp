#include <iostream>
using namespace std;

int main() {
    double inventoryTurnoverRatio;
    cout << "Enter inventory turnover ratio: ";
    cin >> inventoryTurnoverRatio;

    double inventoryDays = 365 / inventoryTurnoverRatio;
    cout << "Average Inventory Days: " << inventoryDays << " days" << endl;
    return 0;
}
