#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double initialValue, finalValue, years;
    cout << "Enter initial value: ";
    cin >> initialValue;
    cout << "Enter final value: ";
    cin >> finalValue;
    cout << "Enter number of years: ";
    cin >> years;

    double cagr = pow((finalValue / initialValue), (1 / years)) - 1;
    cout << "CAGR: " << cagr * 100 << "%" << endl;
    return 0;
}
