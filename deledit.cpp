#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, target;
        cin >> s >> target;
        vector<int> freq(26, 0);
        for (int i = 0; i < target.size(); i++)
        {
            freq[target[i] - 'A']++;
        }
        int j = target.size() - 1;
        bool possible = true;
        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (j >= 0 && s[i] == target[j])
            {
                freq[s[i] - 'A']--;
                j--;
            }
            else
            {
                if (freq[s[i] - 'A'] > 0)
                {
                    possible = false;
                    break;
                }
            }
        }
        if (j >= 0)
            possible = false;

        if (possible)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
