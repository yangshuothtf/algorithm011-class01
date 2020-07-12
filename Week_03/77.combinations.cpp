class Solution {
public:
    vector<vector<int>> result;
    vector<vector<int>> combine(int n, int k) {
        vector<int> tmp;
        traverse(n, k, tmp);
        return result;
    }
    void traverse(int n, int k, vector<int> tmp){
        if (tmp.size()==k){
            result.push_back(tmp);
            return;
        }
        int begin=1;
        if(tmp.size()!=0){
            begin=tmp[tmp.size()-1];
        }
        for(int i=begin;i<=n;i++){
            if (find(tmp.begin(), tmp.end(), i)==tmp.end()){
                //没找到
                tmp.push_back(i);
                traverse(n, k, tmp);
                tmp.pop_back();
            }
        }


    }
};
