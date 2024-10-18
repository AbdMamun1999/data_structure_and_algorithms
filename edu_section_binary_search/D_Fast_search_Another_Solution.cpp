#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a,a+n);
    
    int q;
    cin >> q;
    while (q--)
    {
        int l,r;
        cin >> l >> r;
        int *idx1 = lower_bound(a,a+n,l);

        int *idx2 = upper_bound(a,a+n,r);
        cout << idx2 - idx1 << " "; 
    }
    
    return 0;
}