#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, s, k;
    cin >> n >> s >> k;
    
    unordered_set<long long> closed;
    for (int i = 0; i < k; ++i) {
        long long x;
        cin >> x;
        closed.insert(x);
    }
    
    for (long long d = 0; d <= k; ++d) {
        if (s - d >= 1 && closed.find(s - d) == closed.end()) {
            cout << d << "\n";
            return;
        }
        if (s + d <= n && closed.find(s + d) == closed.end()) {
            cout << d << "\n";
            return;
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}