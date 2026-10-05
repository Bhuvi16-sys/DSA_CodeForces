#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t > 0) {
        long long n, k, q;
        cin >> n >> k >> q;
        
        long long answer = 0;
        long long current_streak = 0;
        
        for (int i = 0; i < n; i++) {
            long long temp;
            cin >> temp;
            
            if (temp <= q) {
                current_streak++;
                if (current_streak >= k) {
                    answer += (current_streak - k + 1);
                }
            } else {
                current_streak = 0;
            }
        }
        
        cout << answer << "\n";
        t--;
    }
    
    return 0;
}