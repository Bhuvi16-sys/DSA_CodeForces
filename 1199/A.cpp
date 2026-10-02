#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,x,y;
    cin>>n>>x>>y;
    vector<int> a(n);
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
    for (int i = 0; i < n; i++) {
        bool is_valid = true;
        // Check for x days before
        for (int j = max(0, i - x); j < i; j++) {
            if (a[i] >= a[j]) {
                is_valid = false;
                break;
            }
        }
        // Check for y days after
        if (is_valid) {
            for (int j = i + 1; j <= min(n - 1, i + y); j++) {
                if (a[i] >= a[j]) {
                    is_valid = false;
                    break;
                }
            }
        }
        if (is_valid) {
            cout << i + 1 << "\n";
            return 0;
        }
    }

    return 0;
}