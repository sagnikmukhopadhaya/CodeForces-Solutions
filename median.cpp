#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >>n>>k;;
        vector <long long>a(n*k);
        for(int i=0; i<n*k ;i++)
        {
            cin>>a[i];
        }
        long long sum;
        sum=0;
        int i=n*k-n/2-1;
        for(int j=0; j<k ;j++)
        {
            sum=sum+a[i];
            i=i-(n/2+1);
        }
        cout<<sum<<endl;
    }
    return 0;
}
