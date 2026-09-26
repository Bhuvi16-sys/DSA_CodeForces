#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    int cnt1 = 0;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        cnt1 += x;
    }
    if(cnt1 >= n - cnt1){
        cout << "Bessie\n";
    } else {
        cout << "Elsie\n";
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}