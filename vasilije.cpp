#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n,k,x, minsum, maxsum;
        cin >> n>>k>>x;
        minsum=k*(k+1)/2;
        maxsum=k*(2*n-k+1)/2;
        if(x>=minsum && x<=maxsum)
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
    return 0;
}