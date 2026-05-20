class Solution {
public:
    int reverse(int x) {
        int digit=0;
        while(x!=0){
            int reverse=x%10;
            if((digit>INT_MAX/10)||(digit<INT_MIN/10)){
                return 0;
            }
            digit = (digit * 10 ) + reverse;
            x=x/10;
        }
        return digit;
    }
};
