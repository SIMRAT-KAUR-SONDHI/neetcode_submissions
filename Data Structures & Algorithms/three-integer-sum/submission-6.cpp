class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<nums.size()-2;i++){
            
            if(i > 0 && nums[i] == nums[i-1])
                continue;
            int j=i+1;
            int k=nums.size()-1;

            while(j<k ){
                int sum = nums[j]+nums[k];
                int target = - nums[i];
                if(sum<target){
                    j++;
                }
                else if(sum==target){
                    vector<int> ans;
                    ans.push_back(nums[i]);
                    ans.push_back(nums[j]);
                    ans.push_back(nums[k]);
                    res.push_back(ans);
                    while(j < k && nums[j] == nums[j+1])
                        j++;

                    while(j < k && nums[k] == nums[k-1])
                        k--;

                    j++;
                    k--;
                }
                else{
                    k--;
                }
            }

        }
        return res;
        
    }
};
