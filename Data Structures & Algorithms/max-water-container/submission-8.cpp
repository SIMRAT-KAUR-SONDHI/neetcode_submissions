class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxi = INT_MIN;
        int i = 0;
        int j=heights.size()-1;
        int n = heights.size();
        while(j>i){
            int h = min (heights[i],heights[j]);
            int b = j - i ;
            int area = h * b ;
            maxi = max(area,maxi);
            if(heights[i] < heights[j] ){
                i++;
            }
            else if(heights[j] < heights[i]){
                j--;
            }
            else{
                i++;
                j--;
            }
        }
        return maxi;  
    }
};
