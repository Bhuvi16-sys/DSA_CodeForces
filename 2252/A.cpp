#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> cnt(1001, 0);
    int total_sum = 0;
    
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        cnt[val]++;
        total_sum += val;
    }
    int max_freq = 0;
    int dominant_val = 0;
    for (int val = 1; val <= 1000; val++) {
        if (cnt[val] > max_freq) {
            max_freq = cnt[val];
            dominant_val = val;
        }
    }
    
    int other_count = n - max_freq;
    int allowed = other_count + 2;
    if (max_freq > allowed) {
        int wasted_cards = max_freq - allowed;
        total_sum -= wasted_cards * dominant_val;
    }
    
    cout << total_sum << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}