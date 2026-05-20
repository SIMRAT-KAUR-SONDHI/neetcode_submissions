class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> output(n+1);
        for(int num=1;num<=n;num++){
           int i=num;
           while(i!=0){
            output[num]++;
            i&=(i-1);
           }
        }
        return output;
    }
};
