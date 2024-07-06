#include <iostream>
using namespace std;

int main() {
    double marketPricePerShare, earningsPerShare;
    cout << "Enter market price per share: ";
    cin >> marketPricePerShare;
    cout << "Enter earnings per share: ";
    cin >> earningsPerShare;

    double peRatio = marketPricePerShare / earningsPerShare;
    cout << "Price-to-Earnings (P/E) Ratio: " << peRatio << endl;
    return 0;
}
