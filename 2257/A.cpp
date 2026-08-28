#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <cctype>

using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    set<char> first_letters;
    while (n--) {
        string w;
        cin >> w;
        first_letters.insert(toupper(w[0]));
    }

    bool possible = true;
    while (m--) {
        string a;
        cin >> a;
        for (char c : a) {
            if (!first_letters.count(c)) {
                possible = false;
            }
        }
    }

    cout << (possible ? "YES\n" : "NO\n");
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