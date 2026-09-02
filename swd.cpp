#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >>t;
    while (t--)
    {
        string s;
        cin>>s;
        int n,count=0;
        n=s.size();
        int c1=0;
        int c2=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='0') c1++;
            else c2++;
        }
        for(int i=0;i<s.size(); i++)
        {
            if(s[i]=='0')
            {
                if(c2>0)
                {
                    c2--;
                }
                else
                {
                    count=n-i;
                    break;
                }
            }
            else
            {
                if(c1>0)
                {
                    c1--;
                }
                else
                {
                    count=n-i;
                    break;
                }
            }
        }
        cout<<count<<"\n";
    }
    return 0;
}


