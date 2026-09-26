#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        long long n;
        cin>> n;
        long long p=n;
        for(int i=2; i*i<=n; i++)
        {
            if(n%i==0)
            {
                p=i;
                break;    
            }
        }
        long long a=n/p;
        long long b=n-a;
        cout<<a<<' '<<b<<'\n';
    }
    return 0;
}