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
    vector<int>path;
    int ans=0;
    void solve(TreeNode*root){
        if(root==NULL)
        {
            return;
        }
        path.push_back(root->val);
   if(root->left == NULL & root->right==NULL){
         int num=0;
         for(int i=0;i<path.size();i++){
            num=num*10+path[i];
         }
         ans+=num;
   }
      

      solve(root->left);
      solve(root->right);
      path.pop_back();

    }
    int sumNumbers(TreeNode* root) {
        solve(root);
        return ans;
    }
};