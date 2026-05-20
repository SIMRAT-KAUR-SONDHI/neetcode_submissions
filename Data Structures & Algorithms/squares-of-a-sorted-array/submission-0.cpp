class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>pos;
        vector<int>neg;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                neg.push_back(nums[i]);
            }
            else{
                pos.push_back(nums[i]);
            }
        }
        if(pos.size()==0){
            for(int i=0;i<neg.size();i++){
                neg[i]=neg[i]*neg[i];
            }
            reverse(neg.begin(),neg.end());
            return neg;
        }
        if(neg.size()==0){
            for(int i=0;i<pos.size();i++){
                pos[i]=pos[i]*pos[i];
            }
            return pos;
        }
        vector<int>result(pos.size()+neg.size());
        int id=0;
        int i=0;
        int j=0;
        for(int i=0 ; i<pos.size();i++){
            pos[i]=pos[i]*pos[i];
        }
        for(int j=0 ; j<neg.size();j++){
            neg[j]=neg[j]*neg[j];;
        }
        reverse(neg.begin(),neg.end());

        while(i<pos.size() & j<neg.size()){
            if(pos[i]<=neg[j]){
                result[id]=pos[i];
                id++;
                i++;
            }
            else{
                result[id]=neg[j];
                id++;
                j++;
            }
        }
        while(j<neg.size()){
            result[id]=neg[j];
            id++;
            j++;
        }
        while(i<pos.size()){
            result[id]=pos[i];
            id++;
            i++;
        }
        return result;

    }
};