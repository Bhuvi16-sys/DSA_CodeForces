#include <iostream>
#include <vector>
#include <string>
using namespace std;
void solve() {
    int n, m;
    cin >> n >> m;
    
    vector<string> grid(n);
    for (int i = 0; i < n; ++i) {
        cin >> grid[i];
    }
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < m - 1; ++j) {
            int count_ones = (grid[i][j] - '0') + 
                             (grid[i+1][j] - '0') + 
                             (grid[i][j+1] - '0') + 
                             (grid[i+1][j+1] - '0');
            if (count_ones == 3) {
                cout << "NO\n";
                return;
            }
        }
    }
    
    cout << "YES\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}