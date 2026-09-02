#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i =0; i <=n;i++){
        cin>>arr[i];
    }
    long long summ= 0;
    for(auto el: arr){
        summ += el;
    }
    cout<<abs(summ)<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
 
}