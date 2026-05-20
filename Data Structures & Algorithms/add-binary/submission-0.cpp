class Solution {
public:
    string addBinary(string a, string b) {
        int m=a.size()-1,n=b.size()-1;
        int carry=0;
        string res="";
        while(m>=0 || n>=0 || carry>0){
            int digitA = m>=0 ? a[m]-'0':0;
            int digitB = n>=0 ? b[n]-'0':0;
            int total=digitA+digitB+carry;
            res += (total%2)+'0';
            carry=(total/2);
            m--;
            n--;
        }
        reverse(res.begin(),res.end());
        return res;
    }
};