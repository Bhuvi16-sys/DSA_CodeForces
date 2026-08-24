#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        int val = n + 1;
        bool isPrime = true;
        
        for (int i = 2; i * 1LL * i <= val; i++) {
            if (val % i == 0) {
                isPrime = false;
                break;
            }
        }
        
        if (isPrime) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}