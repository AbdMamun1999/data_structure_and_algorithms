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

        if(n==1) {
            cout << 0 << '\n';
        }
        else{
            map<int,int>prime_factor;
            bool flag = true;
            for (int i = 2; i*i <= n; i++)
            {
                while (n%i==0)
                {
                    prime_factor[i]++;
                    n/=i;
                }

                if(i > 3){ 
                    flag = false;
                    break;
                }
            }

            if(n > 1) prime_factor[n]++;

            bool flag2 = true;
            for (auto [x,y] : prime_factor)
            {
                if(x > 3){
                    flag2 = false;
                    break;
                }
            }
            

            if(!flag || !flag2){
                cout << -1 << '\n';
            }else{
                if(prime_factor[2] > prime_factor[3]){
                    cout << -1 << '\n';
                }else{
                    cout << prime_factor[3] + prime_factor[3] - prime_factor[2] << '\n';
                }
            }
        }
    }
    
    
    return 0;
}