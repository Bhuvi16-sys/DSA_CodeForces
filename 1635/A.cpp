#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int total =0;
    for(int i =0;i<n;i++){
        long long x;
        cin>>x;
        total |=x;
        

    }
    cout<<total<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
