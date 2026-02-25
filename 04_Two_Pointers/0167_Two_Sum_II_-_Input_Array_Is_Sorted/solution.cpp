class Solution {
public:
    // Approach 1: normal N2 algo using binary search
    // int binarySearch(vector<int>& nums, int ele, int start) {
    //     int low = start;
    //     int high = nums.size() - 1;
    //     int mid = (high + low) / 2;

    //     while (low <= high) {
    //         mid = (low + high) / 2;
    //         if (nums[mid] == ele) {
    //             return mid;
    //         } else if (ele < nums[mid]) {
    //             high = mid - 1;
    //         } else {
    //             low = mid + 1;
    //         }
    //     }
    //     return -1;
    // }
    // vector<int> twoSum(vector<int>& numbers, int target) {
    //     vector<int> res;
    //     for (int i = 0; i < numbers.size(); i++) {
    //         int remainingTarget = target - numbers[i];
    //         int resIndex = binarySearch(numbers, remainingTarget, i + 1);
    //         if (resIndex == -1) {
    //             continue;
    //         } else {
    //             res.push_back(i + 1);
    //             res.push_back(resIndex + 1);
    //             break;
    //         }
    //     }
    //     return res;
    // }


    // Approach 2: modified binary search
    vector<int> twoSum(vector<int>& numbers, int target) {
        int low = 0;
        int high = numbers.size() - 1;
        int mid = 0;
        while (low <= high) {
            int sum = numbers[low] + numbers[high];
            if (sum == target) {
                return {low + 1, high + 1};
            }
            if (sum < target) low++;
            if (sum > target) high--;
        }
        return {};
    }
};