class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0;
        int j=numbers.size()-1;
        vector<int> n;
        while(i<j){
            int sum = numbers[i]+numbers[j];
            if(sum<target){
                i++;
            }
            if(sum > target){
                j--;
            }
            if(sum==target){
                n.push_back(i+1);
                n.push_back(j+1);
                return n;
            }
        }
    }
};
