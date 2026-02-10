#include <iostream>
using namespace std;

int main() {

    // Pattern 1
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 5; j++) {
            cout << j << " ";
        }
        cout << endl;
    }

    cout << endl; // Space between patterns

    // Pattern 2
    for (int i = 5; i >= 1; i--) {
        for (int j = 5; j >= i; j--) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}