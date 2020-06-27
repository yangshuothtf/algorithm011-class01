class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int i=0, j=nums.size()-1;
        vector<int> res;
        while(i<j){
            if (nums[i]+nums[j]<target){
                i++;
            }
            else if(nums[i]+nums[j]>target){
                j--;
            }
            else{
                res.push_back(i);
                res.push_back(j);
                return res;
            }
        }
        return res;
        
    }
};
