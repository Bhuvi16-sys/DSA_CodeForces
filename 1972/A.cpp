#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int a[105];
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
    int b[105];
    for(int i =0;i<n;i++){
        cin>>b[i];
    }
    int p_a =0;
    int p_b =0;
    int new_problems =0;
    while (p_b < n) {
        if (a[p_a] <= b[p_b]) {
           
            p_a++;
            p_b++;
        } else {
            new_problems++;
            p_b++;
        }
    }

    cout << new_problems << "\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;

}