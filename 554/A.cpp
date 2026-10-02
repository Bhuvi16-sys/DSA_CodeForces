#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    for (char &c : s) {
        c = tolower(c);
    }
    int n = s.length();
    cout << 25 * n + 26 << endl;

    return 0;
}