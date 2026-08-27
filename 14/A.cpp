#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    if (!(cin >> n >> m)) return 0;

    vector<string> grid(n);
    for (int i = 0; i < n; ++i) {
        cin >> grid[i];
    }

    int min_r = n, max_r = -1;
    int min_c = m, max_c = -1;

    for (int r = 0; r < n; ++r) {
        for (int c = 0; c < m; ++c) {
            if (grid[r][c] == '*') {
                min_r = min(min_r, r);
                max_r = max(max_r, r);
                min_c = min(min_c, c);
                max_c = max(max_c, c);
            }
        }
    }

    for (int r = min_r; r <= max_r; ++r) {
        for (int c = min_c; c <= max_c; ++c) {
            cout << grid[r][c];
        }
        cout << "\n";
    }

    return 0;
}