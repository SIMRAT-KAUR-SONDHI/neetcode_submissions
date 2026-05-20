class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==0 || n==1){
            return n;
        }
        if(n/2>INT_MAX || n%2>INT_MAX){
            return false;
        }
        if(n%2==0){
            int m=n;
            int i=2;
            while(m>2){
                m=m/i;
                if(m%2 != 0){
                    return false;
                }
                if(m==2){
                    return true;
                }
            }
            
        }
        else{
            return false;
        }
    }
};