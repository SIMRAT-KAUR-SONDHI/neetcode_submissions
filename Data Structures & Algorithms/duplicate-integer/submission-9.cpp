class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int num:nums){
            if(m[num]>0){
                return 1;
            }
            m[num]=1;
        }
        return 0;
    }
};
