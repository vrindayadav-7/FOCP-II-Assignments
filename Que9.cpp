#include <iostream>
using namespace std;

int main() {
    char ch;
    cin >> ch;
    if (isdigit(ch)) {
        cout << "Number";
    } 
    else if (isalpha(ch)) {
        ch = tolower(ch);
        if (ch == 'a' || ch == 'e' || ch == 'i' || 
            ch == 'o' || ch == 'u')
            cout << "Vowel";
        else
            cout << "Consonant";
    }

    return 0;
}