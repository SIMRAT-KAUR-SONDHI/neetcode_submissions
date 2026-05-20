class Solution {
public:
    int maxArea(vector<int>& height) {
       int low = 0;
       int high = height.size()-1;
       int length = min(height[low],height[high]);
       int breadth = high-low;
       int area = length*breadth;
       while(low<high){
            if(height[low] < height[high]){
                low++;
            }
            else{
                high--;
            }
            int max_area=min(height[low],height[high]) * (high-low);
            if(max_area>area){
                area=max_area;
            }
       }
       return area;
    }
};