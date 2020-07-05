学习笔记
二叉树的遍历，深度优先DFS,广度优先BFS.
BFS用queue可以做遍历，不好用递归。
DFS用stack做遍历，也可以用递归，DFS有前序，中序，后序之分。
其中，后序遍历首先用前序遍历，然后反转。
前序遍历的非递归方法有两种遍历形式，
法一，和中序遍历类似：
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

法二: 很优雅但是只能用于前序遍历
   vector<int> preorderTraversal(TreeNode* root) {
        vector<int> result;
        if(root==NULL) return result;
        TreeNode *p=root;
        stack<TreeNode*> myStack;
        myStack.push(p);
        while(!myStack.empty()){
            p=myStack.top();
            myStack.pop();
            result.push_back(p->val);
            if(p->right) myStack.push(p->right);
            if(p->left) myStack.push(p->left);
        }
        return result;
    }
 后序遍历： 把前序遍历的结果反转过来
  
