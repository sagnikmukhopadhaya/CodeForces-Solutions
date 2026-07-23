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
        int a,b;
        cin >> a>>b;
        if(a>b && (a%b==0))
        {
            cout<<2<<endl;
            cout<<b+1<<" "<<a-(b+1)<<endl;
        }
        else if(a>b && (a%b!=0))
        {
            cout<<1<<endl;
            cout<<a<<endl;
        }
        else if(a<b)
        {
            cout<<1<<endl;
            cout<<a<<endl;
        }
        else
        {
            cout<<2<<endl;
            cout<<1<< " "<<a-1<<endl;
        }
    }
    return 0;
}