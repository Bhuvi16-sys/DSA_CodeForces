#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int a,b;
    cin>>a>>b;
    if(a==n && b==n){
        cout<<"Yes"<<"\n";
    }
    else if(a < n && b < n && a + b <= n - 2){
        cout<<"Yes"<<"\n";
    }
    else{
        cout<<"No"<<"\n";
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
