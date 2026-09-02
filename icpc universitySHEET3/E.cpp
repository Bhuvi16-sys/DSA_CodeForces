#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int ans= 0;
    for(int i =0; i <n;i++){
        cin>>arr[i];   
    }
    int lowest = INT_MAX;
    int index = -1;
    for(int i =0; i <n;i++){
        if(arr[i]<lowest){
            lowest = min(lowest, arr[i]);
            index = i;
        }
        
    }
    cout <<lowest<<" "<<index+1<<endl;

    return 0;
}