#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int>a(n);
    int res1= INT_MAX; 
    int res2= INT_MIN;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]==0)
        {
            cout<<0<<endl;
            return 0;
        }
        else if(a[i]>0)
        {
            res1=min(res1, a[i]);
        }
        else
        {
            res2=max(res2, a[i]);
        }
    }
    if(res1==INT_MAX)
    {
        cout<<abs(res2)<<endl;
    }
    else if(res2==INT_MIN)
    {
        cout<<abs(res1)<<endl;
    }
    else
    {
        if (abs(res1)<=abs(res2))
            cout<<abs(res1)<<endl;
        else    
            cout<<abs(res2)<<endl;
    }
    return 0;
}
