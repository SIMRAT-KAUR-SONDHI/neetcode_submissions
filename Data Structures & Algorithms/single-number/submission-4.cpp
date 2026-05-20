class Solution {
public:
    // int singleNumber(vector<int>& nums) {
    //     int count=0;
    //     for(int i=0;i<nums.size();i++){
    //         count=count^nums[i];
    //     }
    //     return count;
    // }
    
     int singleNumber(vector<int>& nums) {
        unordered_map<int, int> freq;

    // Step 1: Count frequency
        for (int num : nums) {
            freq[num]++;
    }

    // Step 2: Find the element with frequency 1
        for (auto pair : freq) {
            if (pair.second == 1) {
                return pair.first;
        }
    }

    return -1; // Should never reach here if input is valid
}
};
