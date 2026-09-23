#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin>>n;
        string s;
        cin>> s;
        int l[26]={};
        int r[26]={};
        for (int i=0; i<n; i++)
            r[s[i]-'a']++;
        int c1=0;
        int c2=0;
        for (int i=0; i<26; i++)
        {
            if(r[i]>0)
                c2++;
        }
        int ans=0;
        for(int i=0; i<n-1; i++)
        {
            if(l[s[i]-'a']==0)
                c1++;
            l[s[i]-'a']++;
            r[s[i]-'a']--;
            if (r[s[i]-'a']==0)
                c2--;
            ans=max(ans, c1 +c2);
        }
        cout<<ans<<'\n';
    }
}