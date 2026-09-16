#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        long long sum = 0;
        int mn1= INT_MAX;
        int mn2= INT_MAX;
        for (int i =0; i <n; i++)
        {
            int m;
            cin >>m;
            vector<int> a(m);
            for (int j =0; j <m; j++)
            {
                cin >>a[j];
            }
            sort(a.begin(), a.end());
            mn1= min(mn1, a[0]);
            mn2 = min(mn2, a[1]);
            sum += a[1];
        }
        cout << sum - mn2 + mn1 << "\n";
    }
    return 0;
}