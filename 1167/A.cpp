#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    
    for(int i =0;i<n;i++){
        if(s[i]=='8'){
            if(n-i>=11){
                cout<<"YES\n";
                return;
            }
            
        }

    }
    cout<<"NO\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}