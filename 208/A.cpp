#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    if (!(cin >> s)) return 0;

    string result = "";
    bool space_needed = false;
    int n = s.length();

    for (int i = 0; i < n; ) {
        if (i + 2 < n && s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B') {
            if (space_needed) {
                result += " ";
                space_needed = false;
            }
            i += 3;
        } else {
            result += s[i];
            space_needed = true;
            i++;
        }
    }

    // Trim any trailing space that might have been added
    while (!result.empty() && result.back() == ' ') {
        result.pop_back();
    }

    cout << result << "\n";
    return 0;
}