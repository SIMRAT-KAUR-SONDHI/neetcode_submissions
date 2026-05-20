class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int count =0;
        int sum=0;
        for(int i=1;i<=nums.size();i++){
            count=count+i;
        }
        for(int i=0;i<nums.size();i++){
            sum=nums[i]+sum;
        } 
        if(count != sum){
            if(sum > count){
                int u=sum-count;
                return u;
            }
            if(count > sum){
                int u=count-sum;
                return u;
            }

            else{
                return 0;
            }
        }
    }
};
