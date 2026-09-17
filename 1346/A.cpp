#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,x;
    cin>>n>>x;
    int total_sum = 0;
    int left = -1;
    int right = -1;
    int a[n];
    for(int i =0;i<n;i++){
        cin>>a[i];
        total_sum += a[i];
        if (a[i] % x != 0) {
            if (left == -1) {
                left = i; 
            }
            right = i;
        }
    }
    if (total_sum % x != 0) {
        cout << n << "\n";
    } 
    else if (left == -1) {
        cout << -1 << "\n";
    } 
    else {
        cout << max(n - left - 1, right) << "\n";
    }

    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}