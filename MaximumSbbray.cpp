class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi=nums[0];
        int cur=nums[0];
        int n=nums.size();
        for(int i=1;i<n;i++){
            int sum=cur+nums[i];;
            cur=max(nums[i],sum);
            maxi=max(maxi,cur);
        }
        return maxi;
        
    }
};
