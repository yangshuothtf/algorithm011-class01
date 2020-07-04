/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
        queue<TreeNode*> myQueue;
        if(root==NULL) return result;
        myQueue.push(root);
        while(myQueue.size()!=0){
            vector<int> level;
            TreeNode* tmp = NULL;
            int len=myQueue.size();
            for(int i=0;i<len;i++){
                tmp=myQueue.front();
                myQueue.pop();
                level.push_back(tmp->val);
                if(tmp->left!=NULL) myQueue.push(tmp->left);
                if(tmp->right!=NULL) myQueue.push(tmp->right);
            }
            result.push_back(level);
        }
        return result;
        
    }
};
