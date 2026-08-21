#include <iostream>
#include <string>

using namespace std;

void solve() {
    string s;
    cin >> s;

    // Step 1: Alice removes the first '0'
    size_t zero_idx = s.find('0');
    if (zero_idx != string::npos) {
        s.erase(zero_idx, 1);
    }

    // Step 2: Bob removes the first '1'
    size_t one_idx = s.find('1');
    if (one_idx != string::npos) {
        s.erase(one_idx, 1);
    }

    cout << s << "\n";
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