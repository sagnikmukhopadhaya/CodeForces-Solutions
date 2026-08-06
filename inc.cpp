#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        int count;
        cin >> n;
        bool inc=true;
        bool dec=true;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int ans=0;
        for(int i=n-2; i>=0; i--)
        {
            while(a[i]>=a[i+1] && a[i+1]>0)
            {
                a[i]/=2;
                ans++;
            }
            if(a[i]>=a[i+1])
            {
                ans=-1;
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}