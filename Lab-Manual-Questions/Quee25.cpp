#include <iostream>
#include <string>
using namespace std;

int main() {
    string password;
    bool hasUpper = false, hasLower = false, hasDigit = false, hasSpecial = false;

    cout << "Enter password: ";
    cin >> password;

    for (int i = 0; i < password.length(); i++) {
        char ch = password[i];

        if (ch >= 'A' && ch <= 'Z')
            hasUpper = true;
        else if (ch >= 'a' && ch <= 'z')
            hasLower = true;
        else if (ch >= '0' && ch <= '9')
            hasDigit = true;
        else if (ch == '@' || ch == '#' || ch == '$' || ch == '%' ||
                 ch == '!' || ch == '&' || ch == '*')
            hasSpecial = true;
    }

    if (hasUpper && hasLower && hasDigit && hasSpecial)
        cout << "Password is STRONG";
    else
        cout << "Password is WEAK";

    return 0;
}