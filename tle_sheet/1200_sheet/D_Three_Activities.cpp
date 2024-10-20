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

        vector<pair<int,int>>a(n),b(n),c(n);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a[i] = {x,i};
        }

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            b[i] = {x,i};
        }
        
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            c[i] = {x,i};
        }
        
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        sort(c.begin(),c.end());


        int mx = 0;
        for (int i = n-1; i >= n-3; i--)
        {
            for (int j = n-1; j >= n-3; j--)
            {
                for (int k = n-1; k >= n-3; k--)
                {
                    if((a[i].second != b[j].second) && (a[i].second != c[k].second) && (b[j].second != c[k].second)){
                        mx = max(mx,a[i].first + b[j].first + c[k].first);
                    }
                }
            }
        }
        
        cout << mx << '\n';
    }
    
    

    return 0;
}