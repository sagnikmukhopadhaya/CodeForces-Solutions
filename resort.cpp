#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k, q;
        cin>> n>> k>> q;
        vector<int> a(n);
        for(int i=0; i<n; i++)
        {
            cin>> a[i];
        }
        long long sum= 0;
        int c= 0;
        for(int i= 0; i<n; i++)
        {
            if(a[i]<=q)
            {
                c++;
            }
            else
            {
                if(c>=k)
                {
                    sum+=1LL*(c-k+1)*(c-k+2)/2;
                }
                c=0;
            }
        }
        if(c>=k)
        {
            sum+=1LL*(c-k+1)*(c-k+2)/2;
        }
        cout<< sum<< "\n";
    }
    return 0;
}