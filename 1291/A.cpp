#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    string ans = "";
    for(char c :s){
        if((c-'0')% 2 != 0){
            ans +=c;
            if(ans.length() ==2)break;

        }

    }
    if (ans.length() == 2) {
        cout << ans << "\n";
    } else {
        cout << -1 << "\n";
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