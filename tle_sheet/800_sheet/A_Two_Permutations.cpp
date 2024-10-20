#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--)
    {
        int n,a,b;
        cin >> n >> a >> b;

        if(n>= a+b+2) cout << "YES" << '\n';
        else {
            if(a+b == n*2) cout << "YES" << '\n';
            else cout << "NO" << '\n';
        }
    }
    return 0;
}