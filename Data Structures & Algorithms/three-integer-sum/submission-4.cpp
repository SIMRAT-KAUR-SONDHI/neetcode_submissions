class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> output;
        sort(nums.begin(),nums.end());
        for(int i=0; i<nums.size()-2;i++){
            if(i>0 && nums[i]==nums[i-1])continue;
            int k=nums.size()-1;
            int j=i+1;
            while(j<k){
                int s= -nums[i];
                int sum=nums[j]+nums[k];
                if(sum == s){                   
                    output.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                    while(j<k && nums[j]==nums[j-1]){
                        j++;
                    }
                    while(j<k && nums[k]==nums[k+1]){
                        k--;
                    }
                }
                else if(sum < s){
                    j++;
                }
                else{
                    k--;
                }
            }
        }
        return output;
    }
};
