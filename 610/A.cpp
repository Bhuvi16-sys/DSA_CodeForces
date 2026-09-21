#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n % 2 != 0) {
        cout << "0\n";
    } else {
        int m = n / 2;
        int ways = (m - 1) / 2;
        cout << ways << "\n";
    }

    return 0;
}
