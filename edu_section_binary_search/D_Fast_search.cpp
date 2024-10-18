#include <bits/stdc++.h>
#define ll long long
using namespace std;

int first_idx(int *a,int n, int target){
    int l = 0, r = n-1, mid, idx = n;
    while (r >= l)
    {
        mid = l+(r-l)/2;
        if(a[mid] >= target){
            idx = mid;
            r = mid - 1;
        }else {
            l = mid + 1;
        }
    }
  return idx;
}

int last_idx(int *a,int n, int target){
    int l = 0, r = n-1, mid, idx = -1;
    while (r >= l)
    {
        mid = l+(r-l)/2;
        if(a[mid]<=target){
            idx = mid;
            l = mid + 1;
        }else{
            r = mid - 1;
        }
    }
    return idx;
}


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
        int idx1 = first_idx(a,n,l);

        int idx2 = last_idx(a,n,r);
        cout << idx2 - idx1 + 1 << " "; 
    }
    
    return 0;
}