#include <bits/stdc++.h>
using namespace std;
void solve(int s){
    vector<string> ones = {
            "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine",
            "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"
        };
        vector<string> tens = {
            "", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"
        };

        if (s < 20) {
            cout << ones[s] << "\n";
        } else {
            if (s % 10 == 0) {
                cout << tens[s / 10] << "\n";
            } else {
                cout << tens[s / 10] << "-" << ones[s % 10] << "\n";
            }
        }
    

}
int main(){
    int s;
    if(cin>>s){
        solve(s);
    }
    return 0;
}