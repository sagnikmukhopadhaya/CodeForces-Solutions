#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,c1,c2;
        long long res;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        c1=0;
        c2=0;
        for(int i=0; i<n; i++)
        {
            if(a[i]==0) 
            {
                c1++;
            }
            if(a[i]==1) 
            {
                c2++;
            }
        }
        if(c2>=1)
        {
            res=c2*(1LL <<c1);
            cout<<res<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
    }
    return 0;
}

