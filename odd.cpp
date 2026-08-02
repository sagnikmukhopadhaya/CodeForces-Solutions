#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,q;
        cin>>n>>q;
        vector<long long>a(n +1);
        vector<long long>pre(n +1);
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
            pre[i]=pre[i-1]+a[i];
        }
        long long sum=pre[n];
        while(q--)
        {
            long long l,r,k;
            cin>>l>>r>>k;
            long long old=pre[r]-pre[l-1];
            long long news=(r-l+1)*k;
            long long res=sum-old+news;
            if((res & 1)!=0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}