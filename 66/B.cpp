#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> height(n);
    
    // 1. Read ALL inputs first
    for (int i = 0; i < n; i++) {
        cin >> height[i];
    }

    int maxWateredArea = 0;

    // 2. Process the results after the vector is fully populated
    for (int i = 0; i < n; i++) {
        int count = 1;

        // Flow left
        int left = i;
        while (left > 0 && height[left - 1] <= height[left]) {
            count++;
            left--;
        }

        // Flow right
        int right = i;
        while (right < n - 1 && height[right + 1] <= height[right]) {
            count++;
            right++;
        }

        maxWateredArea = max(maxWateredArea, count);
    }

    cout << maxWateredArea << endl;

    return 0;
}