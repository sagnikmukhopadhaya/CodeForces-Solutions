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
        int n, ans, res;
        cin >> n;
        vector<int>a(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        bool sorted=true;
        for(int i=1;i<n; i++)
        {
            if(a[i]<a[i-1])
            {
                sorted=false;
            }
        }
        res=a[1]-a[0];
        for(int i=2; i<n; i++)
        {
            ans=(a[i]-a[i-1]);
            if(ans<res)
                res=ans;
        }
        if(!sorted)
            cout<<0<<endl;
        else
            cout<<((res/2)+1)<<endl;
    }
    return 0;
}
