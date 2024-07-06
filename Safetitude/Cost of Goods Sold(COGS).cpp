#include <iostream>
using namespace std;

int main() {
    double beginningInventory, purchases, endingInventory;
    cout << "Enter beginning inventory: ";
    cin >> beginningInventory;
    cout << "Enter purchases: ";
    cin >> purchases;
    cout << "Enter ending inventory: ";
    cin >> endingInventory;

    double cogs = beginningInventory + purchases - endingInventory;
    cout << "Cost of Goods Sold (COGS): " << cogs << endl;
    return 0;
}
