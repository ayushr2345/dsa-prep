class Solution {
public:
    int findMin(vector<int>& nums) {
        int minimum = nums[0];
        int low = 0;
        int high = nums.size() - 1;
        int mid = 0;
        
        while (low <= high) {
            mid = low + (high - low) / 2;
            minimum = min(nums[mid], minimum);
            if (nums[mid] < nums[high]) {
                high = mid - 1;;
            } else {
                low = mid + 1;
            }
        }
        return minimum;
    }
};