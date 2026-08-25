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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector <int>>ans;
        vector<int>level;
        int levelNO=0;
        if(root==NULL){
            return ans;
        }
        stack<int>st;
        queue<TreeNode*>q;
        q.push(root);
        q.push(NULL);
        while(!q.empty()){
             TreeNode*temp=q.front();
            q.pop();
           

            
            if(temp==NULL){
                 if(levelNO %2==1){
                 for (int x : level)
                        st.push(x);

                    level.clear();
            
            while(!st.empty()){
                level.push_back(st.top());
                st.pop();
            }
            }
              ans.push_back(level);
                level.clear();

                levelNO++;
  
            if(!q.empty()){
            q.push(NULL);
        }
            }
        

            else{
            level.push_back(temp->val);
            if(temp->left){
        q.push(temp->left);
            }
           if(temp->right){
         q.push(temp->right);
           }
            }

        }
        return ans;
    }
};