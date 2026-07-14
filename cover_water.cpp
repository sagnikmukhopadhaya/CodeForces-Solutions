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
        int n;
        cin >> n;
        string s;
        cin>>s;
        bool found=false;
        for(int i=1; i<n-1; i++)
        {
            if(s[i]== '.' && s[i-1]=='.' && s[i+1]=='.')
            {
                found=true;
                break;
            }
        }
        if(found)
        {
            cout<<2<<endl;
        }
        else
        {
            int c=0;
            for(int i=0; i<n; i++)
            {
                if(s[i]=='.') c++;
            }
              cout<<c<<endl;
        }
    }
}
        