#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,c;
        cin >> n;
        vector<int>a(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        c=0;
        for(int i=0; i<n; i++)
        {
            if(a[i]==a[0])
            {
                c++;
            }
        }
        if(c==a.size())
            cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            sort(a.begin(), a.end(), greater<int>());
            if (a[0] == a[1])
            {
                for (int i = 2; i < n; i++)
                {
                    if (a[i] != a[0])
                    {
                        swap(a[1], a[i]);
                        break;
                    }
                }
            }
            for(int i=0; i<n; i++)
            {
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
