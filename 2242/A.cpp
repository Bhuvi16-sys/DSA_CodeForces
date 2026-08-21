#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve(){
    int col;
    cin>> col;
    long long totalCard = 0;
    int more3idential = 0;
    int more2idential = 0;
    for(int i = 0; i < col; i++){
        int count;
        cin>> count;
        totalCard += count;
        if(count >= 3){
            more3idential++;
        }
        if(count >= 2){
            more2idential++;
        }
    }
    if(totalCard <3){
        cout<< "NO"<< endl;
        return;
    }
    if(more3idential >= 1 || more2idential >= 2){
        cout<< "YES"<< endl;
        
    }else{
        cout<< "NO"<< endl;
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>> t;
    while(t--){
        solve();
    }
    return 0;
}