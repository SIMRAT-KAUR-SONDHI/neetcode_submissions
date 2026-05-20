class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>result(nums.size());
        int n=nums.size();
        int i =0;
        int j= n-1;
        int id=n-1;
        for(int i=0;i<nums.size();i++){
            nums[i]=nums[i]*nums[i];
        }
        while(i<=j){
            if(nums[j]<nums[i]){
                result[id]=nums[i];
                id--;
                i++;
            }
            else{
                result[id]=nums[j];
                id--;
                j--;
            }
        }
        return result;
    }
};