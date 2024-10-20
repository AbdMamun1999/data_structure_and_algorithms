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
        ll n,k,x;
        cin >> n >> k >> x;

        ll atleast = (k * (k+1))/2;
        ll heigest = (k * (2*n-(k-1)))/2;
        if(x >= atleast && x <= heigest) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
    
    return 0;
}