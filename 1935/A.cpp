#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    string rev_str = s;
    reverse(rev_str.begin(),rev_str.end());
    if (s <= rev_str) {
        cout << s << "\n";
    } else {
        cout << rev_str << s << "\n";
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