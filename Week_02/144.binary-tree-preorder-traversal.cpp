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
    vector<int> preorderTraversal(TreeNode* root) {
        stack<TreeNode*> myStack;
        vector<int> result;
        if(root==NULL) return result;
        TreeNode *p = root;
        while(p!=NULL || myStack.size()!=0){
            while(p!=NULL){
                result.push_back(p->val);
                myStack.push(p);
                p=p->left;
            }
            p=myStack.top();
            myStack.pop();
            p=p->right;
        }
        return result;
    }

};
