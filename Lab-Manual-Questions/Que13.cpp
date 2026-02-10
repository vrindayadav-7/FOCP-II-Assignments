#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, D, root1, root2;

    cout << "Enter a, b and c: ";
    cin >> a >> b >> c;

    D = b * b - 4 * a * c;

    if (D > 0) {
        root1 = (-b + sqrt(D)) / (2 * a);
        root2 = (-b - sqrt(D)) / (2 * a);
        cout << "Two real and distinct roots: " << root1 << " and " << root2;
    }
    else if (D == 0) {
        root1 = -b / (2 * a);
        cout << "Two real and equal roots: " << root1;
    }
    else {
        cout << "No real roots";
    }

    return 0;
}