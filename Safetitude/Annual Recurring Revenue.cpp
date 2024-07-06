#include <iostream>
using namespace std;

int main() {
    double numberOfCustomers, averageRevenuePerCustomer;
    cout << "Enter number of customers: ";
    cin >> numberOfCustomers;
    cout << "Enter average revenue per customer: ";
    cin >> averageRevenuePerCustomer;

    double arr = numberOfCustomers * averageRevenuePerCustomer;
    cout << "Annual Recurring Revenue (ARR): " << arr << endl;
    return 0;
}
