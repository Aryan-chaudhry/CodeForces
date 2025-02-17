#include<bits/stdc++.h>
using namespace std;

bool isSorted(vector<int>&nums){
    for(int i=1; i<nums.size(); i++){
        if(nums[i-1] > nums[i]){ // not >=  because problem say Non-decreasing Order
            return false;
            break;
        }
    }
    // O(n)
    return true;
}

void halloumiBoxes(vector<int>&nums, int k){

    if(isSorted(nums)){
        cout << "YES" << endl;
    } // O(1)
    else{
        if(k==1){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    } // O(1)
}

/*
    Time complexity  : O(n)
    space complexity : O(n)
*/

int main(){

    int t;
    cin >> t;

    while(t--){
        int n,k;
        cin >> n >> k;

        vector<int>nums(n);

        for(int i=0; i<n; i++){
            cin >> nums[i];
        }

        halloumiBoxes(nums, k);
    }
    return 0;
}