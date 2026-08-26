#include <bits/stdc++.h>
using namespace std;
int solve(string s, char x, char y)
{
    int n = s.size();
    int i = n - 1;
    while(i >= 0 && s[i] != y)
    {
        i--;
    }
    if(i < 0)
        return 100;
    int j = i - 1;
    while(j >= 0 && s[j] != x)
    {
        j--;
    }
    if(j < 0)
        return 100;
    return (n - 1 - i) + (i - j - 1);
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;

        int ans = 100;
        ans = min(ans, solve(s, '0', '0'));
        ans = min(ans, solve(s, '2', '5'));
        ans = min(ans, solve(s, '5', '0'));
        ans = min(ans, solve(s, '7', '5'));
        cout << ans << endl;
    }
}