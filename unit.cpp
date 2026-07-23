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
        int n, c1, c2;
        cin >> n;
        c1=0;
        c2=0;
        vector<int>a(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(int i=0; i<n; i++)
        {
            if(a[i]== -1)
                c1++;
            else
                c2++;
        }
        int ans=0;
        while(c2<c1)
        {
            c1--;
            c2++;
            ans++;
        }
        if(c1 %2 !=0)
            ans++;
        cout<<ans<<endl;
    }
    return 0;
}