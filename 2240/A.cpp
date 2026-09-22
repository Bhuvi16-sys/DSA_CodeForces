#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;

        long long remaining = n; 
        long long count = 0;

        for (int b = 0; b <= 21 && remaining > 0; b++) {
            long long val = 1LL << b;                 
            long long buy = min(k, remaining / val);  
            count += buy;
            remaining -= buy * val;
        }

        cout << count << "\n";
    }
    return 0;
}