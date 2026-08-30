#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,x,sum1, res, sum2;
        cin>>n>>x;
        vector<int>a(n);
        for (int i=0; i<n ;i++)
        { 
            cin >>a[i];
        }
        sum1=0;
        sum2=0;
        for(int i=0; i<n; i++)
        {
            sum1=sum1+(a[i]+x-1)/x ;
            sum2=sum2+a[i];
        }
        res=(sum2+x-1)/x;
        cout<<res<<" "<<sum1<<endl;
    }
    return 0;
}


