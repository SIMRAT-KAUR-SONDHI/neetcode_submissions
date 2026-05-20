class Solution {
public:
    bool isPalindrome(string s) {
        int low=0;
        int high=s.length()-1; 
        if(s.length()==0 || s.length()==1){
            return true;
        }
        while(low<=high){
            if(!isalnum(s[low])){
                low++;
                continue;
            }
            if(!isalnum(s[high])){
                high--;
                continue;
            }
            if(tolower(s[low])==tolower(s[high])){
                low++;
                high--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};