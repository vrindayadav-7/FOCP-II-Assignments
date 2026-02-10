#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter three sides of the Triangle: ";
    cin >> a >> b >> c;

    if (a + b <= c || a + c <= b || b + c <= a) {
        cout << "Not a valid Triangle";
    }
    else if (a == b && b == c) {
        cout << "Equilateral Triangle";
    }
    else if (a == b || b == c || a == c) {
        cout << "Isosceles Triangle";
    }
    else {
        cout << "Scalene Triangle";
    }

    return 0;
}