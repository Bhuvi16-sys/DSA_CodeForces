#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> coins(n);
    int total_sum = 0;
    
    for (int i = 0; i < n; ++i) {
        cin >> coins[i];
        total_sum += coins[i];
    }
    
    // Sort coins in descending order
    sort(coins.rbegin(), coins.rend());
    
    int my_sum = 0;
    int count = 0;
    
    for (int coin : coins) {
        my_sum += coin;
        count++;
        // Stop when taken sum strictly exceeds the remaining sum
        if (my_sum > total_sum - my_sum) {
            break;
        }
    }
    
    cout << count << endl;
    return 0;
}