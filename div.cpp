#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        int c,res;
        cin >>n;
        c=0;
        res=0;
        if(n==1) 
            cout<<1<<endl;
        else
        {
            for(int i=1; i<=sqrt(n); i++)
            {
                if(n%i==0)
                {
                    c++;
                    res=max(c,res);
                }
                else
                {
                    c=0;
                }
            }
            cout<<res<<endl;
        }
    }
    return 0;
}