class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        while (n) {
            n &= (n - 1);  // clear the least significant 1-bit
            count++;
        }
        return count;
    }
};
