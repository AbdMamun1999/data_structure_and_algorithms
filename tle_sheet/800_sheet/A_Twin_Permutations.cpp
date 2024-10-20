#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int ar[n];
        int mx = 0;
        int mn = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            mx = max(mx,ar[i]);
            mn = min(mn,ar[i]);
        }

        int x = mx+mn;
        for (int i = 0; i < n; i++)
        {
            cout << x - ar[i] << " ";
        }
        cout << '\n';
    }
    

    return 0;
}