#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,k,c;
        cin>>n>>k;
        string s;
        cin>>s;
        c=0;
        if(k==1)
        {
            for(int i=0; i<s.size(); i++)
            {
                if(s[i]=='1')
                {
                    c++;
                }
            }
        }
        else
        {
            for(int i=0; i<n; i+=k)
            {
                bool found = false;
                for(int j=i; j<i+k && j<n; j++)
                {
                    if(s[j]=='0')
                    {
                        found = true;
                        break;
                    }
                }
                if(!found)
                c++;
            }
        }
        cout<<c<<"\n";
    }
    return 0;
}
    