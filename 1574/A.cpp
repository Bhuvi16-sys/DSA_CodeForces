#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    for (int i = 1; i <= n; ++i) {
        string s = "";
        for (int j = 0; j < i; ++j) s += '(';
        for (int j = 0; j < i; ++j) s += ')';
        for (int j = 0; j < n - i; ++j) s += "()";
        
        cout << s << "\n";
}
}
int main(){
    int T;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;

}