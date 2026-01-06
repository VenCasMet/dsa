/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode*> q;
        long long ans=0,sum=INT_MIN;
        q.push(root);
        int val=0;
        while(!q.empty()){
            val++;
            int a=q.size();
            long long curr=0;
            for(int j=0;j<a;j++){
                TreeNode* node=q.front();
                q.pop();
                curr+=node->val;
                if(node->left)q.push(node->left);
                if(node->right)q.push(node->right);
            }
            if(curr>sum){
                ans=val;
                sum=curr;
            }
        }
        return ans;
    }
};