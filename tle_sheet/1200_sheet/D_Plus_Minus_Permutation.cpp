#include <bits/stdc++.h>
#define ll long long
using namespace std;

int gcd(int  a, int b){
    return __gcd(a,b);
}

int lcm(int a, int b){
    return (a / gcd(a,b)) * b;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--)
    {
        ll n,x,y,red,blue,purple;
        cin >> n >> x >> y;
        purple =n / lcm(x,y);
        red = (n / x) - purple;
        blue = (n / y) - purple;

        ll sum1 = (red * ((2 * n)-(red - 1)) ) / 2;
        ll sum2 = blue * (blue + 1) / 2;

        cout << sum1 - sum2 << '\n';
    }
    
    
    return 0;
}