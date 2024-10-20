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
        int value = 1;
        for (int i = 0; i < n; i++)
        {
            cout << value << " ";
            value+=2;
        }
        cout << '\n';
    }
    
    
    return 0;
}