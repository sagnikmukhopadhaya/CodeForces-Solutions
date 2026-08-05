#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        if(n<4 || n%2!=0)
        {
            cout<<-1<<endl;
        }
        else
        {
            long long res1,res2;
            if(n%6==0)
            {
                res1=n/6;
            }
            else
            {
                res1=n/6+1;
            }
            res2=n/4;
            if(res1>res2)
            {
                cout<<-1<<endl;
            }
            else
                cout<<res1<<" "<<res2<<endl;;
        }
    }
    return 0;
}