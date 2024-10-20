#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        bool flag = true;
        for (ll i = 0; i < n; i++)
        {
            if(a[i] % 2 != 0) flag = false;
        }
        
        if(!flag){
            cout << 3 << '\n';
        }else cout << 2 << '\n';
    }
    
    
    return 0;
}