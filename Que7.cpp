#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c ;   // Read scores

    if (a > b && a > c)
        cout << "Player1";
    else if (b > a && b > c)
        cout << "Player2";
    else if (c > a && c > b)
        cout << "Player3";
    else
        cout << "Tie";

    return 0;
}