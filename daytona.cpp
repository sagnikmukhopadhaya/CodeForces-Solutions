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
        int n,m;
        cin >> n>>m;
        vector<int>a(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        bool found=false;
        for(int i=0; i<n; i++)
        {
            if(a[i]==m)
            {
                found=true;
                break;
            }
        }
        if(found)
            cout<<"Yes"<<endl;
        else 
            cout<<"No"<<endl;
    }
}