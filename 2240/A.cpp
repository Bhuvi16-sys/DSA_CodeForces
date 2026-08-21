#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;//number of test cases
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;

        long long remaining = n; //n is total budget sum , k = how many numbers you're allowed to create
        long long count = 0;

        for (int b = 0; b <= 21 && remaining > 0; b++) {//current bit position
            long long val = 1LL << b;                 // cost of a bit at this position
            long long buy = min(k, remaining / val);  // how many we can afford, capped by k
            count += buy;
            remaining -= buy * val;
        }

        cout << count << "\n";
    }
    return 0;
}