#include <bits/stdc++.h>
using namespace std;

string solve(int n, vector<int>& a) {
    sort(a.begin(), a.end(), greater<int>());
    
    long long alexSum = 0, bobSum = 0;
    set<int> alexUsed, bobUsed;
    
    // freq map of remaining piles
    map<int, int, greater<int>> freq;
    for (int x : a) freq[x]++;
    
    int turn = 0;
    
    while (!freq.empty()) {
        bool consumed = false;
        
        for (auto it = freq.begin(); it != freq.end(); ++it) {
            int val = it->first;
            
            if (turn == 0) { // Alex
                if (alexUsed.find(val) == alexUsed.end()) {
                    alexSum += val;
                    alexUsed.insert(val);
                    it->second--;
                    if (it->second == 0) freq.erase(it);
                    consumed = true;
                    turn = 1;
                    break;
                }
            } else { // Bob
                if (bobUsed.find(val) == bobUsed.end()) {
                    bobSum += val;
                    bobUsed.insert(val);
                    it->second--;
                    if (it->second == 0) freq.erase(it);
                    consumed = true;
                    turn = 0;
                    break;
                }
            }
        }
        
        if (!consumed) break;
    }
    
    return (alexSum > bobSum) ? "Alex" : "Bob";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        cout << solve(n, a) << "\n";
    }
    return 0;
}