#include <iostream>
using namespace std;

int main() {
    int start, end;
    cout << "Enter two limits: ";
    cin >> start >> end;

    for (int num = start; num <= end; num++) {
        if (num <= 1)
            continue;

        bool isPrime = true;

        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
            cout << num << " ";
    }

    return 0;
}