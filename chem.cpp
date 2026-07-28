#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n,k;
        cin >> n>>k;
        string s;
        cin>>s;
        vector<int> freq(26);
        for (char ch:s)
            freq[ch- 'a']++;
        int odd=0;
        for(int i=0; i<26;i++)
        {
            if(freq[i]%2)
                odd++;
        }
        if(odd<=k+1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}