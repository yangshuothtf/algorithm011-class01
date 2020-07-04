class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        map<int, int>myMap;
        for(int i=0;i<s.length();i++){
                myMap[s[i]]+=1;
        }
        for(int j=0;j<t.length();j++){
            if(myMap[t[j]]>0){
                myMap[t[j]]-=1;
            }
            else{
                return false;
            }
        }
        return true;

    }
};
