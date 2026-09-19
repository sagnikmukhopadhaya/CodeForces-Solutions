#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        for(int i=0; i<n; i++)
        {
            cin >> b[i];
        }
        map<int, int> freqa;
        map<int, int> freqb;
        int count =1;
        for(int i=1; i<n; i++)
        {
            if(a[i]==a[i-1])
            {
                count++;
            }
            else
            {
                freqa[a[i-1]]= max(freqa[a[i-1]], count);
                count= 1;
            }
        }
        freqa[a[n-1]]= max(freqa[a[n-1]], count);
        count = 1;
        for(int i=1; i<n; i++)
        {
            if(b[i]== b[i-1])
            {
                count++;
            }
            else
            {
                freqb[b[i-1]]= max(freqb[b[i-1]], count);
                count = 1;
            }
        }
        freqb[b[n-1]]= max(freqb[b[n-1]], count);
        int high = 0;
        for(auto x: freqa)
        {
            high= max(high, x.second + freqb[x.first]);
        }
        for(auto x: freqb)
        {
            high= max(high, x.second + freqa[x.first]);
        }
        cout <<high << "\n";
    }
    return 0;
}

