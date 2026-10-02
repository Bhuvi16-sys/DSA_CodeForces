#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long sum =0;

    for(int i =0;i<n;i++){
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        int area = (x2-x1+1) * (y2-y1+1);
        sum+= area;

    
    }
    cout<<sum<<endl;

    return 0;
}