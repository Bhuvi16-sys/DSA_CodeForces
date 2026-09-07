#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    
    int neg = 0, pos = 0;
    for(int i =0;i<n;i++){
        int x;
        cin >> x;
        if (x == -1) neg++;
        else pos++;     
    }
    int ops = 0;
    while (neg > pos) {
        neg--;
        pos++;
        ops++;
    }
    if (neg % 2 != 0) {
        ops++;
    }

    cout << ops << "\n";
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}