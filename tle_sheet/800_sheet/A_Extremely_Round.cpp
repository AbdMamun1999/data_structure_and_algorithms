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

        int ans;
        if(n >= 1 && n <= 9) 
            ans = n;
        else if(n >= 10 && n <= 99)
            ans = (n/10) + 9;
        else if(n >= 100 && n <= 999)
            ans = (n/100) + 9 + 9;
        else if(n >= 1000 && n <= 9999)
            ans = (n/1000) + 9 + 9 + 9;
        else if(n >= 10000 && n <= 99999)
            ans = (n/10000) + 9 + 9 + 9 + 9;
        else if(n >= 100000 && n <= 999999)
            ans = (n/100000) + 9 + 9 + 9 + 9 + 9;
        
        cout << ans << '\n';
    }
    
    return 0;
}