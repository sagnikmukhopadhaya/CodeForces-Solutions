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
        int n,sum;
        sum=0;
        cin >> n;
        vector<int>a(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            sum=sum+a[i];
        }
        if((sum &1)==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
        