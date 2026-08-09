#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        long long mx = 1;
        long long count = 1;
        for (int i = 1; i < n; i++)
        {
            if (a[i] == a[i - 1])
            {
                count++;
            }
            else
            {
                count = 1;
            }
            mx = max(mx, count);
        }
        int ans = 0;
        while (mx < n)
        {
            ans++;
            long long swaps = min(mx, n - mx);
            ans += swaps;
            mx += swaps;
        }
        cout << ans << endl;
    }
    return 0;
}