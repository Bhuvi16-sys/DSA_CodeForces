#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> w(n);
    for (int i = 0; i < n; ++i) {
        cin >> w[i];
    }

    // Odd n can never cover all positions [1..n]
    if (n % 2 != 0) {
        cout << "NO\n";
        return;
    }

    // Use proper long long integer bounds (wi <= 10^9)
    long long min_odd = 2e9; 
    long long max_even = -1;

    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) { // 1-based odd positions
            min_odd = min(min_odd, w[i]);
        } else {         // 1-based even positions
            max_even = max(max_even, w[i]);
        }
    }

    // Valid integer k exists if max_even + 1 <= min_odd - 1
    if (max_even + 1 < min_odd) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}