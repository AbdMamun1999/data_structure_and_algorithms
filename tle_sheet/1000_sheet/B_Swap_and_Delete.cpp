#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    string s;
    cin >> s;

    int cnt_0 = 0,cnt_1 = 0;
    for (auto ch : s)
    {
        if(ch=='0')cnt_0++;
        else cnt_1++;
    }

    int size = s.size();

    for (auto ch : s)
    {
        if(ch == '0'){
            if(cnt_1 > 0 ){
                cnt_1--;
                cnt_0--;
            }
        }else{
            if(cnt_0 > 0 ){
                cnt_0--;
                cnt_1--;
            }
        }
    }

    cout << size << '\n';
    
    

    return 0;
}