class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> output;
        
        for(int p=0;p<nums.size();p++){
            int i =nums[p];
            output.push_back(i);
        }
        for(int i=0;i<nums.size();i++){
            output.push_back(nums[i]);
        }
        return output;
        
    }
};