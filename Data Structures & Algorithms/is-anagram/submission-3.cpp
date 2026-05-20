
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
        unordered_map<char,int>m;
        unordered_map<char,int>p;
        for(int i=0;i<s.length();i++){
            m[s[i]]++;
            p[t[i]]++;
        }
        return m==p;


    }
};
