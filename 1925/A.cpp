#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n, k;
    cin >> n >> k;
    string alpha = "";
    for (int i = 0; i < k; ++i) {
        alpha += (char)('a' + i);
    }
    
    string result = "";
    for (int i = 0; i < n; ++i) {
        result += alpha;
    }
    
    cout << result << "\n";

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;

}