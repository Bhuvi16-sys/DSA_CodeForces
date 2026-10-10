#include <bits/stdc++.h>
using namespace std;
void solve(){
    long long n,k;
    cin>>n>>k;
    long long ans = 2 * (k-1) +(1LL<<(n-k+1));
    cout<<ans<<endl;

    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;

}