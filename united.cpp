#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, x, y;
        cin >> n;
        vector<int>a(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a.begin(), a.end());
        vector<int>b;
        vector<int>c;
        b.push_back(a[0]);
        for(int i=1; i<n; i++)
        {
            if(a[i]==a[0])
            {
                b.push_back(a[i]);
            }
            else
            {
                c.push_back(a[i]);
            }
        }
        x=b.size();
        y=c.size();
        if(x==0 || y==0)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<x<< " "<<y<<endl;
            for(int i=0; i<b.size(); i++)
            {
                cout<<b[i]<<" ";
            }
            cout<<endl;
            for(int i=0; i<c.size(); i++)
            {
                cout<<c[i]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}