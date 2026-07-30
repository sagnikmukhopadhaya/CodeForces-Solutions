#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin >> n>>k;
        vector<int>arr(n);
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        int count=1;
        int res=1;
        sort(arr.begin(), arr.end());
        for(int i=1; i<n; i++)
        {
            if(arr[i]-arr[i-1]<=k)
            {
                count++;
            }
        
            else
            {
                count=1;
            }
            res=max(res, count);
        }
        cout<<n-res<<endl;
    }
    return 0;
}