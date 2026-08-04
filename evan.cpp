#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >>n;
        string s;
        cin>>s;
        vector<int>freq(26,0);
        int count=1;
        for(int i=1; i<n; i++)
        {
            if(s[i]!=s[i-1])
            {
                count++;
            }
        }
        bool found1=false;
        bool found2=false;
        for(int i=1; i<n-1;i++)
        {
            bool iso=(s[i]!=s[i-1]) && (s[i]!=s[i+1]);
            if(iso)
            {
                if(s[i-1]==s[i+1])
                {
                    found2=true;
                    break;
                }
                else
                {
                    found1=true;
                }
            }
        }
        if(found2)
        {
            cout<<max(1,count-2)<<endl;
        }
        else if(found1)
        {
            cout<<max(1,count-1)<<endl;
        }
        else
        {
            cout<<count<<endl;
        }
    }
    return 0;
}

