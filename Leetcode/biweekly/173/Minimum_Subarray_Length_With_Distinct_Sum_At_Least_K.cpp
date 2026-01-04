class Solution {
public:
    int minLength(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        long long sum=0;
        int l=0;
        int ans=INT_MAX;
        for(int j=0;j<nums.size();j++){
            mp[nums[j]]++;
            if(mp[nums[j]]==1) sum+=nums[j];
            while(sum>=k){
                ans=min(ans,j-l+1);
                mp[nums[l]]--;
                if(mp[nums[l]]==0){
                    sum-=nums[l];
                }
                l++;
            }
        }
        if(ans==INT_MAX)return -1;
        return ans;
    }
};
