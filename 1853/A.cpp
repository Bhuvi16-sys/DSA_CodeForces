#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int min_op = INT_MAX;
        bool is_unsorted = false;

        for (int i = 0; i < n - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                is_unsorted = true;
                break;
            }
            min_op = min(min_op, (arr[i + 1] - arr[i]) / 2 + 1);
        }

        if (is_unsorted) {
            cout << 0 << "\n";
        } else {
            cout << min_op << "\n";
        }
    }

    return 0;
}