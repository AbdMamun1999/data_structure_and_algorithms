#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool cmp(pair<ll,ll>a, pair<ll,ll>b){
    return b.second > a.second;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    ll n,k;
    cin >> n >> k;
    vector<int> a(n),b(n);
    for (ll i = 0; i < n; i++)
        cin >> a[i];

    for (ll i = 0; i < n; i++)
        cin >> b[i];

    vector<pair<ll,ll>>v;
    for (ll i = 0; i < n; i++)
        v.push_back({a[i],b[i]});

    sort(v.begin(),v.end(),cmp);

    for (auto [x,y] : v)
    {
        cout << x << " " << y << endl;
    }
    
    cout << endl;

        
        
    

    
    return 0;
}