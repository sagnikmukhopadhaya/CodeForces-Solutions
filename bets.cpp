#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long a,b,g,d,r,p,f;
        cin >> a>>b;
        g=abs(a-b);
        if(g==0) 
        {
            cout<<0<<" "<<0<<endl;
        }
        else
        {
            d=max(a,b)/g;
            r=max(a,b)%g;
            p=g*(d+1);
            f=min(r,p-max(a,b));
            if(r==0)
            {
                cout<<g<<" "<<0<<endl;
            }
            else
            {
            cout<<g<<" "<<f<<endl;
            }
        }
    }
    return 0;
}

        