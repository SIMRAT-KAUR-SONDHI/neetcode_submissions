#include<algorithm>
#include<stack>
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        if(nums.size()==0){
            return false;
        }
        sort(nums.begin(),nums.end());
        stack<int> elements;
        elements.push(nums[0]);
        int count=0;
        for(int i=1;i<nums.size();i++){
            if(elements.top()==nums[i]){
                count=count+1;
            }
            else{
                elements.push(nums[i]);
            }  
        }
        if(count!=0){
            return true;
        }
        else{
            return false;
        }
    }

};
