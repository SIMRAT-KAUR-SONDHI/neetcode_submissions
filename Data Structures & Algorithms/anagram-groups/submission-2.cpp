class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> res;
        for(const auto&s : strs){
            string sortedS = s;
            sort(sortedS.begin(),sortedS.end());
            res[sortedS].push_back(s);
        }
        vector<vector<string>> result;
        for(auto& pair : res){
            result.push_back(pair.second);
        }
        return result;
        // vector<list> output(strs.size());
        // string strs2 = strs;
        // int i=0;
        // while(i<strs2.size()){
        //     sort(strs2[i].begin(),strs2[i].end());
        //     i++;
        // }
        // sort(strs2.begin(),strs.end());
        // for(int i=0;i<strs2.size();i++){
        //     list a= [];
        //     int n=1;
        //     if(strs2[i]==strs2[i+n]){
        //         for(int j=0;j<n;j++){
        //             a.append(strs2[i]);
        //         }
        //         n++;
        //     }
       // }
    //    vector<list> output;
    //    if(strs.size()==0){
    //     list a{0};
    //     output.push_back(a);
    //     return output;
    //    }
    //    map <string,int> mp(strs.size());
    //    for(int i =0 ; i<strs.size();i++){
    //     int count = strs[i][0]-'a';
    //     for(int j=1 ; j < strs[i].length();j++){
    //         int sum = strs[i][j] -'a';
    //         count = count + sum;
    //     }
    //     mp.push_back(strs[i],count);
    //     if(mp.find()==count){
    //         output.push_back(strs[i]);
    //         output.push_back(strs[i]);
    //     }
    //    }
    //    return output ;
    //    if(strs.size()==1){
    //     int a{1} = strs;
    //     output.append(a);
    //     return output;
    //    }



    }
};
