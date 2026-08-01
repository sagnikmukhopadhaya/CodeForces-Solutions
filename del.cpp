#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin>>s;
        int n;
        n=s.size();
        for(int i=0; i<n; i++)
        {
            if(s[i]=='0')
            {
                s.erase(i,1);
                break;
            }
        }
        for(int i=0; i<n; i++)
        {
            if(s[i]=='1')
            {
                s.erase(i,1);
                break;
            }
        }
        cout<<s<<endl;
    }
    return 0;
}