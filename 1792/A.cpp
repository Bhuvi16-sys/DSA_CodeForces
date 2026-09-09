#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int count_one = 0;

    for(int i =0;i<n;i++){
        int x;
        cin>>x;
        if(x==1){
            count_one ++;

        }

    }
    int count_gr8 = n - count_one;
    int pair_one = (count_one +1)/2;
    int total = count_gr8 +pair_one;
    cout<<total<<"\n";

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}