#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int>a(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a.begin(), a.end());
        bool check=true;
        int g=a[0];
        for(int i=1; i<n; i++)
        {
            g=__gcd(g, a[i]);
            {
                if(g>i+1)
                {
                    check=false;
                    break;
                }
            }
        }
        if(check)
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
    return 0;
}