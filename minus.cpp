#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector <long long>a(n);
        vector <long long>b;
        for(int i=0; i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0; i<n; i++)
        {
            if(a[i]%2!=0)
                b.push_back(1);
            else if(a[i]%4==0)
                b.push_back(0);
            else
                b.push_back(2);
        }
        map<long long, int> mp;
        for(int i =0; i<n; i++)
        {
            mp[b[i]]++;
        }
        int freq = 0;
        for(auto it=mp.begin(); it!=mp.end(); it++)
        {
            freq =max(freq, it->second);
        }
        cout << freq<<"\n";
    }
    return 0;
}
