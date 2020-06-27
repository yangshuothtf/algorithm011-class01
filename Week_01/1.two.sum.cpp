class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        map<int, int> myMap;
        for(int i=0;i<nums.size();i++){
            if(myMap.count(target-nums[i])!=0){
                int j=myMap[target-nums[i]];
                if(i<j){
                    res.push_back(myMap[target-nums[i]]);
                    res.push_back(i);
                }
                else{
                    res.push_back(i);
                    res.push_back(myMap[target-nums[i]]);
                }
            }
            else{
                myMap[nums[i]]=i;
            }
        }
        return res;
        
    }
};
