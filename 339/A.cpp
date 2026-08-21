#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    string s;
    cin>>s;
    vector<char> digits;
    //extract all digit 
    for(int i = 0; i<s.length();i+=2){
        digits.push_back(s[i]);
    }
    sort(digits.begin(), digits.end());
    for (int i = 0; i < digits.size(); ++i) {
        cout << digits[i];
        if (i != digits.size() - 1) {
            cout << "+";
        }
    }
    return 0;
}