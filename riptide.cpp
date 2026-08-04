#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a,b,c,ans1,ans2,res,count;
        cin >>a>>b>>c;
        ans1=max(a,max(b,c));
        ans2=min(a,min(b,c));
        res=a+b+c-ans1-ans2;
        count=0;
        while(ans1!=ans2 && ans2!=res && ans1!=res) 
        {
            ans1--;
            ans2++;
            count++;
            int mx=max(ans1, max(ans2,res));
            int mn=min(ans1,min(ans2,res));
            int rem=ans1+ans2+res-mx-mn;
            ans1=mx;
            ans2=mn;
            res=rem;
        }
        cout<<count<<endl;
    }
    return 0;
}
