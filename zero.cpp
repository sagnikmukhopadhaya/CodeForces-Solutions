#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, xr;
        cin >> n;
        xr=0;
        for (int i = 0; i < n; i++) 
        {
            int x;
            cin >> x;
            xr ^= x;
        }
        if (n % 2 == 1)
        {
            cout << xr << "\n";
        } 
        else 
        {
            if (xr == 0)
                cout << 0 << "\n";
            else
                cout << -1 << "\n";
        }
    }
    return 0;
}