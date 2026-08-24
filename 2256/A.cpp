#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void solve(){
    vector<long long> v(3);
    cin >> v[0] >> v[1] >> v[2];
    sort(v.begin(), v.end());
    
    long long ans = min(v[2] - v[0], v[1]);
    cout << ans << "\n";
}
int main(){
    int t;
    cin >>t;
    while(t--){
        solve();

    }
    return 0;
    

    
}
