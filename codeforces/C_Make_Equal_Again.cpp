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
        int n;
        cin >> n;

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int value1 = a[0],value2 = a[n-1];
        int cnt1 = 0,cnt2 = 0;
        for (int i = 0; i < n; i++)
        {
            if(value1==a[i])cnt1++;
            else break;
        }

        for (int i = n-1; i >= 0; i--)
        {
            if(value2==a[i])cnt2++;
            else break;
        }

        if(value1 == value2){
            if(cnt1+cnt2 >= n) cout << 0 << '\n';
            else cout << n - (cnt1+cnt2) << '\n';
        }else{
            
            cout << n - max(cnt1,cnt2) << '\n';
        }
    }
    
    
    
    return 0;
}