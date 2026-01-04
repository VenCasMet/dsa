class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=0;
        for(int j=1;j<nums.size();j++){
            if(nums[j]==nums[j-1]){
                ans=nums[j];
                break;
            }
        }
        return ans;
    }
};