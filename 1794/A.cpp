#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<string> str;
    for (int i = 0; i < 2 * n - 2; ++i) {
        string s;
        cin >> s;
        if (s.length() == n - 1) {
            str.push_back(s);
        }
    }
    string a = str[0];
    string b = str[1];
    reverse(b.begin(), b.end());
    if(a==b){
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
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