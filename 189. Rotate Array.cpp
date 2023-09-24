#include <bits/stdc++.h>
class Solution {
public:
    void reversea(vector<int>& nums,int start,int end ){
        while(start<end){
            int temp=nums[start];
            nums[start]=nums[end];
            nums[end]=temp;
            start++;
            end--;

        }
    }
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        reversea(nums,0,n-1);
        reversea(nums,0,k-1);
        reversea(nums,k,n-1);
    }
};
