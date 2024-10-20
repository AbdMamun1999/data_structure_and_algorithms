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

        string s;
        cin >> s;

        
        int idx = 0;
        int l = 0,r=n-1;
        while (l <= r)
        {
            if(s[l]==s[r]) break;
            else idx = l+1;
            l++;
            r--;
        }
        
        cout << n -  (idx*2) << endl;

    }
    
    
    return 0;
}