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
        ll n,k;
        cin >> n >> k;

        ll ans = (k  * (2*n-(k-1)))/2;
        if(ans % 2 == 0) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
    

    return 0;
}