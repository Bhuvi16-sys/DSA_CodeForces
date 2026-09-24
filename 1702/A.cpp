#include <iostream>
using namespace std;
void solve() {
    long long m;
    cin >> m;

    long long p_10 = 1;
    while (p_10 * 10 <= m) {
        p_10 *= 10;
    }

    cout << m - p_10 << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}