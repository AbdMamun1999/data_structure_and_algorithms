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

        vector<int>a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a.begin(),a.end());
        int value1 = a[0];
        vector<int>v;
        for (int i = 0; i < n; i++)
        {
            if(a[i] % value1 != 0) v.push_back(a[i]);
        }

        sort(v.begin(),v.end());
        int value2 = 0;
        if(!v.empty()) value2 = v[0];
        bool flag = true;
        for (auto val : v)
        {
            if(val % value2 != 0) flag = false;
        }

        if(flag) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
    
    
    return 0;
}