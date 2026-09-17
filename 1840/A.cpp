#include <iostream>
#include <string>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    string a ="";
    int i = 0;
    while (i < n) {
        char current = s[i];
        a += current; 
        
        int j = i + 1;
        while (j < n && s[j] != current) {
            j++;
        }
        
        i = j + 1; 
    }
    cout << a << "\n";

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}