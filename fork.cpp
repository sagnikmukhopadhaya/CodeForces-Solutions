#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long a, b;
        cin >> a >> b;

        long long xk, yk;
        cin >> xk >> yk;

        long long xq, yq;
        cin >> xq >> yq;

        // Store all unique knight moves
        set<pair<long long, long long>> moves;

        int sign[] = {1, -1};

        for (int sx : sign) {
            for (int sy : sign) {
                moves.insert({sx * a, sy * b});
                moves.insert({sx * b, sy * a});
            }
        }
        set<pair<long long, long long>> king;
        set<pair<long long, long long>> queen;
         for (auto move : moves) {
            king.insert({xk + move.first, yk + move.second});
            queen.insert({xq + move.first, yq + move.second});
        }
        int ans = 0;
        for (auto pos : king) {
            if (queen.count(pos))
                ans++;
        }

        cout << ans << endl;
    }

    return 0;
}