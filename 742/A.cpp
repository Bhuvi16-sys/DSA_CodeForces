#include <iostream>

using namespace std;

long long binpow(long long a, long long b, long long mod) {
    long long res = 1;
    a %= mod;
    
    while (b > 0) {
        if (b % 2 == 1) {
            res = (res * a) % mod;
        }
        a = (a * a) % mod;
        b /= 2;
    }
    
    return res;
}

int main() {
   
    long long n;
    cin >> n;
    
    cout << binpow(1378, n, 10) << "\n";
    
    return 0;
}