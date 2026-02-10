#include <iostream>
using namespace std;

int main() {
    int quantity;
    double PriceperItem;
    double totalCost, finalCost;

    cout << "Enter number of items: ";
    cin >> quantity;

    cout << "Enter PriceperItem: ";
    cin >> PriceperItem;

    totalCost = quantity * PriceperItem;

    if (quantity > 1000) {
        finalCost = totalCost * 0.90; 
    }
    else {
        finalCost = totalCost;
    }

    cout << "Total Expense: " << finalCost << endl;

    return 0;
}