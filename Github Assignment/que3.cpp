#include <iostream>
using namespace std;
 
int main() {
 
    long long l, r;
    cin >> l >> r;
 
    // Count odd numbers in the range [l, r]
    long long oddCount = (r + 1) / 2 - l / 2;
 
    // XOR parity depends only on count of odd numbers
    if (oddCount % 2 == 0) {
        cout << "even";
    }
    else {
        cout << "odd";
    }
 
    return 0;
}