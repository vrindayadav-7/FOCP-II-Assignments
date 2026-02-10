#include <iostream>
using namespace std;

int main() {
    int start, end, i, j;
    bool isPrime;

    cout << "Enter range: ";
    cin >> start >> end;

    cout << "Prime numbers in the range are:\n";

    for (i = start; i <= end; i++) {
        if (i <= 1)
            continue;

        isPrime = true;

        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
            cout << i << " ";
    }

    return 0;
}