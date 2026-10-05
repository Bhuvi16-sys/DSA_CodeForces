#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int n, k;
    if (!(cin >> n >> k)) return 0;

    string s;
    cin >> s;
    vector<bool> available(26, false);
    for (int i = 0; i < k; ++i) {
        char c;
        cin >> c;
        available[c - 'a'] = true;
    }

    long long total_substrings = 0;
    long long current_len = 0;

    for (int i = 0; i < n; ++i) {
        if (available[s[i] - 'a']) {
            current_len++;
        } else {
            total_substrings += (current_len * (current_len + 1)) / 2;
            current_len = 0;
        }
    }
    total_substrings += (current_len * (current_len + 1)) / 2;
    cout << total_substrings << "\n";
    return 0;
}