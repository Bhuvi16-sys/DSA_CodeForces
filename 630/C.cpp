#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n<=0){
        return 0;
    }
    long long ans = (1LL << (n + 1)) - 2;
        cout << ans << "\n";
    return 0;
}