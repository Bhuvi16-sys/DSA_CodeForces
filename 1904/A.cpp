#include <iostream>
#include <vector>
#include <set>
using namespace std;

void solve() {
    long long a, b;
    cin >> a >> b;
    long long x_k, y_k;
    cin >> x_k >> y_k;
    long long x_q, y_q;
    cin >> x_q >> y_q;

    int dx[] = {-1, -1, 1, 1};
    int dy[] = {-1, 1, -1, 1};

    set<pair<long long, long long>> king_attacks;
    for (int i = 0; i < 4; ++i) {
        king_attacks.insert({x_k + dx[i] * a, y_k + dy[i] * b});
        king_attacks.insert({x_k + dx[i] * b, y_k + dy[i] * a});
    }

    set<pair<long long, long long>> queen_attacks;
    for (int i = 0; i < 4; ++i) {
        queen_attacks.insert({x_q + dx[i] * a, y_q + dy[i] * b});
        queen_attacks.insert({x_q + dx[i] * b, y_q + dy[i] * a});
    }

    int common_positions = 0;
    for (const auto& pos : king_attacks) {
        if (queen_attacks.count(pos)) {
            common_positions++;
        }
    }

    cout << common_positions << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}