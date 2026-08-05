#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin >>n;
        int c=0;
        k=0;
        vector<long long>a(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        bool found=false;
        for(int i=0; i<n; i++)
        {
            if(a[i]!=0)
            {
                if(!found)
                {
                    c++; 
                    found=true;;
                }
            }
            else
            {
                found=false;
            }
        }
        if(c>2)c=2;
        cout<<c<<endl;
    }
    return 0;
}


        
