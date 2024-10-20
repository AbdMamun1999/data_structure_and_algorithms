#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;
    cin >> n;
    int ar[n];
    int mn = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        mn = min(abs(ar[i]),mn);
    }

    cout << mn << '\n';

    
    return 0;
}