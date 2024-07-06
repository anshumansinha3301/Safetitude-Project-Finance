#include <iostream>
using namespace std;

int main() {
    double ebit, capitalEmployed;
    cout << "Enter earnings before interest and tax (EBIT): ";
    cin >> ebit;
    cout << "Enter capital employed: ";
    cin >> capitalEmployed;

    double roce = (ebit / capitalEmployed) * 100;
    cout << "Return on Capital Employed (ROCE): " << roce << "%" << endl;
    return 0;
}
