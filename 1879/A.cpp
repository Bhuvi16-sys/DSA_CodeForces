#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int p_s, p_e;
    cin>>p_s>>p_e;
    bool can_win = true;
    for(int i =0;i<n;i++){
        int s,e;
        cin>>s>>e;
        if(s>=p_s&&s>=p_e){
            can_win = false;
        }
        if (can_win) {
        cout << p_s << "\n";
    } else {
        cout << -1 << "\n";
    }
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