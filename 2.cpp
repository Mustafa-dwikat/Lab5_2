#include <iostream>
using namespace std;
int main() {
    int number;
    float price_each, total_price, amount;
    cout << "pls enter the number of the pizzas (integer) : ";
    cin >> number;
    cout << "pls enter the price of each one ($): ";
    cin >> price_each;
    cout << "pls enter amount of money paid ($): ";
    cin >> amount;
    total_price = number * price_each;
    cout << "your total biil is = " << total_price << "$\n";
    cout << "amount of money paid = " << amount << "$\n";
    cout << "remaining money = " << amount - total_price << "$\n";
}