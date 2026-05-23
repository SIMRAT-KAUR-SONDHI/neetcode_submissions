class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();

        if (n < 3) return 0;

        int i = 0;
        int area = 0;

        while (i < n && height[i] == 0) {
            i++;
        }

        while (i < n - 1) {
            int p = i + 1;
            int maxIndex = p;

            while (p < n && height[p] < height[i]) {
                if (height[p] >= height[maxIndex]) {
                    maxIndex = p;
                }
                p++;
            }

            if (p == n) {
                p = maxIndex;
            }

            if (p <= i || height[p] == 0) {
                break;
            }

            int l = p - i - 1;
            int h = min(height[i], height[p]);

            int max_area = l * h;
            int o = 0;

            for (int j = i + 1; j < p; j++) {
                o += height[j];
            }

            area += max_area - o;

            i = p;
        }

        return area;
    }
};