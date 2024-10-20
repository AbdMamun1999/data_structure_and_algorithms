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
        int cnt = 0,ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            if(ar[i]==0)cnt++;
            else if(ar[i]==1) {
                ans = max(ans,cnt);
                cnt = 0;
            }
        }

        ans = max(ans,cnt);
        
        cout << ans << '\n';

    }
    
    return 0;
}