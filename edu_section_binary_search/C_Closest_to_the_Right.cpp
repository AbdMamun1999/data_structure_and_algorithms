//https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/C
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n , k;
    cin >> n >> k;

    int  a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    while (k--)
    {
        int x;
        cin >> x;

        int l = 0, r = n-1,mid,idx = n;
        while (l <= r)
        {
            mid = (l+r)/2;
            if(a[mid] >= x){
                r = mid - 1;
                idx = mid;
            }else {
                l = mid + 1;
            }
        }
        cout << idx + 1 << '\n';
    
    }
    return 0;
}