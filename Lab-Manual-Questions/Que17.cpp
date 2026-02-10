#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, temp, digit, sum = 0, divisorSum = 0, digits = 0;

    cout << "Enter a number: ";
    cin >> num;

    // Perfect Number
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0)
            divisorSum += i;
    }

    if (divisorSum == num)
        cout << "Perfect Number\n";
    else
        cout << "Not a Perfect Number\n";

    // Armstrong Number
    temp = num;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = num;
    sum = 0;
    while (temp > 0) {
        digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    if (sum == num)
        cout << "Armstrong Number";
    else
        cout << "Not an Armstrong Number";

    return 0;
}