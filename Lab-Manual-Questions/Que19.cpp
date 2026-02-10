#include <iostream>
#include <string>
using namespace std;

int main() {
    string id;
    int flag = 0;

    cout << "Enter ID: ";
    cin >> id;

    int len = id.length();

    for (int i = 0; i < len / 2; i++) {
        if (id[i] != id[len - i - 1]) {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        cout << "Palindrome ID";
    else
        cout << "Not a Palindrome ID";

    return 0;
}