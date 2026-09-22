#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int a,b,c;
    cin>>a>>b>>c;
    int mini = n-min({a,b,c});
    cout<<mini<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}