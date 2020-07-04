class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        map<int, int> myMap;
        for(int i=0;i<nums.size();i++){
            if(myMap.count(target-nums[i])!=0){
                int j=myMap[target-nums[i]];
                if(i<j){
                    result.push_back(i);
                    result.push_back(j);
                }else{
                    result.push_back(j);
                    result.push_back(i);
                }
            }
            else{
                myMap[nums[i]]=i;
            }
        }
        return result;
        
    }
};
