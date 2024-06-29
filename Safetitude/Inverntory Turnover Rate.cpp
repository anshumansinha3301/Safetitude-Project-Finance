#include <iostream>
using namespace std;

int main() {
    double costOfGoodsSold, averageInventory;
    cout << "Enter cost of goods sold: ";
    cin >> costOfGoodsSold;
    cout << "Enter average inventory: ";
    cin >> averageInventory;

    double inventoryTurnoverRatio = costOfGoodsSold / averageInventory;
    cout << "Inventory Turnover Ratio: " << inventoryTurnoverRatio << endl;
    return 0;
}
