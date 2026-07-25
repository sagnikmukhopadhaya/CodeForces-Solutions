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
        int n,k,i;
        cin >> n;
        string s;
        cin>>s;
        i=0;
        k=s.size()-1;
        while(i<k && s[i]!=s[k])
        {
            i++;
            k--;
        }
        if(i>k)
            cout<<0<<endl;
        else
            cout<<k-i+1<<endl;
    }
    return 0;
}
        