/*find maximum in the integer array using recursion*/

#include<bits/stdc++.h>
using namespace std;

int helper(vector<int>&nums,int i){
    if(i>= nums.size())return INT_MIN;
    int m = helper(nums,i+1);

    return (m >= nums[i] ? m : nums[i]);
}

int findMaxi(vector<int>&nums){
    return helper(nums,0);
}

int main(){

    return 0;
}
