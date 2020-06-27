class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> result(digits.size(), 0);
        bool bIsAddOne = false;
        for(int i=digits.size()-1;i>=0;i--){
            result[i]=digits[i];
            if(i==digits.size()-1){
                result[i]+=1;
            }
            if(bIsAddOne){
                result[i]+=1;
            }
            if(result[i] / 10 >= 1){
                bIsAddOne = true;
            }
            else{
                bIsAddOne = false;
            }
            result[i] = result[i]%10;
        }
        if(bIsAddOne){
            result.push_back(0);
            for(int i=result.size()-1;i>=1;i--){
                result[i]=result[i-1];
            }
            result[0]=1;
        }
        return result;
    }
};
