//全排列
class Solution {
public:
    vector<vector<int>> result;
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> track;
        backtrack(nums, track);
        return result;
    }

    void backtrack(vector<int>& nums, vector<int> track){
        if (track.size()==nums.size()){
            result.push_back(track);
            return;
        }
        for(int i=0;i<nums.size(); i++){
            if(find(track.begin(), track.end(), nums[i])==track.end()){
                //没找到
                track.push_back(nums[i]);
                backtrack(nums, track);
                track.pop_back();
            }
        }
    }
   
};
//难度有点大了
