#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(){
    int n ;
    cin>>n;
    vector<int> boy(n);
    for(int i =0; i <n;i++){
        cin>> boy[i];
    }
    int m ;
    cin>>m;
    vector<int> girl(m);
    for(int i =0; i<m;i++){
        cin>> girl[i];
    }

    sort(boy.begin(), boy.end());
    sort(girl.begin(), girl.end());
    int i,j = 0;
    int count =0;
    while (i < n && j < m) {
        if (abs(boy[i] - girl[j]) <= 1) {
            count++;
            i++;
            j++;
        } else if (boy[i] < girl[j]) {
            i++;
        } else {
            j++;
        }
    }

    cout<< count;
    return 0;
}