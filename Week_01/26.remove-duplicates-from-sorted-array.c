class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size()<=1) return nums.size();
        int i=0, j=0;
        for(i=1;i<nums.size();i++){
            if (nums[i]!=nums[j]){
                j++;
                nums[j]=nums[i];
            }
        }
        return j+1;
       
    }
};
