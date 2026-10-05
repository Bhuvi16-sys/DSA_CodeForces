#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, L, a;
    cin>>n>>L>>a;
    int curr_time =0;
    int tot_break =0;
    for (int i = 0; i < n; ++i) {
        int t, l;
        cin >> t >> l;
        tot_break = (t-curr_time)/a;
        curr_time = t+l;

    }
    tot_break += (L - curr_time) / a;
    cout << tot_break << "\n";
    return 0;
}