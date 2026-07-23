#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k, x;
        cin >> n >> k >> x;

        if (x != 1) {
            cout << "YES\n" << n << "\n";
            while (n--) cout << 1 << " ";
            cout << "\n";
        }
        else if (k == 1 || (n % 2 && k == 2)) {
            cout << "NO\n";
        }
        else {
            cout << "YES\n";
            if (n % 2 == 0) {
                cout << n / 2 << "\n";
                while (n) {
                    cout << 2 << " ";
                    n -= 2;
                }
            } else {
                cout << (n - 3) / 2 + 1 << "\n";
                while (n > 3) {
                    cout << 2 << " ";
                    n -= 2;
                }
                cout << 3;
            }
            cout << "\n";
        }
    }
}
