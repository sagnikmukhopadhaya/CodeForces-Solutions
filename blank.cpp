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
        int n,c, ans;
        cin >> n;
        c=0;
        ans=0;
        vector<int>a(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(int i=0; i<n; i++)
        {
            if(a[i]==0)
            {
                c++;
                ans=max(c, ans);
            }
            else
            {
                c=0;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}