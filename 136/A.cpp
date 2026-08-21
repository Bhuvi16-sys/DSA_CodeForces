#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    if (!(cin >> n)) return 0;
    vector<int> ans(n + 1);
    for (int i = 1; i <= n; ++i) {
        int p;
        cin >> p;
        ans[p] = i;
    }
    for (int i = 1; i <= n; ++i) {
        cout << ans[i] << (i == n ? "" : " ");
    }
    cout << "\n";
    return 0;
}