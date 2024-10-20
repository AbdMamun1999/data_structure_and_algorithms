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

        int ar[n];
        map<int,int>cnt;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            cnt[ar[i]]++;
        }

        if(cnt.size()==1){
            cout << "NO" << '\n';
        }else{
            cout << "YES" << '\n';
            sort(ar,ar+n);
            cout << ar[n-1] << " ";
            for (int i = 0; i < n-2; i++)
            {
                cout << ar[i] << " ";
            }  
            cout << ar[n-2] << " ";
            cout << '\n';
        }
   }
   

    return 0;
}