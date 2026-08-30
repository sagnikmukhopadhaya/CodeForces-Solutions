#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >>t;
    while (t--)
    {
        int n,i;
        cin >>n;
        vector<int> a(n);
        for (i= 0; i<n ; i++)
        {
            cin >> a[i];
        }
        bool flag=false;
        for(i=0; i<n-2; i++)
        {
            if(a[i]<a[i+1]&&a[i+1]>a[i+2])
            {
                cout<<"YES"<<endl;
                cout<<i+1<<" "<<i+2<<" "<<i+3<<endl;
                flag=true;
                break;
            }
        }
        if(!flag)
            cout<<"NO"<<endl;
    }
    return 0;
}
