class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // unordered_map<int,int> mp;
        // for(int i=0;i<nums.size();i++){
        //     mp[nums[i]]++;
        // }
        // int top_k = 0;
        // int ans = 0;
        // for(int i=0; i<mp.size();i++){
        //     int maxi = mp[i].second;
        //     if(maxi>top_k){
        //         ans = mp[i].first;
                
        //     }
        // }
        vector<int> ans;
        if(nums.size()==1 and k==1){
            return nums;
        }
        if(nums.size()<1 or k==0){
            return ans;
        }
        sort(nums.begin(),nums.end());
        int n = nums.size();
        vector<pair<int,int>> p;
        int count = 1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                count++;
            }
            else{
                p.push_back({count,nums[i-1]});
                count = 1;
            }
        }
        p.push_back({count,nums.back()});
        sort(p.rbegin(),p.rend());
        for(int i=0; i<k; i++){
            ans.push_back(p[i].second);
        }
        return ans;
    }
};