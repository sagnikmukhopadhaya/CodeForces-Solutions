#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    if(!(cin>>t)) return 0;

    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin>>s;
        int maxsum=0;
        int currsum=0;
        for(int i=0; i<s.length();i++)
        {
            if(s[i]=='#')
            {
                currsum ++;
                if(currsum>maxsum) maxsum= currsum;
            }
            else
            {
                currsum=0;
            }
        }
    if(maxsum==0)
    {
        cout<<0<<endl;
    }
    else
        cout<<(maxsum+1)/2<<endl;
    }
}


