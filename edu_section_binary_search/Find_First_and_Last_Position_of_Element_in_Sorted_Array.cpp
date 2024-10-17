// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int first_occurance(vector<int>&nums,int target,int n){
    int l = 0, r = n - 1, idx = -1, mid;
    while(r >= l){
        mid = (l+r)/2;
        if(target == nums[mid]){
            r = mid - 1;
            idx = mid;
        }
        else if(target < nums[mid]){
            r = mid - 1;
        }else{
            l = mid + 1;
        }
    }
    return idx;
}

int last_occurance(vector<int>&nums,int target,int n){
    int l = 0, r = n - 1, idx = -1, mid;
    while(r >= l){
        mid = (l+r)/2;
        if(target == nums[mid]){
            l = mid + 1;
            idx = mid;
        }
        else if(target > nums[mid]){
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

    int n , target;
    cin >> n  >> target;
    vector<int>nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    
 
    vector<int> v;
    int first = first_occurance(nums,target,n);
    int last = last_occurance(nums,target,n);
    cout << first << " " << last << endl;
    return 0;
}

    

    

