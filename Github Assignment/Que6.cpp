
#include <iostream>
#include <unordered_map>
#include <sstream>
using namespace std;

class Bank {
private:
    unordered_map<int, long long> accounts;

public:
    bool create(int userId, long long amount) {
        if (accounts.find(userId) == accounts.end()) {
            accounts[userId] = amount;
            return true;
        }

        accounts[userId] += amount;
        return false;
    }

    bool debit(int userId, long long amount) {
        if (accounts.find(userId) == accounts.end()) {
            return false;
        }

        if (accounts[userId] < amount) {
            return false;
        }

        accounts[userId] -= amount;
        return true;
    }

    bool credit(int userId, long long amount) {
        if (accounts.find(userId) == accounts.end()) {
            return false;
        }

        accounts[userId] += amount;
        return true;
    }

    long long balance(int userId) {
        if (accounts.find(userId) == accounts.end()) {
            return -1;
        }

        return accounts[userId];
    }
};

int main() {
    int Q;
    cin >> Q;
    cin.ignore();

    Bank bank;

    while (Q--) {
        string line;
        getline(cin, line);

        stringstream ss(line);
        string command;
        ss >> command;

        if (command == "CREATE") {
            int x;
            long long y;
            ss >> x >> y;
            cout << (bank.create(x, y) ? "true" : "false") << endl;
        }
        else if (command == "DEBIT") {
            int x;
            long long y;
            ss >> x >> y;
            cout << (bank.debit(x, y) ? "true" : "false") << endl;
        }
        else if (command == "CREDIT") {
            int x;
            long long y;
            ss >> x >> y;
            cout << (bank.credit(x, y) ? "true" : "false") << endl;
        }
        else if (command == "BALANCE") {
            int x;
            ss >> x;
            cout << bank.balance(x) << endl;
        }
    }

    return 0;
}
