#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int mid = (n-1)/2;
    int operation = 0;
    for (int i = mid; i < n; ++i) {
        if (a[i] == a[mid]) {
            operation++;
        } else {    
            break; 
        }
    }  
    cout << operation << "\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}