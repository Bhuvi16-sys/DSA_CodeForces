#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    if (!(cin >> n)) return 0;

    long long total_sum = 0;
    long long min_odd = 2e9; 
    for (int i = 0; i < n; ++i) {
        long long x;
        cin >> x;
        total_sum += x;
        if (x % 2 != 0) {
            min_odd = min(min_odd, x);
        }
    }
    if (total_sum % 2 != 0) {
        total_sum -= min_odd;
    }

    cout << total_sum << "\n";

    return 0;
}