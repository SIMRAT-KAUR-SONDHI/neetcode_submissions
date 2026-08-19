class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0;
        int j = s.length()-1;
        while(i<=j){
            if((s[i]>='A' && s[i]<='Z') or (s[i]>='a' && s[i]<='z') or (s[i]>='0' && s[i]<='9')){
                if((s[j]>='A' && s[j]<='Z') or (s[j]>='a' && s[j]<='z') or (s[j]>='0' && s[j]<='9')){
                    if(tolower(s[i]) != tolower(s[j])){
                        return false;
                    }
                    else{
                        i++;
                        j--;
                    }
                }
                else{
                    j--;
                }
            }
            else{
                i++;
            }
            
        }
        return true;
    }
};
