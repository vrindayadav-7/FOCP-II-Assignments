#include <iostream>
using namespace std;

int main() {
    int n;
    double num, max;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter number 1: ";
    cin >> max;

    for (int i = 2; i <= n; i++) {
        cout << "Enter number " << i << ": ";
        cin >> num;

        if (num > max)
            max = num;
    }

    cout << "Largest number = " << max;

    return 0;
}