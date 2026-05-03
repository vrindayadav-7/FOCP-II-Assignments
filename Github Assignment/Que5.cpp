
#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <sstream>
using namespace std;

class MovieTicket {
private:
    unordered_map<int, unordered_set<int>> bookings;
    unordered_map<int, int> bookedCount;

public:
    bool book(int userId, int movieId) {
        if (bookings[movieId].count(userId)) {
            return false;
        }

        if (bookedCount[movieId] >= 100) {
            return false;
        }

        bookings[movieId].insert(userId);
        bookedCount[movieId]++;
        return true;
    }

    bool cancel(int userId, int movieId) {
        if (!bookings[movieId].count(userId)) {
            return false;
        }

        bookings[movieId].erase(userId);
        bookedCount[movieId]--;
        return true;
    }

    bool isBooked(int userId, int movieId) {
        return bookings[movieId].count(userId);
    }

    int availableTickets(int movieId) {
        return 100 - bookedCount[movieId];
    }
};

int main() {
    int Q;
    cin >> Q;
    cin.ignore();

    MovieTicket mt;

    while (Q--) {
        string line;
        getline(cin, line);

        stringstream ss(line);
        string command;
        ss >> command;

        if (command == "BOOK") {
            int x, y;
            ss >> x >> y;
            cout << (mt.book(x, y) ? "true" : "false") << endl;
        }
        else if (command == "CANCEL") {
            int x, y;
            ss >> x >> y;
            cout << (mt.cancel(x, y) ? "true" : "false") << endl;
        }
        else if (command == "IS_BOOKED") {
            int x, y;
            ss >> x >> y;
            cout << (mt.isBooked(x, y) ? "true" : "false") << endl;
        }
        else if (command == "AVAILABLE_TICKETS") {
            int y;
            ss >> y;
            cout << mt.availableTickets(y) << endl;
        }
    }

    return 0;
}
