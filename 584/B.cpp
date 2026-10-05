#include <iostream>
using namespace std;
const int MOD = 1e9 + 7;
long long pow(long long base, long long exp) {
    long long res = 1;
    base %= MOD;
    while (exp > 0) {
        if (exp % 2 == 1) res = (res * base) % MOD;
        base = (base * base) % MOD;
        exp /= 2;
    }
    return res;
}

int main() {
    
    long long n;
    if (cin >> n) {
        long long total = pow(27, n);
        long long unsatisfied = pow(7, n);
        long long ans = (total - unsatisfied + MOD) % MOD; 
        
        cout << ans << "\n";
    }
    
    return 0;
}