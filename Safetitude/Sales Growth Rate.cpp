#include <iostream>
using namespace std;

int main() {
    double salesPrevious, salesCurrent;
    cout << "Enter previous period sales: ";
    cin >> salesPrevious;
    cout << "Enter current period sales: ";
    cin >> salesCurrent;

    double growthRate = ((salesCurrent - salesPrevious) / salesPrevious) * 100;
    cout << "Sales Growth Rate: " << growthRate << "%" << endl;
    return 0;
}
