#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a,n;
        cin >> a>>n;
        long long rem;
        rem=n%4;
        if(a%2==0)
        {
            if(rem==0);
            else if(rem==1) a=a-n;
            else if(rem==2) a=a+1;
            else if(rem==3) a=a+n+1;
        }
        else 
        {
            if(rem==0);
            else if(rem==1) a=a+n;
            else if(rem==2) a=a-1;
            else if(rem==3) a=a-n-1;

        }
        cout<<a<<endl;
    }
    return 0;
}