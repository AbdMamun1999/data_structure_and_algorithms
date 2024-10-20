//https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/A
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n,k;
    cin >> n >> k;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    

    for (int i = 0; i < k; i++)
    {
        int x;
        cin >> x;

        int l = 0, r = n-1, mid;
        bool ok = false;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if( x == a[mid]){
                ok = true;
                break;
            }
            if(x < a[mid]){
                r = mid - 1;
            }else{
                l = mid + 1;
            }
        }
        if(ok) cout << "YES" << '\n';
        else cout << "NO" << '\n';

    }
    
    return 0;
}