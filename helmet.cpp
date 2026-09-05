#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while (t--)
    {
        int n;
        long long p;
        cin>>n>>p;
        vector<long long> a(n);
        vector<long long> b(n);
        for (int i=0; i<n; i++)
        {
            cin >>a[i];
        }
        for (int i=0; i<n; i++)
        {
           cin >>b[i];
        }
        vector<pair<long long, long long>> v;
        for (int i=0; i<n; i++)
        {
            v.push_back({b[i], a[i]});
        }

        sort(v.begin(), v.end());
        long long ans=p;
        int peop =1;
        for (int i=0; i<n && peop<n; i++)
        {
            long long cost=v[i].first;
            long long ct=v[i].second;
            if (cost >=p)
                break;
            long long x=min(ct, (long long)(n - peop));
            ans += x*cost;
            peop +=x;
        }
        ans += (long long)(n - peop)*p;
        cout << ans << "\n";
    }
    return 0;
}