#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve(){
    int n, m;
    cin>>n>>m;
    vector<long long> a(n);
    for(int i =0; i <n ;i++){
        cin >>a[i];
    }
    vector<long long> b(m);
    for(int i =0; i <m;i++){
        cin>>b[i];
    }
    long long bea = a[0] +n -1;
    long long ver = b[0] +m -1;
    if(bea >= ver){
        cout<<1<<endl;

    }
    else{
        cout<<2<<endl;
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