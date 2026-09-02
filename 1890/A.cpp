#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a, a + n);
        int c1 = 0, c2 = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] == a[0]) c1++;
            if (a[i] == a[n - 1]) c2++;
        }

        if (c1 + c2 == n && abs(c1 - c2) <= 1) {
            cout << "Yes\n";
        } else if (c1 == n) { 
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    return 0;
}