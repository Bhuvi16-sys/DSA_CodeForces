#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    long long n;
    if (!(cin >> n)) return 0;
    
    long long min_val = 2e9, max_val = -1;
    long long min_count = 0, max_count = 0;
    
    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        if (x < min_val) {
            min_val = x;
            min_count = 1;
        } else if (x == min_val) {
            min_count++;
        }
        if (x > max_val) {
            max_val = x;
            max_count = 1;
        } else if (x == max_val) {
            max_count++;
        }
    }
    if (min_val == max_val) {
        cout << 0 << " " << (n * (n - 1)) / 2 << "\n";
    } else {
        cout << max_val - min_val << " " << min_count * max_count << "\n";
    }
    
    return 0;
}