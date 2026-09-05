#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int operation = 0;
    for(int i = 0; i < n - 1; i++){
        if((a[i] % 2 == 0 && a[i+1] % 2 != 0) || (a[i] % 2 != 0 && a[i+1] % 2 == 0)){

        }
        else{
            operation++;
        }
    }
    cout << operation << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}