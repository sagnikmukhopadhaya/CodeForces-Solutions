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
        int n,c,b,count;
        cin >> n;
        c=0;
        b=0;
        count=0;
        vector<int>a(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]==2)
                c++;
        }
        for(int i=0; i<n; i++)
        {
            if(a[i]==1)
                count++;
        }
        if(count==a.size())
        {
            cout<<1<<endl;
        }
        else if(c%2==0)
        {
            bool found=false;
            for(int i=0; i<n; i++)
            {
                if(a[i]==2)
                {
                    b++;
                    if(b==c/2)
                    {
                        cout<<i+1<<endl;
                        found=true;
                        break;
                    }
                }
            }
            if(!found)
            {
                cout<<-1<<endl;
            }
        }
        else  
        {  
            cout<<-1<<endl;
        }
    }
    return 0;
}
