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
        int c1=0;
        int c2=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='0')
            {
                c1++;
            }
            else
            {
                c2++;
            }
        }
        int count=min(c1,c2);
        if(count%2!=0)
        {
            cout<<"DA"<<"\n";
        }
        else    cout<<"NET"<<"\n";
    }
    return 0;
}