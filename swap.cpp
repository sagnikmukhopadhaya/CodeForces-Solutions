#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,res;
        cin >> n;
        res=0;
        vector<int>A(n);
        for(int i=0; i<n; i++)
        {
            cin>>A[i];
            res=__gcd(res, abs(A[i]-(i+1)));
        }
        cout<<res<<endl;
    }
    return 0;
}
