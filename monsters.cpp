#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >>n>>k;
        vector<int> a(n);
        for (int i= 0;i<n;i++)
        {
            cin>> a[i];
        }
        int maxele= *max_element(a.begin(), a.end());
        while(maxele>0)
        {
            for(int j=0; j<n; j++)
            {
                if(a[j]==maxele)
                {
                    a[j]=a[j]-k;
                    if(a[j]<=0)
                    {
                        cout<<j+1<<" ";
                    }
                    break;
                }
            }
            maxele= *max_element(a.begin(), a.end());
        }
        cout<<'\n';
    }
    return 0;
}

