//hackerearth
#include <iostream>
#include <vector>
#include <string>
 
using namespace std;
 
// Function to check if a given length l works
bool canTurnOff(string bulbs, int n, int k, int l) {
 
    int operations = 0;
    int i = 0;
 
    while (i < n) {
 
        // If bulb is ON
        if (bulbs[i] == '1') {
 
            operations++;
 
            // Turn off next l bulbs
            i += l;
        }
        else {
            i++;
        }
    }
 
    return operations <= k;
}
 
int main() {
 
    int n, k;
    cin >> n >> k;
 
    string bulbs;
    cin >> bulbs;
 
    int left = 1;
    int right = n;
 
    int answer = n;
 
    // Binary Search for minimum l
    while (left <= right) {
 
        int mid = (left + right) / 2;
 
        if (canTurnOff(bulbs, n, k, mid)) {
 
            answer = mid;
            right = mid - 1;
        }
        else {
            left = mid + 1;
        }
    }
 
    cout << answer << endl;
 
    return 0;
}
