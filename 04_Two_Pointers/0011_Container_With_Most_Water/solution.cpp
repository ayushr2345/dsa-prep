class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxVol = 0;
        int low = 0;
        int high = height.size() - 1;
        while (low < high) {
            int volume = height[low] > height[high] ? (high - low) * height[high] : (high - low) * height[low];
            if (height[high] > height[low]) {
                low++;
            } else {
                high--;
            }
            maxVol = maxVol > volume ? maxVol : volume;
        }
        return maxVol;
    }
};