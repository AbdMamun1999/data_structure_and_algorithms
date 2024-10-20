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
        
        int  ar[n];
        int cnt_2 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            if(ar[i]==2)cnt_2++;
        }
        
        int x = cnt_2/2;

        if(cnt_2==0)cout << 1 << '\n';
        else if(cnt_2%2==0){
            int ans = 0;
            int i;
            for ( i = 0; i < n; i++)
            {
                if(ar[i]==2)ans++;
                if(ans==x)break;
            }
            cout << i+1 << '\n';
        }
        else cout << -1 << '\n';
    }
    
    return 0;
}