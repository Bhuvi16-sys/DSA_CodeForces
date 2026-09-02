#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x > 0) {
            cout << 1 << " ";
        } else if (x < 0) {
            cout << 2 << " ";
        } else {
            cout << 0 << " ";
        }
    }
    cout << "\n";

    return 0;
}