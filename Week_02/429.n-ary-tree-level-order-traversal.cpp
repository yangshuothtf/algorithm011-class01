/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> result;
        queue<Node*> myQueue;
        if(root==NULL) return result;
        Node* p = root;
        myQueue.push(root);
        while(myQueue.size()!=0){
            int len=myQueue.size();
            vector<int> level;
            for(int i=0;i<len;i++){
                p=myQueue.front();
                myQueue.pop();
                level.push_back(p->val);
                for(int j=0;j<p->children.size();j++){
                    if(p->children[j]!=NULL){
                        myQueue.push(p->children[j]);
                    }
                }
            }
            result.push_back(level);
        }
        return result;        
    }
};
