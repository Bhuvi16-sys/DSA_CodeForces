#include <iostream>
#include <string>
using namespace std;
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin >> s;

        int len = s.length();
        if(len >10){
            char start = s[0];
            char end = s[len - 1];
            int middle_count = len - 2;
            cout<<start<<middle_count<<end<<endl;
        }
        else{
            cout<<s<<endl;
        }
    }
    return 0;

}