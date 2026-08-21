#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    long long pref = 0;
    bool possible = true;
    
    for (int i = 1; i <= n; ++i) {
        long long a;
        cin >> a;
        pref += a;
        
        // Minimal required sum for prefix of length i is i * (i + 1) / 2
        long long min_required = 1LL * i * (i + 1) / 2;
        if (pref < min_required) {
            possible = false;
        }
    }
    
    if (possible) {
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