
class Solution {
public:
    bool isAnagram(string s, string t) {
        stack<int>str;
        // int count=0;
        if(s.length()!=t.length()){
            return false;
        }
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        // if(s.length()==t.length()){
        //     for(int i=0;i<s.length();i++){
        //         str.push(s[i]);
        //     }
        //     for(int j=t.length()-1; j<0 ;j++){
        //         if(str.top()==t[j]){
        //             count=count+1;
        //             str.pop();
        //         }
        //     }
        //     if(count==s.length() || str.empty()){
        //         return true; 
        //     }
        //     else{
        //         return false;
        //     }

        // }
        // else{
        //     return false;
        // }
        return s == t;
        // for(int i=0;i<s.length();i++){
        //     for(int j=0;j<t.length();j++){
        //         if(s[i]==t[j]){
        //             count=count+1;
        //         }
        //         else{
        //             return false;
        //         }
        //     }
        // }
        // if(count==s.length()){
        //     return true;
        // }

    }
};
