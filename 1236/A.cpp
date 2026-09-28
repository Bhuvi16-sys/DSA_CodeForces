#include <bits/stdc++.h>
using namespace std;
void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    int op2 = min(b, c / 2);
    b -= op2;
    int op1 = min(a, b / 2);
    
    cout << 3 * (op1 + op2) << "\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}