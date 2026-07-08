class Solution {
public:
    int maxArea(vector<int>& heights) {
        if(heights.size()==0){
            return 0;
        }
        int mini = 0;
        int i =0;
        int j = heights.size()-1;
        int l = min(heights[i],heights[j]);
        int b = j-i;
        int area = l * b;
        mini = max(mini,area);
        while(i<j){
            
            if( heights[i] < heights[j]){
                i++;
                
            }
            else{
                j--;
            }
            int l2 = min(heights[i],heights[j]);
            int area2 = l2 * (j-i);
            mini = max(mini,area2);
        }
        return mini;
    }
};
