#include <iostream>
using namespace std;

int main() {
    double cashBalance, monthlyExpenses;
    cout << "Enter total cash balance: ";
    cin >> cashBalance;
    cout << "Enter monthly expenses: ";
    cin >> monthlyExpenses;

    double burnRate = cashBalance / monthlyExpenses;
    cout << "Burn Rate: " << burnRate << " months" << endl;
    return 0;
}
