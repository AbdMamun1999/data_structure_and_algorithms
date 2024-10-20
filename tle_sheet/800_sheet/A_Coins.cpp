#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    ll t;
    cin >> t;
    while (t--)
    {
        ll n,k;
        cin >> n >> k;

        if(n%2==0) cout << "YES" << '\n';
        else{
            if(k%2==0) cout << "NO" << '\n';
            else cout << "YES" << '\n';
        }
    }
    
    
    return 0;
}