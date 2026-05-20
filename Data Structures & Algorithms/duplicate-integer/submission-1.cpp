#include<unordered_map>
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int num:nums){
            if(m[num]>0){
                return true;
            }
            m[num]=1;
        }
        return false;
    }
};
