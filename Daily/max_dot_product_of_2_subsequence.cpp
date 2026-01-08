class Solution {
public:
    int ddp(int k,int j,bool ch,vector<int>& n1,vector<int>& n2,vector<vector<vector<int>>>& dp){
        if(k>=n1.size()||j>=n2.size()){
            if(ch==true)return 0;
            return -1e9;
        }
        if(dp[k][j][ch]!=-1e9)return dp[k][j][ch];
        int sel=n1[k]*n2[j]+ddp(k+1,j+1,true,n1,n2,dp);
        int one=ddp(k+1,j,ch,n1,n2,dp);
        int two=ddp(k,j+1,ch,n1,n2,dp);
        return dp[k][j][ch]=max(sel,max(one,two));
    }
    int maxDotProduct(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<vector<int>>> dp(nums1.size(),vector<vector<int>>(nums2.size(),vector<int>(2,-1e9)));
        return ddp(0,0,false,nums1,nums2,dp);
    }
};