class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
    
        // for(int i=0;i<nums.size();i++){
        //     nums[i]=nums[i]*nums[i];
            
        // }
        // sort(nums.begin(),nums.end());
        // return nums;
        int n=nums.size();
        int i=0;
        int j=n-1;
        vector<int>ans(n);
        for(int k=n-1;k>=0;k--){
            int comp1=nums[i]*nums[i];
            int comp2=nums[j]*nums[j];
            if(comp1>comp2){
                ans[k]=comp1;
                i++;
            }
            else{
                ans[k]=comp2;
                j--;
            }
        }
        return ans;
    }
};
