class Solution {
public:
    int maxArea(vector<int>& heights) {
      int low =0;
      int high = heights.size()-1;
      int length = high-low;
      int breadth = min(heights[low],heights[high]);
      int area = length * breadth;
      while(low<high){
        if(heights[low]<heights[high]){
            low++;
        }
        else{
            high--;
        }
        int max_area = min(heights[low],heights[high]) * (high-low);
        if (max_area>area){
            area=max_area;
        }
      }
      return area;
      
    }
};
