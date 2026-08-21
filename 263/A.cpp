#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int val;
    for (int row = 1; row <= 5; ++row) {
        for (int col = 1; col <= 5; ++col) {
            cin >> val;
            if (val == 1) {
                // Calculate distance to center (3, 3)
                int moves = abs(row - 3) + abs(col - 3);
                cout << moves << "\n";
                return 0;
            }
        }
    }

    return 0;
}