#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    double sum = 0.0;
    for (int i = 0; i < n; ++i) {
        double p;
        cin >> p;
        sum += p;
    }

    // Set fixed precision for floating point output
    cout << fixed << setprecision(12) << sum / n << "\n";

    return 0;
}