#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        int ans =INT_MAX;
        for(int i=0; i<n; i++)
        {
            int x =a[i]%k;
            if(x==0)
            {
                ans=0;
            }
            else
            {
                ans=min(ans, k-x);
            }
        }
        if(k==4)
        {
            int even=0;
            for(int i = 0; i < n; i++)
            {
                if(a[i]%2==0)
                {
                    even++;
                }
            }
            if(even >= 2)
            {
                ans=0;
            }
            else if(even==1)
            {
                ans=min(ans, 1);
            }
            else
            {
                ans=min(ans, 2);
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}

